#include "dowithserdata.h"
#include <QDebug>
#include "mainwindow.h"
#include <QSettings>
#include "CalculatePar.h"
#include "GeneralCalcuate.h"
#include <QTime>
extern MainWindow *pCommonWndPoint;

Comdata mtQueuen[QueuenSize];//={{0,0}};

int m_intoCount=0,m_outCount=0;
qint64 SendControlData = 0;
qint64 SendIsSaveState = 0;

AllInputPar mAllInputPar ;

QMutex DataMutex;
QMutex FileMutex;
void PutDataIntoQueuen(pComdata pData)  //���ݷ��뻺����У��ṹ�壩
{
    if(pData == NULL)
    return;
    DataMutex.lock();
    memcpy(&mtQueuen[m_intoCount++],pData,sizeof(Comdata));
    if(m_intoCount>=QueuenSize)
    m_intoCount=0;
    //qDebug()<<m_intoCount<<"    Queuen~~~~";
    DataMutex.unlock();


}
 bool GetDataFromQueuen(pComdata pData)
 {
     bool m_bbSuccess=false;
     if(pData == NULL)
     return m_bbSuccess;
     memset(pData,0,sizeof(Comdata));
     DataMutex.lock();
     if(m_outCount!=m_intoCount)
    {
     memcpy(pData,&mtQueuen[m_outCount++],sizeof(Comdata));
     if(m_outCount>=QueuenSize)
     m_outCount=0;
     m_bbSuccess=true;
     }


     DataMutex.unlock();
     return  m_bbSuccess;
 }

DoWithSerData::DoWithSerData()

