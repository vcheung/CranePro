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

/**************������**********************/
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

bool serialcom::Initcom(ComdataArrive m_pFun, QString m_sCom,   //#��ComDataArriveOK����ָ��m_pFun
                        BaudRateType m_eBaund, DataBitsType m_eDataBit,
                        ParityType m_eParity, StopBitsType m_eStopbit,
                        long m_lTimeOut, FlowType m_eFlowtype)
{
     m_Com= new Win_QextSerialPort(m_sCom,QextSerialBase::Polling);
     m_bIsOpenFlag =  m_Com->open(QIODevice::ReadWrite);    //#�򿪴���_open��������bool
     if(m_pFun!=NULL)   //#�ж�m_pFunָ���Ƿ��
       m_curFun= m_pFun;    //#��ָ��m_pFunָ�ĺ�������m_curFun
    if(m_bIsOpenFlag)   //#�жϴ����Ƿ��
    {
        //��������
        m_Com->setBaudRate(m_eBaund);   //#������
        m_Com->setDataBits(m_eDataBit); //#����λ
        m_Com->setParity(m_eParity);    //#��żУ��
        m_Com->setStopBits(m_eStopbit); //#ֹͣλ
        m_Com->setFlowControl(m_eFlowtype);
        m_Com->setTimeout(m_lTimeOut);
        StartComSpyThread();//�����߳�

    }
    return m_bIsOpenFlag;
}
void serialcom::StartComSpyThread()
{
    if(pThread==NULL)
    {
    pThread=new ComSpyThread(this);//�����߳�
    pThread->start();
    }

}

void serialcom::StopComSpyThread()
{
    if(pThread!=NULL)
    pThread->stopThread();
    if(m_Com!=NULL)
    m_Com->close();//�رմ���
    qDebug()<<" **********�����߳��˳�*******";
}
void serialcom::ReadData()
{
    if(m_Com!=NULL)
   {
        if(m_Com->bytesAvailable() >0)
        {
            QByteArray m_cBuff=m_Com->readAll();
            //#m_Com->readAll()_Reads all available data from the device, and returns it as a QByteArray.(from F1)

            //qDebug()<<"*******ԭʼ����***********"<<m_cBuff;
            char *m_data=m_cBuff.data();
            //qDebug()<<"******������ԭʼ����HEX************"<<m_cBuff.toHex();
            if(m_curFun!=NULL)      //#�ж�ָ���Ƿ��__*�������
            m_curFun(m_data,m_cBuff.size());    //����ComDataArriveOK(char *DataBuff, ulong m_ulen)
            }
        }

}
void serialcom::SendData(char *DataBuff, uint m_uSize)
{
    if(m_Com!=NULL&&m_bIsOpenFlag&&m_uSize>0&&DataBuff!=NULL)
    m_Com->write(DataBuff,m_uSize);
    //qDebug()<<"*******д��������**** "<<QByteArray(DataBuff).toHex()<<"---size<<"<< m_uSize;
}





