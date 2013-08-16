#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>
#include <QPropertyAnimation>
#include <QSequentialAnimationGroup>
#include <QTimer>
//#include "dowithserdata.h"
MainWindow *pMainWnd=NULL;
MainWindow *pCommonWndPoint;
int mWorkingState;

extern Netdata mtNetQueuen[QueuenSize];
extern int m_NetIntoCount,m_NetoutCount;
extern QMutex NetDataMutex;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    mWorkingState = NotWork;
    ui->setupUi(this);
    /*#setupUi(this)����.ui�ļ����ɵ���Ĺ��캯������������������ǶԽ�����г�ʼ����
������������Qt���������Ƶ����ӰѴ��廭��������������Qt��������涨����źźͲ۽���������
Ҳ����˵��setupUi �����ǻ������д����֮���������*/

    setWindowFlags(Qt::FramelessWindowHint);
    //#���ô������ԣ�Qt::FramelessWindowHint�����ȥ��������������ֱ��F1��Ӣ��˵����

    pMainWnd=pCommonWndPoint = this;
    animation = NULL;

    m_NetIntoCount = 0; //#�������õ�
    m_NetoutCount = 0;

    memset(&mtNetQueuen,0,QueuenSize*sizeof(Comdata));  //#Ӧ��sizeof(Netdata)��

    /***************�������****************/


    Work = new Workwidget;
    Work->show();
    //#�����湹�캯��&��ʾ


    //�˵�ѡ��
    Adjust_tim = new adjusttimewidget;
    Adjust_par = new adjustparameter;


    //�����޸������������
    SecInTime = new Secretinput(0);
    SecInSensor = new Secretinput(1);
    SecInPara = new Secretinput(2);
    SecInSysEle = new Secretinput(3);
    SecInTG = new Secretinput(4);

    //�����޸�
    Sen_par = new SensorParameter;//(this);
    Sys_ele = new System_electric;

    //��������
    Anim0.setType(QEasingCurve::Linear);
    Anim1.setType(QEasingCurve::OutExpo);
    Anim2.setType(QEasingCurve::InQuint);
    Anim3.setType(QEasingCurve::InOutElastic);
    Anim4.setType(QEasingCurve::InBack);
    Anim5.setType(QEasingCurve::InOutQuart);

    /**********************************����**��*******************/

    /*******************************���ݹ���************************************/
    //�����߳��ÿ�
    pSer_COM = NULL;
    SerComManage();//���ڴ򿪣������������߳�

    pDoWithComdata = new DoWithSerData;//�������ݽ����߳�
    //����
    TGNet = NULL;//�������ô���
    TCPNet = NULL;//�����߳�    //#TCP_Transmission Control Protocol �������Э��
    NetManage();
    pDoWithNetData = new DoWithNetData;




    /*******************************�źźͲ�************************************/
    connect(Work,SIGNAL(SwitchToCompleteWorkSignal()),this,SLOT(ToCompleteWork()));
    //************ ****���������ϲ˵��µĽ����л�****************
    connect(Work,SIGNAL(SwitchToTimeSecretSignal()),this,SLOT(ToSecretTime())); //#to ʱ���������
    connect(Work,SIGNAL(SwitchToSensorSecretSignal()),this,SLOT(ToSecretSensor()));
    connect(Work,SIGNAL(SwitchToParaSecretSignal()),this,SLOT(ToSecretPara()));
    connect(Work,SIGNAL(SwitchToSysEleSecretSignal()),this,SLOT(ToSecretSysEle()));
    connect(Work,SIGNAL(ShutDownSignal()),this,SLOT(ShutDown()));

    connect(Work,SIGNAL(SwitchToGThSignal()),this,SLOT(ToGThsecSlot()));//3G_#��������

    connect(SecInTime,SIGNAL(SwitchToWorkSignal_Sec()),this,SLOT(ToWork()));    //#������������С�ȡ������ť�����ص�work����
    connect(SecInSensor,SIGNAL(SwitchToWorkSignal_Sec()),this,SLOT(ToWork()));
    connect(SecInPara,SIGNAL(SwitchToWorkSignal_Sec()),this,SLOT(ToWork()));
    connect(SecInSysEle,SIGNAL(SwitchToWorkSignal_Sec()),this,SLOT(ToWork()));
    connect(SecInTG,SIGNAL(SwitchToWorkSignal_Sec()),this,SLOT(ToWork()));

    connect(SecInTime,SIGNAL(SwitchToTimeSignal()),this,SLOT(ToTimeSlot()));    //#ת����Ӧ�Ľ���
    connect(SecInSensor,SIGNAL(SwitchToSensorSignal()),this,SLOT(ToSensorSlot()));
    connect(SecInPara,SIGNAL(SwithcToParaSignal()),this,SLOT(ToParaSlot()));
    connect(SecInSysEle,SIGNAL(SwitchToSysEleSignal()),this,SLOT(ToSysEleSlot()));
    connect(SecInTG,SIGNAL(SwitchToNetSignal()),this,SLOT(ToNetSlot()));

    connect(Adjust_tim,SIGNAL(SwitchToWorkSignal_Time()),this,SLOT(ToWork()));  //#ʱ�����ý��淵��
    connect(Sen_par,SIGNAL(SwitchToWorkSignal_Sen()),this,SLOT(ToWork()));
    connect(Adjust_par,SIGNAL(SwitchToWorkSignal_Para()),this,SLOT(ToWork()));
    connect(Sys_ele,SIGNAL(SwitchToWorkSignal_Sysele()),this,SLOT(ToWork()));

    //****************��������������������л�****************
    //connect(Co_work,SIGNAL(SwicthToWorkSignal_Co()),this,SLOT(ToWork()));

    //connect(Co_work,SIGNAL(SwitchToLoginSignal_Co()),this,SLOT(ToWork()));

    connect(TGNet,SIGNAL(sevIPPort(QString,uint)),this,SLOT(NetSet(QString,uint)));
    //#����������õġ�ȷ������ť������sevIPPort�ź�NetSet�������롰TCPNet->InitClient(NetDataArriveOK,IP,Port);��
    connect(TGNet,SIGNAL(TestDataSignal(char*)),this,SLOT(NetDataTest(char*)));
    //#���������Եġ�ȷ������ť������TestDataSignal
    connect(TGNet,SIGNAL(SwitchToWork()),this,SLOT(ToWork()));
    //#������˳�����ť������������

    connect(pDoWithNetData,SIGNAL(SendNetDataSig(char*,uint)),this,SLOT(SendNetData(char*,uint)));
    connect(TCPNet->pNetThread,SIGNAL(NetConnectStateSig(bool)),Work,SLOT(TCPState(bool)));
    connect(TCPNet->pNetThread,SIGNAL(NetConnectStateSig(bool)),TGNet,SLOT(TCPState(bool)));

}