{
    memset(&mAllInputPar,0,sizeof(AllInputPar));
    memset(&mSerCurrentData,0,sizeof(SerCurrentData));
    memset(&mBreakInf,0,sizeof(BreakInf));
    memset(&mSensorshowpar,0,sizeof(SensorShowPar));
    memset(&mElePar,0,sizeof(ElePar));
    memset(&sysSenPar,0,sizeof(SysSensorPar));
    memset(&Ser_mSaveData,0,sizeof(SaveData));
    memset(&Ser_mWRState,0,sizeof(WRState));
    mRecordFile = new RecordFile(RecordFilePath);
    QSettings settings(IniAddr, QSettings::IniFormat);
    mSerCurrentData.EmptyWeight = settings.value("SerConfig/PiZhong").toFloat();
    mSerCurrentData.OnDutySum = settings.value("SerConfig/OnDutySum").toInt();
    mSerCurrentData.WorkTimes = settings.value("SerConfig/WorkTimes").toInt();
    m_bIsRunFlag = false;
    this->start();


}
DoWithSerData::~DoWithSerData()
{
}


 void DoWithSerData::run()  //#�ڹ��캯����start��
 {
     int IsSerBreak = 0;
     while(!m_bIsRunFlag)
     {

         memset(&m_Databuf,0,sizeof(Comdata));
         if(GetDataFromQueuen(&m_Databuf))
         {
             SerDataAnalyzing(m_Databuf);//�������ݽ���_#���ݷŵ�mSerCurrentData

//////////////////
             Bf_Snr_Calculate(mSerCurrentData.Angle,mSerCurrentData.SwitchState&0x01);//������õ�ϵ�������
             mSerCurrentData.RoughWeight = SumWeightCalculate(mSerCurrentData.SenWeight);
             GrabOverload(mSerCurrentData.RoughWeight,mSerCurrentData.RatedWeight);//���ؼ���_#����δ���㣿
             mSerCurrentData.EleLastWeight = mSerCurrentData.RoughWeight;
             mBreakInf.CommunicationError = false;
             IsSerBreak = 0;
             if((mWorkingState == QuPi)&& (mSerCurrentData.EleLastWeight > 0))
             {
                 mSerCurrentData.EmptyWeight = mSerCurrentData.EleLastWeight;
                 QSettings settings(IniAddr, QSettings::IniFormat);     //#��������
                 settings.beginGroup("SerConfig");
                 settings.setValue("PiZhong",mSerCurrentData.EmptyWeight);
                 settings.endGroup();
                 mWorkingState = NotWork;
             }
             mSerCurrentData.NetWeight = mSerCurrentData.EleLastWeight - mSerCurrentData.EmptyWeight;   //#���㾻��

 //**************��ؼ���************
           SensorErrorCheck(mSerCurrentData.SenWeight,
                              mSerCurrentData.AngleSig,mSerCurrentData.HeightSig);//���������ϼ��


           if(mSerCurrentData.EleLastWeight == 0)
               SendIsSaveState = 0;
           if((mSerCurrentData.EleLastWeight > 0)&&/*(SendIsSaveState == 0)&&*/
             ((mWorkingState == Normal)||(mWorkingState == StartWork)||(mWorkingState == FinishWork) ))
                {
               SaveRecordFile();
               SendIsSaveState = 1;


                }
 //**************����������ʾ************
            WorkParShow();  //#����߶ȡ����ȡ����ء���
 //**************����������������ʾ************
            SensorParShow();
// //**************��������������������ʾ************
            EleParShow();


         }
         else
         {
             IsSerBreak ++;
         }
         if(IsSerBreak > 100)
         {
             mBreakInf.CommunicationError = true;
             WorkParShow();	//#������ʾ��Ϣ
         }
         msleep(10);


     }
 }
 void DoWithSerData::SerDataAnalyzing(Comdata mDatabuf)
 {
     // ��·����������

     mSerCurrentData.SenWeight[0] = mDatabuf.DataBuff[2]+(float)(mDatabuf.DataBuff[3])/100;
     mSerCurrentData.SenWeight[1] = mDatabuf.DataBuff[4]+(float)(mDatabuf.DataBuff[5])/100;
     mSerCurrentData.SenWeight[2] = mDatabuf.DataBuff[6]+(float)(mDatabuf.DataBuff[7])/100;
     mSerCurrentData.SenWeight[3] = mDatabuf.DataBuff[8]+(float)(mDatabuf.DataBuff[9])/100;
     //�Ƕ��ź�
     mSerCurrentData.AngleSig =mDatabuf.DataBuff[10]+(float)(mDatabuf.DataBuff[11])/100;
     //�߶��ź�
     mSerCurrentData.HeightSig = mDatabuf.DataBuff[12]+(float)(mDatabuf.DataBuff[13])/100;
     //�Ƕ�
     mSerCurrentData.Angle = mDatabuf.DataBuff[14]+(float)(mDatabuf.DataBuff[15])/100;

     //�����ܺ�
     mSerCurrentData.EleOnOff = (mDatabuf.DataBuff[16]<<24) | (mDatabuf.DataBuff[17]<<16) |
             (mDatabuf.DataBuff[18])<<8|mDatabuf.DataBuff[19];
     mSerCurrentData.EleSupport = (mDatabuf.DataBuff[20]<<24) | (mDatabuf.DataBuff[21]<<16) |
             (mDatabuf.DataBuff[22]<<8)|mDatabuf.DataBuff[23];
     //����ʵʱ����ֵ
     mSerCurrentData.EleCurrWeight = mDatabuf.DataBuff[24]+(float)mDatabuf.DataBuff[25]/100;
     //����������Ч����
     mSerCurrentData.EleEffectiveNum = mDatabuf.DataBuff[26]<<8|mDatabuf.DataBuff[27];
     //����������������
     mSerCurrentData.EleLastWeight = mDatabuf.DataBuff[28]+(float)mDatabuf.DataBuff[29]/100;
     //�ɼ���״̬
     mSerCurrentData.CollectionState = mDatabuf.DataBuff[30];

     //�ܺ�
     mSerCurrentData.SumEleConsump = (float)((mDatabuf.DataBuff[31]<<24)|(mDatabuf.DataBuff[32] <<16)
                                      |(mDatabuf.DataBuff[33]<<8)|mDatabuf.DataBuff[34])/10;
     //��������״̬
     mSerCurrentData.SwitchState = (uchar)mDatabuf.DataBuff[35];
     //����
     mSerCurrentData.Counter =(uchar)mDatabuf.DataBuff[36];
 }

 void DoWithSerData::WorkParShow()
 {
     //����߶ȣ����߶��źţ��߶�ϵ�����߶���㣩
      mSerCurrentData.Height = HeightCalculate(mSerCurrentData.HeightSig,
           mAllInputPar.HeightCoefficientInput,mAllInputPar.HeightZeroInput);
    //���ȼ��㣨�Ƕȣ�
      mSerCurrentData.Range = RangeCalculate(mSerCurrentData.Angle);
    //���ؼ��� �����ȣ�������
      mSerCurrentData.RatedWeight = eZhongCalculate(mSerCurrentData.Range,
                                 mSerCurrentData.SwitchState&0x01);
      ////λ�ñ�ʶ   ���ر�ʶ
      mSerCurrentData.Position =  mSerCurrentData.SwitchState & 0x08;
      mSerCurrentData.Overload =  mSerCurrentData.SwitchState & 0x01;

      pCommonWndPoint->Work->ShowPar(&mSerCurrentData,&mBreakInf);	//#������ʾ��Ϣ

 }

 void DoWithSerData::SensorParShow()
 {
     mSensorshowpar.OnOffSen = mSerCurrentData.SenWeight[0];
     mSensorshowpar.SupportSen = mSerCurrentData.SenWeight[1];
     mSensorshowpar.AngleSen = mSerCurrentData.AngleSig;
     mSensorshowpar.HeightSen = mSerCurrentData.HeightSig;
     mSensorshowpar.Angle = mSerCurrentData.Angle;
     mSensorshowpar.Height = mSerCurrentData.Height;//
     pCommonWndPoint->Sen_par->ShowSenPar(&mSensorshowpar);
 }

 void DoWithSerData::EleParShow()
 {
     mElePar.EleSupport = mSerCurrentData.EleSupport;
     mElePar.EleOnOff = mSerCurrentData.EleOnOff;
     mElePar.EffectiveNum = mSerCurrentData.EleEffectiveNum;

     pCommonWndPoint->Sys_ele->ShowElePar(&mElePar); //��������������ʾ
 }

 void DoWithSerData::SaveRecordFile()
 {
     Ser_mSaveData.mWorkCode = WorkCode;
     Ser_mSaveData.NetWeight = mSerCurrentData.NetWeight;       //#�澻��
     QDateTime CurTime = QDateTime::currentDateTime();


     Ser_mSaveData.CurrentTime.mYear =CurTime.date().year()%2000 ;
     Ser_mSaveData.CurrentTime.mMonth =CurTime.date().month()%13;
     Ser_mSaveData.CurrentTime.mDay =CurTime.date().day()%32;
     Ser_mSaveData.CurrentTime.mHour =CurTime.time().hour()%24;
     Ser_mSaveData.CurrentTime.mMins =CurTime.time().minute()%60;
     Ser_mSaveData.CurrentTime.mSec =CurTime.time().second()%60;

     Ser_mSaveData.OverloadFlag = mSerCurrentData.Overload;     //#�泬��
     Ser_mSaveData.ElePower = mSerCurrentData.SumEleConsump;    //#���ܺ�

     if(mWorkingState == Normal)
     {
         Ser_mSaveData.IsWorking = 0;
         mSerCurrentData.OnDutySum = mSerCurrentData.OnDutySum + Ser_mSaveData.NetWeight;   //#�����ۼ�+���ξ���
         mSerCurrentData.WorkTimes ++;      //#��ҵ�����Լ�
         QSettings settings(IniAddr, QSettings::IniFormat);     //#�洢����
         settings.beginGroup("SerConfig");
         settings.setValue("OnDutySum",mSerCurrentData.OnDutySum);
         settings.setValue("WorkTimes",mSerCurrentData.WorkTimes);
         settings.endGroup();
     }


     if(mWorkingState == StartWork)
     {
        Ser_mSaveData.IsWorking = 1;
        mWorkingState = Normal;
     }
     if(mWorkingState == FinishWork)
     {
        Ser_mSaveData.IsWorking = 2;
        mWorkingState = NotWork;
        mSerCurrentData.OnDutySum = 0;
        mSerCurrentData.WorkTimes = 0;
        QSettings settings(IniAddr, QSettings::IniFormat);
        settings.beginGroup("SerConfig");
        settings.setValue("OnDutySum",mSerCurrentData.OnDutySum);
        settings.setValue("WorkTimes",mSerCurrentData.WorkTimes);
        settings.endGroup();
     }

     FileMutex.lock();
     mRecordFile->WriteFile(&Ser_mSaveData);
     mRecordFile->ReadData((char *)&Ser_mWRState,sizeof(WRState),0);
     FileMutex.unlock();
     pCommonWndPoint->Work->GetWRState(&Ser_mWRState);
     pCommonWndPoint->Adjust_par->GetWRState(&Ser_mWRState);


 }

 void DoWithSerData::stopThread()
 {
      m_bIsRunFlag=true;
      this->wait();
 }

 //����(����)����//�ýǶȼ�����ȣ�����Ƕ�����,��ֵ���Ҷ�Ӧ����
  float DoWithSerData:: RangeCalculate(float p_angle)//����Ƕ�
 {
  float  pi=3.1415926;
  float  p_range;

  if(LENGTH_PARAM[0].ARM_REGULAR==1)
  {
   p_range=p_angle;
   p_range*=pi;
   p_range/=180;
   p_range=cos(p_range);
   p_range*=LENGTH_PARAM[0].ARM_MOVE;
   p_range+=LENGTH_PARAM[0].ARM_FIX;
  }
  else if(LENGTH_PARAM[0].ARM_REGULAR==0)
  {
   p_range=calculate_chazhi(p_angle,LENGTH_PARAM[0].ARMNR_ANGLE,LENGTH_PARAM[0].ARMNR_RANGE,LENGTH_PARAM[0].ARMNR_POT);
  }
  return(p_range);
  }
 //�߶ȼ���
  float DoWithSerData::HeightCalculate(float HeightSig,
                                       float HeightCoefficient,float HeightZero)
  {

       static float  gaodu_temp1[10]={0.0};
       unsigned char i=0;
       float ga=0;

       for(i=9;i>0;i--)
       gaodu_temp1[i]=gaodu_temp1[i-1];
       gaodu_temp1[0]=HeightCoefficient*(HeightSig-HeightZero);

       for(i=0;i<10;i++)
       ga=ga+gaodu_temp1[i];
       ga=ga/10;
       if(ga<-30.0)
       ga=-30.0;
       if(ga>40.0)
       ga=40.0;
       return(ga);

  }

  //����ѡ��������뿪���ź��ж�
  //������������   ���ݹ����������
  float DoWithSerData:: eZhongCalculate(float CRange,uchar WorkCondition)
  {
    float CRateWeight = 0;
    if(WorkCondition==0)    //ץ������
        CRateWeight=calculate_chazhi(CRange,EZHONG_PARAM[0].FUDU_ZD,
                                EZHONG_PARAM[0].EZHONG_ZD,EZHONG_PARAM[0].EZHONG_ZD_POT);
    else
    if(WorkCondition==1)    //��������
        CRateWeight=calculate_chazhi(CRange,EZHONG_PARAM[0].FUDU,
                                  EZHONG_PARAM[0].EZHONG,EZHONG_PARAM[0].EZHONG_POT);

   return(CRateWeight);
  }

  float DoWithSerData:: Bf_Snr_Zero_Calculate(float p,unsigned char n)//�������������������
  {
   p=calculate_chazhi(p,BIANFU_COEFF[n].ANGLE,BIANFU_COEFF[n].ZERO,BIANFU_COEFF[n].POT);
   return(p);
  }

  //���������ϵ��
  float DoWithSerData::Bf_Snr_Coeff_Calculate(float p,unsigned char n)//����������������ϵ��
  {
   p=calculate_chazhi(p,BIANFU_COEFF[n].ANGLE,BIANFU_COEFF[n].COEFF,BIANFU_COEFF[n].POT);
   return(p);
  }

  //���㴫������㡢ϵ��
  //p������
  void DoWithSerData::Bf_Snr_Calculate(float p,uchar WorkCondition)//���ݹ�����������ϵ��
  {
   if(WorkCondition==0)      //��������
   {
    sysSenPar.SysZero1=Bf_Snr_Zero_Calculate(p,0);
    sysSenPar.SysZero2=Bf_Snr_Zero_Calculate(p,1);
    sysSenPar.SysCoff1=Bf_Snr_Coeff_Calculate(p,0);
    sysSenPar.SysCoff2=Bf_Snr_Coeff_Calculate(p,1);

   }
   if(WorkCondition==1)      //ץ������
   {
    sysSenPar.SysZero1=Bf_Snr_Zero_Calculate(p,2);
    sysSenPar.SysZero2=Bf_Snr_Zero_Calculate(p,3);
    sysSenPar.SysCoff1=Bf_Snr_Coeff_Calculate(p,2);
    sysSenPar.SysCoff2=Bf_Snr_Coeff_Calculate(p,3);
   }
  }

  //�����ʼ����ĸ���������
  float DoWithSerData:: SumWeightCalculate(float *WeightSig)
  {
      float CWeight1=0,CWeight2=0,CWeight3=0,CWeight4=0;


    if(SysWidgetParChoice == 1)
    CWeight1=(WeightSig[0]-sysSenPar.SysZero1)*sysSenPar.SysCoff1;
    else
    CWeight1=(WeightSig[0]-mAllInputPar.OnOffZeroInput)*mAllInputPar.OnOffCoefficientInput;
    if(WeightSig<0)
    CWeight1=0;

   if(SysWidgetParChoice == 1)
   CWeight2=(WeightSig[1]-sysSenPar.SysZero2)*sysSenPar.SysCoff2;
   else
   CWeight2=(WeightSig[1]-mAllInputPar.SupportZeroInput)*mAllInputPar.SupportCoefficientInput;
   if(WeightSig<0)
   CWeight2=0;

   if(SysWidgetParChoice == 1)
   CWeight3=(WeightSig[2]-sysSenPar.SysZero1)*sysSenPar.SysCoff1;
   else
   CWeight3=(WeightSig[2]-mAllInputPar.OnOffZeroInput)*mAllInputPar.OnOffCoefficientInput;
   if(WeightSig<0)
   CWeight3=0;

  if(SysWidgetParChoice == 1)
  CWeight4=(WeightSig[3]-sysSenPar.SysZero2)*sysSenPar.SysCoff2;
  else
  CWeight4=(WeightSig[3]-mAllInputPar.SupportZeroInput)*mAllInputPar.SupportCoefficientInput;
  if(WeightSig<0)
  CWeight4=0;
  //3,4��δ�ã�Ϊ��
  CWeight3 = 0;
  CWeight4 = 0;
  return CWeight1 + CWeight2 + CWeight3 + CWeight4;
  }
