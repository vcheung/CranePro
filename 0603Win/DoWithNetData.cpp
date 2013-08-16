#include "DoWithNetData.h"
#include <QDebug>
#include "mainwindow.h"
extern MainWindow *pCommonWndPoint;


Netdata mtNetQueuen[QueuenSize];//={{0,0}};
int m_NetIntoCount ;//= 0,
int m_NetoutCount;//= 0;
QMutex NetDataMutex;

void PutNetDataIntoQueuen(pNetdata pData)
{
    if(pData == NULL)
    return;
    NetDataMutex.lock();
    memcpy(&mtNetQueuen[m_NetIntoCount++],pData,sizeof(Netdata));   //#把数据放到队列里
    if(m_NetIntoCount>=QueuenSize)
    m_NetIntoCount=0;
    //qDebug()<<m_NetIntoCount<<"    NET    $$$$Queuen~~~~";
    NetDataMutex.unlock();


}
 bool GetNetDataFromQueuen(pNetdata pData)
 {
     bool m_bbSuccess=false;
     if(pData == NULL)
     return m_bbSuccess;
     memset(pData,0,sizeof(Netdata));
     NetDataMutex.lock();
     if(m_NetoutCount!=m_NetIntoCount)
    {
     memcpy(pData,&mtNetQueuen[m_NetoutCount++],sizeof(Netdata));   //#把队列里的数据取出来
     if(m_NetoutCount>=QueuenSize)
     m_NetoutCount=0;
     m_bbSuccess=true;
     //qDebug()<<m_NetoutCount<<"    NET    !!!!!!!!!$$$$Queuen~~~~";
     }
     NetDataMutex.unlock();
     return  m_bbSuccess;
 }
DoWithNetData::DoWithNetData()
{
    this->start();
    m_bIsRunFlag = false;
    IsDataReceived = true;
    memset(&NetFileState,0,sizeof(WRState));
    memset(&NetFileData,0,sizeof(SaveData));
    memset(Buffer,0,200);
    memset(&m_Databuf,0,sizeof(Netdata));
}
DoWithNetData::~DoWithNetData()
{
}
void DoWithNetData::run()
{

   // memset(&m_Databuf,0,sizeof(Netdata));
    while(!m_bIsRunFlag)
    {
        memset(&m_Databuf,0,sizeof(Netdata));
        if(GetNetDataFromQueuen(&m_Databuf))
        {
            if(m_Databuf.Len<3)
                return;
            //qDebug()<<"NET thread running";
            switch((uchar)m_Databuf.DataBuff[3])
            {
            case 1:
                NetCommand01();
                break;
            case 2:
                NetCommand02();
                break;
            case 3:
                NetCommand03(m_Databuf);
                break;
            case 4:
                NetCommand04();
                break;
            case 5:
                NetCommand05();
                break;
            case 6:
                NetCommand06(m_Databuf);
                break;
            case 7:
                NetCommand07(m_Databuf);
                break;
            }

        }
        msleep(10);
    }

}

void DoWithNetData::stopThread()
{


}

void DoWithNetData::NetCommand01()
{
    memset(SendNetData01,0,10);
    SendNetData01[0] = 0xFE;
    SendNetData01[1] = 0xEF;
    SendNetData01[2] = MachID;
    SendNetData01[3] = 0X01;
    SendNetData01[4] = XORValid(SendNetData01,4);
    SendNetData01[5] = 0xFD;
    SendNetData01[6] = 0xFF;
    emit SendNetDataSig(SendNetData01,7) ;
}