MainWindow::~MainWindow()
{
    delete ui;
}
/************************************�������*************************/
//����Ч��
void MainWindow::CreateAnimation(QWidget *w, const QEasingCurve &easing,int coordx,int coordy)//�������ú���
{
    if(NULL == animation)
    {
        animation = new QPropertyAnimation(w,"geometry");
    }
    animation->setTargetObject(w);
    animation->setDuration(300);
    animation->setStartValue(QRect(coordx,coordy,150,100));
    animation->setEndValue(QRect(0,0,800,480));
    animation->setEasingCurve(easing);
    animation->start();
}

void MainWindow::ToWork()//��������_#���������棬�������������
{
    Work->show();
    CreateAnimation(Work,Anim0,800,480);
    SecInTG->hide();
    SecInTime->hide();
    SecInSensor->hide();
    SecInPara->hide();
    SecInSysEle->hide();
    Adjust_par->hide();
    Adjust_tim->hide();
    Sen_par->hide();
    Sys_ele->hide();
    TGNet->hide();
}

void MainWindow::ToCompleteWork()//ȷ���깤
{
    //Co_work->show();
   // CreateAnimation(Co_work,Anim5,0,480);
    Work->hide();
}


void MainWindow::ToSecretTime()//ʱ���������
{
    SecInTime->show();
    CreateAnimation(SecInTime,Anim4,800,480);
    Work->hide();
}

