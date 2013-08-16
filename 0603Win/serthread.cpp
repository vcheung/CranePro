#include "serthread.h"
#include <QDebug>

ComSpyThread::ComSpyThread(serialcom *m_pSerCom)
{
      pSerCom=NULL;
      if(m_pSerCom!=NULL)
      pSerCom=m_pSerCom;
      m_bIsRunFlag=false;
}

ComSpyThread::~ComSpyThread()
{
}

void ComSpyThread::run()
{
        while(!m_bIsRunFlag)
        {
         if(pSerCom!=NULL)
         pSerCom->ReadData();
        }

}
void ComSpyThread::stopThread()
{
     m_bIsRunFlag=true;
     this->wait();
}

/**************串口类**********************/
serialcom::serialcom()
{
  //  m_Com=NULL;
    pThread=NULL;
    m_curFun=NULL;
    m_bIsOpenFlag=false;
}
serialcom::~serialcom()
{
}

bool serialcom::Initcom(ComdataArrive m_pFun, QString m_sCom,   //#把ComDataArriveOK传到指针m_pFun
                        BaudRateType m_eBaund, DataBitsType m_eDataBit,
                        ParityType m_eParity, StopBitsType m_eStopbit,
                        long m_lTimeOut, FlowType m_eFlowtype)
{
     m_Com= new Win_QextSerialPort(m_sCom,QextSerialBase::Polling);
     m_bIsOpenFlag =  m_Com->open(QIODevice::ReadWrite);    //#打开串口_open函数返回bool
     if(m_pFun!=NULL)   //#判断m_pFun指针是否空
       m_curFun= m_pFun;    //#把指针m_pFun指的函数传给m_curFun
    if(m_bIsOpenFlag)   //#判断串口是否打开
    {
        //串口设置
        m_Com->setBaudRate(m_eBaund);   //#波特率
        m_Com->setDataBits(m_eDataBit); //#数据位
        m_Com->setParity(m_eParity);    //#奇偶校验
        m_Com->setStopBits(m_eStopbit); //#停止位
        m_Com->setFlowControl(m_eFlowtype);
        m_Com->setTimeout(m_lTimeOut);
        StartComSpyThread();//开启线程

    }
    return m_bIsOpenFlag;
}
void serialcom::StartComSpyThread()
{
    if(pThread==NULL)
    {
    pThread=new ComSpyThread(this);//创建线程
    pThread->start();
    }

}

void serialcom::StopComSpyThread()
{
    if(pThread!=NULL)
    pThread->stopThread();
    if(m_Com!=NULL)
    m_Com->close();//关闭串口
    qDebug()<<" **********串口线程退出*******";
}
void serialcom::ReadData()
{
    if(m_Com!=NULL)
   {
        if(m_Com->bytesAvailable() >0)
        {
            QByteArray m_cBuff=m_Com->readAll();
            //#m_Com->readAll()_Reads all available data from the device, and returns it as a QByteArray.(from F1)

            //qDebug()<<"*******原始数据***********"<<m_cBuff;
            char *m_data=m_cBuff.data();
            //qDebug()<<"******读串口原始数据HEX************"<<m_cBuff.toHex();
            if(m_curFun!=NULL)      //#判断指针是否空__*缓冲队列
            m_curFun(m_data,m_cBuff.size());    //调用ComDataArriveOK(char *DataBuff, ulong m_ulen)
            }
        }

}
void serialcom::SendData(char *DataBuff, uint m_uSize)
{
    if(m_Com!=NULL&&m_bIsOpenFlag&&m_uSize>0&&DataBuff!=NULL)
    m_Com->write(DataBuff,m_uSize);
    //qDebug()<<"*******写串口数据**** "<<QByteArray(DataBuff).toHex()<<"---size<<"<< m_uSize;
}