void DoWithNetData::NetCommand02()
{


//         return;
//确定读取次数
    if(IsDataReceived)
    {
       // int ReadTimes = 0;
        RecordFile ReadSendNetFile(RecordFilePath);
        memset(&NetFileState,0,sizeof(WRState));
        memset(&NetFileData,0,sizeof(SaveData));
    FileMutex.lock();
    ReadSendNetFile.ReadData((char *)&NetFileState,sizeof(WRState),0);
    FileMutex.unlock();
    if(NetFileState.TurnFlag == 0)
    {
        if(NetFileState.WritePos - NetFileState.ReadPos >= MaxNetSendNum)
           ReadTimes = MaxNetSendNum;
       else if(NetFileState.WritePos - NetFileState.ReadPos < MaxNetSendNum)
           ReadTimes = NetFileState.WritePos - NetFileState.ReadPos ;
    }
    else
    {
        if(MaxCounter - NetFileState.ReadPos >= MaxNetSendNum)
           ReadTimes = MaxNetSendNum;
        else if((MaxCounter - NetFileState.ReadPos < MaxNetSendNum)&&
         ((MaxCounter - NetFileState.ReadPos + NetFileState.WritePos >= MaxNetSendNum)))
           ReadTimes = MaxNetSendNum ;
        else
           ReadTimes = MaxCounter - NetFileState.ReadPos + NetFileState.WritePos;
    }
    for(int i = 0;i < ReadTimes;i++)
    {
      FileMutex.lock();
      ReadSendNetFile.ReadFile(&NetFileData);
      FileMutex.unlock();
      memcpy(&Buffer[17*i],&NetFileData.mWorkCode,4);
      if(NetFileData.IsWorking == 0)
      {
          Buffer[4 + 17*i] = (((uint)(100*NetFileData.NetWeight))>>8)&0XFF;;
          Buffer[5 + 17*i] = ((uint)(100*NetFileData.NetWeight))&0XFF;
      }
      if(NetFileData.IsWorking == 1)
      {
          Buffer[4 + 17*i] = 0xfb;
          Buffer[5 + 17*i] = 0xfb;
      }
      if(NetFileData.IsWorking == 2)
      {
          Buffer[4 + 17*i] = 0xfc;
          Buffer[5 + 17*i] = 0xfc;
      }
      Buffer[6 + 17*i] = NetFileData.CurrentTime.mYear%2000;
      Buffer[7 + 17*i] = NetFileData.CurrentTime.mMonth%13;
      Buffer[8 + 17*i] = NetFileData.CurrentTime.mDay%32;
      Buffer[9 + 17*i] = NetFileData.CurrentTime.mHour%24;
      Buffer[10 + 17*i] = NetFileData.CurrentTime.mMins%60;
      Buffer[11 + 17*i] = NetFileData.CurrentTime.mSec%60;
      Buffer[12 + 17*i] = NetFileData.OverloadFlag;
      Buffer[13 + 17*i] = ((uint)(10*NetFileData.ElePower)>>24)&0XFF;
      Buffer[14 + 17*i] = ((uint)(10*NetFileData.ElePower)>>16)&0XFF;
      Buffer[15 + 17*i] = ((uint)(10*NetFileData.ElePower)>>8)&0XFF;
      Buffer[16 + 17*i] = ((uint)(10*NetFileData.ElePower))&0XFF;
      NetFileState.ReadPos ++;
      if(NetFileState.ReadPos >= MaxCounter)
      {
          NetFileState.ReadPos = 0;
          NetFileState.TurnFlag = 0;
      }
      FileMutex.lock();
      ReadSendNetFile.WriteData((char *)&NetFileState,sizeof(WRState),0);
      //ReadSendNetFile.ReadData((char *)&NetFileState,sizeof(WRState),0);
      FileMutex.unlock();
      pCommonWndPoint->Work->GetWRState(&NetFileState);
      pCommonWndPoint->Adjust_par->GetWRState(&NetFileState);
    }
    }

    memset(SendNetData02,0,200);
    SendNetData02[0] = 0xFE;
    SendNetData02[1] = 0xEF;
    SendNetData02[2] = MachID;
    SendNetData02[3] = 0X02;
    SendNetData02[4] = ReadTimes;
    memcpy(&SendNetData02[5],Buffer,17*ReadTimes);
    SendNetData02[6+17*ReadTimes] = XORValid(SendNetData02,6+17*ReadTimes);
    SendNetData02[7+17*ReadTimes] = 0xFD;
    SendNetData02[8+17*ReadTimes] = 0xFF;
    emit SendNetDataSig(SendNetData02,9+17*ReadTimes);
    IsDataReceived = false;

}

void DoWithNetData::NetCommand03(Netdata CurrentData)
{
    memset(SendNetData03,0,10);
    SendNetData03[0] = 0xFE;
    SendNetData03[1] = 0xEF;
    SendNetData03[2] = MachID;
    SendNetData03[3] = 0X02;
    SendNetData03[4] = 0;
    SendNetData03[5] = XORValid(SendNetData03,5);
    SendNetData03[6] = 0xFD;
    SendNetData03[7] = 0xFF;
    emit SendNetDataSig(SendNetData03,8) ;
    if(ReadTimes == CurrentData.DataBuff[4])
    {
      IsDataReceived = true;
    }

}

