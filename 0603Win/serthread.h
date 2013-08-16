#ifndef SERTHREAD_H
#define SERTHREAD_H

#include <QThread>
#include <QString>
#include <qextserialbase.h>
#include "win_qextserialport.h"

typedef void (*ComdataArrive)(char *DataBuff,ulong m_ulen);//数据传递出函数
class serialcom;
class ComSpyThread:public QThread//创建读串口线程
{
    Q_OBJECT
public:
     bool m_bIsRunFlag;//线程标志
     serialcom *pSerCom;//串口对象
     ComSpyThread(serialcom *m_pSerCom);//引用串口对象指针
     ~ComSpyThread();
     void run();
     void stopThread();

};

class serialcom//创建串口对象，读串口线程
{
public:
    serialcom();
    ~serialcom();
private:
    Win_QextSerialPort *m_Com;//创建串口
    ComSpyThread   *pThread;//线程
    bool       m_bIsOpenFlag;//串口打开标志
public:
    ComdataArrive m_curFun;//声明传出数据函数
    //初始化串口，并确定数据传出函数m_pFun
    bool Initcom(ComdataArrive m_pFun,QString m_sCom,BaudRateType m_eBaund,DataBitsType m_eDataBit,ParityType m_eParity,
                  StopBitsType m_eStopbit,long m_lTimeOut,FlowType m_eFlowtype=FLOW_OFF);
    void StartComSpyThread();//打开线程
    void StopComSpyThread();//结束线程
    void SendData(char * DataBuff,uint m_uSize);//发送数据
    void ReadData();//读取数据


};



#endif


