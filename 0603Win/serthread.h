#ifndef SERTHREAD_H
#define SERTHREAD_H

#include <QThread>
#include <QString>
#include <qextserialbase.h>
#include "win_qextserialport.h"

typedef void (*ComdataArrive)(char *DataBuff,ulong m_ulen);//���ݴ��ݳ�����
class serialcom;
class ComSpyThread:public QThread//�����������߳�
{
    Q_OBJECT
public:
     bool m_bIsRunFlag;//�̱߳�־
     serialcom *pSerCom;//���ڶ���
     ComSpyThread(serialcom *m_pSerCom);//���ô��ڶ���ָ��
     ~ComSpyThread();
     void run();
     void stopThread();

};

class serialcom//�������ڶ��󣬶������߳�
{
public:
    serialcom();
    ~serialcom();
private:
    Win_QextSerialPort *m_Com;//��������
    ComSpyThread   *pThread;//�߳�
    bool       m_bIsOpenFlag;//���ڴ򿪱�־
public:
    ComdataArrive m_curFun;//�����������ݺ���
    //��ʼ�����ڣ���ȷ�����ݴ�������m_pFun
    bool Initcom(ComdataArrive m_pFun,QString m_sCom,BaudRateType m_eBaund,DataBitsType m_eDataBit,ParityType m_eParity,
                  StopBitsType m_eStopbit,long m_lTimeOut,FlowType m_eFlowtype=FLOW_OFF);
    void StartComSpyThread();//���߳�
    void StopComSpyThread();//�����߳�
    void SendData(char * DataBuff,uint m_uSize);//��������
    void ReadData();//��ȡ����


};



#endif