void DoWithNetData::NetCommand04( )
{
     memset(SendNetData04,0,100);
    if(mWorkingState == Normal)
    {
        BackWorkInfo NetBackWorkInfo;
        memset(&NetBackWorkInfo,0,sizeof(BackWorkInfo));
        pCommonWndPoint->Work->BackWorkInfoToNet(&NetBackWorkInfo);
        SendNetData04[0] = 0xFE;
        SendNetData04[1] = 0xEF;
        SendNetData04[2] = MachID;
        SendNetData04[3] = 0X04;
        memcpy(&SendNetData04[4],&(NetBackWorkInfo.BWorkCode),4);
        memcpy(&SendNetData04[8],&(NetBackWorkInfo.ShipName),12);
        memcpy(&SendNetData04[20],&(NetBackWorkInfo.DriverName),8);
        SendNetData04[28] = NetBackWorkInfo.CabinNum;
        memcpy(&SendNetData04[29],&(NetBackWorkInfo.CurrNetWeight),2);
        SendNetData04[31] = NetBackWorkInfo.BreakDownInf;
        memcpy(&SendNetData04[32],&(NetBackWorkInfo.CurrEle),4);
        SendNetData04[36] = XORValid(SendNetData04,36);
        SendNetData04[37] = 0xFD;
        SendNetData04[38] = 0xFF;
        emit SendNetDataSig(SendNetData04,39) ;
    }
    if(mWorkingState == NotWork)
    {
        SendNetData04[0] = 0xFE;
        SendNetData04[1] = 0xEF;
        SendNetData04[2] = MachID;
        SendNetData04[3] = 0X05;
        SendNetData04[4] = XORValid(SendNetData04,4);
        SendNetData04[5] = 0xFD;
        SendNetData04[6] = 0xFF;
        emit SendNetDataSig(SendNetData04,7) ;
    }

}

void DoWithNetData::NetCommand05()
{

}

void DoWithNetData::NetCommand06(Netdata CurrentData)
{
    memset(&NetWorkInfo,0,sizeof(WorkInfo));
    memcpy(&NetWorkInfo.msWorkCode, &(CurrentData.DataBuff[4]),4);
    memcpy(&NetWorkInfo.ShipName,&(CurrentData.DataBuff[8]),12);
    memcpy(&NetWorkInfo.DriverName,&(CurrentData.DataBuff[20]),8);
    NetWorkInfo.CabinNum = CurrentData.DataBuff[28];
    pCommonWndPoint->Work->GetWorkInfoFromNet(&NetWorkInfo);

    SendNetData06[0] = 0xFE;
    SendNetData06[1] = 0xEF;
    SendNetData06[2] = MachID;
    SendNetData06[3] = 0X06;
    memcpy(&SendNetData06[4],&NetWorkInfo.msWorkCode,4);
    SendNetData06[8] = XORValid(SendNetData06,8);
    SendNetData06[9] = 0xFD;
    SendNetData06[10] = 0xFF;
    emit SendNetDataSig(SendNetData06,11) ;

}

void DoWithNetData::NetCommand07(Netdata CurrentData)
{
    //memst(&NetTime,0,sizeof(SYSTIM));
    char NeTime[6] = {0};
    memcpy(&NeTime,&CurrentData.DataBuff[4],5);
     //pCommonWndPoint->Adjust_tim->ModfiyTimeFromNet(NeTime);
    NetTime.mYear = CurrentData.DataBuff[4];
    NetTime.mMonth = CurrentData.DataBuff[5];
    NetTime.mDay = CurrentData.DataBuff[6];
    NetTime.mHour = CurrentData.DataBuff[7];
    NetTime.mMins = CurrentData.DataBuff[8];
   pCommonWndPoint->Adjust_tim->ModfiyTimeFromNet(&NetTime);

    SendNetData07[0] = 0xFE;
    SendNetData07[1] = 0xEF;
    SendNetData07[2] = MachID;
    SendNetData07[3] = 0X07;
    SendNetData07[4] = XORValid(SendNetData07,4);
    SendNetData07[5] = 0xFD;
    SendNetData07[6] = 0xFF;
    emit SendNetDataSig(SendNetData07,7) ;
}
char DoWithNetData::XORValid(char* buffer, int len)
{
    char checksum = 0;

    for (int i = 0;  i<len;  i++)
    {
        checksum = checksum ^ buffer[i]; //进行异或交验取值
    }

    return checksum;
}


