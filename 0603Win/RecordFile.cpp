#include "RecordFile.h"

RecordFile::RecordFile(QString mFilePathName):BaseFile(mFilePathName)
{

}

void RecordFile::WriteFile(pSaveData pData)
{
    uint mMarkPos;//�ļ�λ��ָ���־

    memset(&TrdState,0,sizeof(WRState));//����ṹ������
    ReadData((char*)&TrdState,sizeof(WRState),0);//�ȶ��������ļ����ļ�ͷ��ȷ��WritePos(mMarkpos)
    if(TrdState.WritePos < MaxCounter)//С��������ʱ
   {
    mMarkPos=sizeof(WRState)+TrdState.WritePos*sizeof(SaveData);//�ļ�ָ��ƫ�Ƶ�Ҫд��λ��
    if(WriteData((char *)pData,sizeof(SaveData),mMarkPos))//д�ɹ���
   {
    TrdState.WritePos+=1;//�ļ�ָ����һ����λ���������ĳ�
    if(TrdState.WritePos>=MaxCounter)//���ж��ƶ����ָ������洢��֮��ıȽϣ�
        //������ڵ�����MaxCounter��Ҫתͷ����������־��������
    {
    TrdState.WritePos=0;
    TrdState.TurnFlag=1;
//    WriteData((char*)&TrdState,sizeof(WRState),0);
//    return;
    }
    WriteData((char*)&TrdState,sizeof(WRState),0);//��֮Ҫд��¼һ��
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