void MainWindow::ToSecretSensor()//�����������������
{
    SecInSensor->show();
    CreateAnimation(SecInSensor,Anim5,800,480);
    Work->hide();
}

void MainWindow::ToSecretPara()//���Ʋ����������
{
    SecInPara->show();
    CreateAnimation(SecInPara,Anim2,800,480);
    Work->hide();
}

void MainWindow::ToSecretSysEle()//���������������
{
    SecInSysEle->show();
    CreateAnimation(SecInSysEle,Anim1,800,480);
    Work->hide();
}
void MainWindow::ToTimeSlot()//ʱ������
{
    Adjust_tim->show();
    CreateAnimation(Adjust_tim,Anim0,0,480);
    Adjust_tim->ShowCurrentTime();
    SecInTime->hide();
}

void MainWindow::ToSensorSlot()//����������
{
    Sen_par->show();
    CreateAnimation(Sen_par,Anim1,800,480);
    SecInSensor->hide();
}

void MainWindow::ToParaSlot()//���Ʋ���
{
    Adjust_par->show();
    CreateAnimation(Adjust_par,Anim2,800,0);
    SecInPara->hide();
}

void MainWindow::ToSysEleSlot()//��������
{
    Sys_ele->show();
    CreateAnimation(Sys_ele,Anim3,-200,-480);
    SecInSysEle->hide();
}


void MainWindow::ToGThsecSlot()//3G����_#��������
{
    SecInTG->show();
    Work->hide();
    CreateAnimation(TGNet,Anim2,0,480);

}

void MainWindow::ToNetSlot()
{
    SecInTG->hide();
    TGNet->show();
}

/*******************************���ݹ���************************************/
void MainWindow::SerComManage()//�򿪴���
{
    if(pSer_COM == NULL)
    {
        pSer_COM = new serialcom;   //#������
        if(pSer_COM== NULL)
            return;
        if(! pSer_COM->Initcom(ComDataArriveOK,"COM1",      //#ComDataArriveOK�Ѻ�������ȥ_vc
                               BAUD115200,DATA_8,PAR_NONE,STOP_1,100))
            qDebug()<<"COM open fail!";
        else

        {
            qDebug()<<"Serial Thread Successful";
            QTimer *TimerSerData = new QTimer ;
            connect(TimerSerData,SIGNAL(timeout()),this,SLOT(SendModDataSlot()));
            TimerSerData->start(200);   //#������ʱ_

        }

    }

}

void MainWindow::SendModDataSlot()//��ʱ�ô�������ư���������
{
    static uint i = 0;
    i++;
    //qDebug()<<"SendControlData"<<SendControlData;
    SendModData(SendControlData,SendIsSaveState,i);
    if(i>255)
        i = 0;
    //qDebug()<<i;

}



void MainWindow::ComDataArriveOK(char *DataBuff, ulong m_ulen)//���ܴ�������
{
    if(pMainWnd->DataCrcCheck(DataBuff,m_ulen)&&pMainWnd!=NULL)//����������CRCУ��
    {
        Comdata mData;//={0};
        memset(&mData,0,sizeof(Comdata));   //#��mdata����
        memcpy(mData.DataBuff,DataBuff,m_ulen);     //#��DataBuffָ������ݷ���mData.DataBuff��_
        mData.Len=m_ulen;
        PutDataIntoQueuen(&mData);//���ݷ��뻺����У��ṹ�壩
    }
    // pMainWnd->Work->ParseDataArrive(DataBuff,m_ulen);
}
ulong MainWindow::CRCCheck(char *crcBuff,ulong size)//���ݵ�CRCУ��
{
    ulong m_uCrcValue=0;
    if(NULL == crcBuff||size<0)
    return m_uCrcValue;
    //����Ϊcrc����2���ֽڵ��ڴ�ռ䣬������λȫ����Ϊ1��
    unsigned short crc = 0xffff;
    unsigned short a,j,k;
    unsigned char crcValue=0;
    //����ÿһ���ֽڣ�ִ��forѭ�������䡣
    for(a=0;a<size;a++)
    {
        //crc�͵�a���ֽ����ֵ�����ֵ����crc��ע��gemfield[a]��ת��Ϊint��ʱ���з��ŵģ�
        //��ˣ���������ֵ����7Fʱ����Ҫ����Ӧ��ת������
        crc =crc ^ ( (int)crcBuff[a]>=0 ? crcBuff[a] : (crcBuff[a]+256) );
        for(j=0;j<8;j++)
        {
            k=crc & 01;//��crc�����λ�ǲ���0���������0������0xA001���
            crc = crc >> 1;
            if (k==0) continue;
            crc =crc ^ 0xA001;
        }
    }
    crcValue =crc%256;
    m_uCrcValue=(crcValue<<8)&0xff00;
    crcValue =crc/256;
    m_uCrcValue=m_uCrcValue|((crcValue)&0x00ff);
    return m_uCrcValue;    //����������,�����Ǹ�ʮ������
}

