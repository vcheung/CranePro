#include "RecordFile.h"

RecordFile::RecordFile(QString mFilePathName):BaseFile(mFilePathName)
{

}

void RecordFile::WriteFile(pSaveData pData)
{
    uint mMarkPos;//文件位置指针标志

    memset(&TrdState,0,sizeof(WRState));//缓冲结构体置零
    ReadData((char*)&TrdState,sizeof(WRState),0);//先读出现有文件的文件头以确定WritePos(mMarkpos)
    if(TrdState.WritePos < MaxCounter)//小于最大最长量时
   {
    mMarkPos=sizeof(WRState)+TrdState.WritePos*sizeof(SaveData);//文件指针偏移到要写的位置
    if(WriteData((char *)pData,sizeof(SaveData),mMarkPos))//写成功否
   {
    TrdState.WritePos+=1;//文件指针移一个单位，整条语句的长
    if(TrdState.WritePos>=MaxCounter)//再判断移动后的指针和最大存储量之间的比较，
        //如果大于等于了MaxCounter就要转头，接两个标志变量置零
    {
    TrdState.WritePos=0;
    TrdState.TurnFlag=1;
//    WriteData((char*)&TrdState,sizeof(WRState),0);
//    return;
    }
    WriteData((char*)&TrdState,sizeof(WRState),0);//总之要写记录一次
    }
    }


}

ReadState RecordFile::ReadFile(pSaveData pData)
{

      memset(pData,0,sizeof(SaveData));
      uint mMarkPos;
      memset(&TrdState,0,sizeof(WRState));

      ReadData((char*)&TrdState,sizeof(WRState),0);
      if(TrdState.TurnFlag==0)
     {
          if(TrdState.WritePos == TrdState.ReadPos)
              return SendOver;
          if(TrdState.WritePos > TrdState.ReadPos)
           {

             mMarkPos=sizeof(WRState)+TrdState.ReadPos*sizeof(SaveData);
             if(ReadData((char *)pData,sizeof(SaveData),mMarkPos))
                 return ReadSuccess;
             else
                return ReadFail;
          }

      }
      else
      {
           if(TrdState.ReadPos >= MaxCounter)
           {
               TrdState.TurnFlag = 0;
               TrdState.ReadPos = 0;
               WriteData((char*)&TrdState,sizeof(WRState),0);
               return  SendOver;
           }
           if(TrdState.ReadPos < MaxCounter)
            {

              mMarkPos=sizeof(WRState)+TrdState.ReadPos*sizeof(SaveData);
              if(ReadData((char *)pData,sizeof(SaveData),mMarkPos))
                  return ReadSuccess;
              else
                 return ReadFail;
           }

       }

}