//***********���ϼ��***********
void DoWithSerData::SensorErrorCheck(float *WeightSig,float AngleSig,float HeightSig)
  {
   if(SENSOR1==1)
   {
     if(WeightSig[0]>CARRENT_MAX||WeightSig[0]<CARRENT_MIN)
     mBreakInf.WeightSensor1 = true;
     else
     mBreakInf.WeightSensor1 = false;
   }
   else
    mBreakInf.WeightSensor1 = false;

   if(SENSOR2==1)
   {
    if(WeightSig[1]>CARRENT_MAX||WeightSig[1]<CARRENT_MIN)
        mBreakInf.WeightSensor2 = true;
        else
        mBreakInf.WeightSensor2 = false;
   }
   else
    mBreakInf.WeightSensor2 = false;

   if(SENSOR3==1)
   {
    if(WeightSig[2]>CARRENT_MAX||WeightSig[2]<CARRENT_MIN)
        mBreakInf.WeightSensor3 = true;
        else
        mBreakInf.WeightSensor3 = false;
   }
   else
   mBreakInf.WeightSensor3 = false;

   if(SENSOR4==1)
   {
    if(WeightSig[3]>CARRENT_MAX||WeightSig[3]<CARRENT_MIN)
        mBreakInf.WeightSensor4 = true;
        else
        mBreakInf.WeightSensor4 = false;
   }
   else
   mBreakInf.WeightSensor4 = false;


//********�����ĸ�Ϊ�������������ϼ��***********

   //�Ƕȴ��������ϼ��

    if(SENSOR5==1)
   {
    if(AngleSig>CARRENT_MAX||AngleSig<CARRENT_MIN)
     mBreakInf.AngleSensor = true;
    else
    mBreakInf.AngleSensor = false;
   }
   else
     mBreakInf.AngleSensor = false;

    //�߶ȴ��������ϼ��

    if(SENSOR6==1)
   {
    if(HeightSig>CARRENT_MAX||HeightSig<CARRENT_MIN)
     mBreakInf.HeightSensor = true;
    else
     mBreakInf.HeightSensor = false;
   }
   else
     mBreakInf.HeightSensor = false;
}