bool MainWindow::DataCrcCheck(char *DataBuff, ulong m_ulen)//���ڴ������ݵ�crcУ��
{
    if(DataBuff == NULL||m_ulen<=2)
    return false;
    uint m_CrcLow,m_CrcHig;
    ulong m_uCrcValue=0;
    m_uCrcValue = CRCCheck(DataBuff,m_ulen - 2);
    m_CrcHig=(m_uCrcValue)>>8&0xff;
    m_CrcLow=m_uCrcValue&0xff;
    //qDebug()<<m_CrcHig<<m_CrcLow<<"CRChL";
    //�ж�CRC�Ƿ���ȷ
    if( m_CrcLow==(uchar)DataBuff[m_ulen - 1]&&m_CrcHig == (uchar)DataBuff[m_ulen - 2] )
    {
        qDebug()<< "CRC ok!";
        return true;
    }
    else
    { qDebug()<<"CRC error";
        return false;}
      return false;
}
void MainWindow::SendModData(qint64 Data,qint64 IsSaveState,int Counter)
{
    uint m_CrcLow = 0,m_CrcHig = 0;//���CRC�ߵ�λ
    char SendData[10]={0};//��ŷ��ͻ�������
    SendData[0]=0x01;//modbus ��ַλ
    SendData[1]=0x01;//����λ
    SendData[2]=Data;//����λ
    SendData[3] = IsSaveState;//�Ƿ�洢״̬
    SendData[4]=Counter;


    ulong m_uCrcValue=0;//crcУ�鷵��ֵ
    m_uCrcValue = CRCCheck(SendData,5);//CRCУ��
    //ȡ��CRC�ߵ�λ
    m_CrcHig=m_uCrcValue>>8&0xff;
    m_CrcLow=m_uCrcValue&0xff;
    //��CRC�ߵ�λ���뻺��
    SendData[5]=m_CrcHig;
    SendData[6]=m_CrcLow;

  //�ж�mainwindow��pser_com����������Ѵ���
             if( pMainWnd!=NULL)
             if( pMainWnd->pSer_COM!=NULL)
  //Ȼ�󼴿��õ���mainwindow��pserCOM����ĺ�����������
//                 for(int i =0;i<7;i++)
//                     qDebug("%d",(uchar)SendData[i]);
                  pMainWnd->pSer_COM->SendData(SendData,7);
}