//ץ������
void DoWithSerData:: GrabOverload(float mSumWeight,float CRateWeight)
{

 static uchar OverloadCounterA = 0,OverloadCounterB = 0;
 static uchar SlowDownCounter = 0;



 if(mSumWeight>(CRateWeight*mAllInputPar.InstantValue))	//˲ʱ���
 {
     OverloadCounterA++;
     if(OverloadCounterA >= OVERLOADCOUNTERA*mAllInputPar.InstantDelay)
     SendControlData |= 0x01;
               //lcd��ƿ���
 }
 else
     OverloadCounterA = 0;

 if(mSumWeight>(CRateWeight*mAllInputPar.ControlValue))	//������ʱ����
 {
     OverloadCounterB++;
     if(OverloadCounterB >= OVERLOADCOUNTERB*mAllInputPar.ControlDelay)
     SendControlData |= 0x01;
  }

 else
 {
     SendControlData &= 0xfe;
     OverloadCounterB = 0;
     OverloadCounterA = 0;
 }


 if(mSumWeight>(CRateWeight*mAllInputPar.AlarmValue))	//�����������
 {
      SendControlData |= 0x10;
 }
 else
 {
     SendControlData &= 0xef;
 }




 //���ٿ���
 if(mSumWeight > mAllInputPar.SlowValue)
 {
   SlowDownCounter++;
   if(SlowDownCounter > OVERLOADCOUNTERA*mAllInputPar.SlowDelay)
     SendControlData |= 0x02;
 }
 else
 {
    SlowDownCounter = 0;
    SendControlData &= 0xfd;
 }

}