void MainWindow::SendText(QString LineTextInput)//��linetex������ݾ���CRCУ�����
{
//    float LineData  = LineTextInput.toFloat();//�Ѵ��������������ת��Ϊfloat��
//    uint m_CrcLow = 0,m_CrcHig = 0;//���CRC�ߵ�λ
//    char SendData[200]={0};//��ŷ��ͻ�������
//    SendData[0]=0x01;//modbus ��ַλ
//    SendData[1]=0x01;//����λ
//    memcpy(SendData+2,&LineData,sizeof(float));//����������ݷ��뻺����sendData
//    ulong m_uCrcValue=0;//crcУ�鷵��ֵ
//    m_uCrcValue = CRCCheck(SendData,sizeof(float));//CRCУ��
//    //ȡ��CRC�ߵ�λ
//    m_CrcHig=(m_uCrcValue)>>8&0xff;
//    m_CrcLow=m_uCrcValue&0xff;
//    //��CRC�ߵ�λ���뻺��
//    SendData[2+sizeof(float)]=m_CrcHig;
//    SendData[2+sizeof(float)+1]=m_CrcLow;

//  //�ж�mainwindow��pser_com����������Ѵ���
//             if( pMainWnd!=NULL)
//             if( pMainWnd->pSer_COM!=NULL)
//  //Ȼ�󼴿��õ���mainwindow��pserCOM����ĺ�����������

//                  pMainWnd->pSer_COM->SendData(SendData,sizeof(float)+4);

}
/*******************************�������ݹ���************************************/
void MainWindow::NetManage()
{
    if(TGNet == NULL)
    TGNet = new TGNetwork;  //#�������õĽ���
    if(TCPNet == NULL)
    TCPNet = new TCPNetClient;  //#���캯������Client = NULL; pNetThread = NULL;��

    if(TGNet!=NULL&&TCPNet!=NULL)
    {
        sevIP = TGNet->Ip;
        sevPort = TGNet->Port;
        TCPNet->InitClient(NetDataArriveOK,sevIP,sevPort); //#
        qDebug()<<sevIP;
        //TCPNet->InitClient(NULL,"192.168.0.125",8010);
        //char a[20] = "hello net";
        //        TCPNet->SendNetData(a,20);
        //�����������

    }

}


void MainWindow::NetDataArriveOK(char *DataBuff, ulong m_ulen)
{
//   if(pMainWnd->DataCrcCheck(DataBuff,m_ulen)||pMainWnd!=NULL)//����������CRCУ��
//    pMainWnd->Work->ParseDataArrive(DataBuff,m_ulen);
//    qDebug()<<*DataBuff;
//    pMainWnd->TGNet->readTestData(DataBuff,m_ulen);

    if(pMainWnd->NetXORValid(DataBuff,m_ulen)&&pMainWnd!=NULL)//����������CRCУ��
    {
        Netdata mData;
        memset(&mData,0,sizeof(Netdata));
        memcpy(mData.DataBuff,DataBuff,m_ulen%BuffSize);
        mData.Len=m_ulen%BuffSize;
        PutNetDataIntoQueuen(&mData);//���ݷ��뻺����У��ṹ�壩
        pMainWnd->TGNet->readTestData(mData.DataBuff,m_ulen%BuffSize);
    }
}

void MainWindow::NetSet(QString IP, uint Port)
{
    TCPNet->InitClient(NetDataArriveOK,IP,Port);
}

void MainWindow::NetDataTest(char *TestData)
{
    TCPNet->SendNetData(TestData,100);
}

void MainWindow::SendNetData(char *Data, uint mLen)
{
    TCPNet->SendNetData(Data,mLen);
}

uchar MainWindow::XORValid(char* buffer, int len)
{

    uchar checksum = 0;

    for (int i = 0;  i<len;  i++)
    {
        checksum = checksum ^ buffer[i]; //���������ȡֵ
    }
    qDebug("XOR %0X",checksum);
    return checksum;

}

bool MainWindow::NetXORValid(char *buffer, int len)
{
    if(len<3||buffer == NULL)
        return false;
    if((uchar)buffer[len-3] == XORValid(buffer,len-3))
    {
       qDebug()<<"NetXOR is ok";
       return true;
    }

    else
        return false;
}


/*******************************�ر����************************************/
void MainWindow::ShutDown()//�ر����
{
    if( pSer_COM!= NULL)
        pSer_COM->StopComSpyThread();//�����߳�
    if(TCPNet != NULL)
        TCPNet->StopClientSpyThread();//�����߳�
    if(pDoWithComdata != NULL)
        pDoWithComdata->stopThread();//�������ݽ����߳�


    qApp->exit();
}






