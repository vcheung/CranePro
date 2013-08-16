#include "TCPNetClient.h"
#include <QDebug>
#include <QTimer>
#include "mainwindow.h"
extern MainWindow *pCommonWndPoint;

NetSpyThread::NetSpyThread(TCPNetClient *m_pNetClient)
{
    pClient=NULL;
    if(m_pNetClient!=NULL)
    pClient=m_pNetClient;
    m_bIsRunFlag=false;
    IsNetConnect = false;
    NetTimer = new QTimer;
    connect(pClient->Client,SIGNAL(error(QAbstractSocket::SocketError)),
            this,SLOT(displayerror(QAbstractSocket::SocketError))); //#显示错误
    connect(pClient->Client,SIGNAL(connected()),this,SLOT(NetConnected())); //#连接上时，发射connected()信号
    connect(pClient->Client,SIGNAL(disconnected()),this,SLOT(NetNotConnceted()));
    connect(this->NetTimer,SIGNAL(timeout()),this,SLOT(ReConnect()));
    connect(this,SIGNAL(NoDataReconnectSig()),this,SLOT(NoDataReconnectSlot()));


}
NetSpyThread::~NetSpyThread()
{

}

void NetSpyThread::run()
{
    while(!m_bIsRunFlag)
    {
        msleep(10);
        if(pClient != NULL)
        {
            pClient->ReadNetData();
        }
    }
}

void NetSpyThread::stopThread()
{
    m_bIsRunFlag = true;
    this->wait();
}


void NetSpyThread::displayerror(QAbstractSocket::SocketError)
{
    qDebug()<<pClient->Client->errorString();
}
void NetSpyThread::StartThread()
{
}

void NetSpyThread::NetConnected()
{
    m_bIsRunFlag = false;
    this->start();  //#运行run()，读数据
    NetTimer->stop();
    IsNetConnect = true;
    emit NetConnectStateSig(IsNetConnect);
}

void NetSpyThread::NetNotConnceted()
{
   IsNetConnect = false;
   this->stopThread();
   FunIsNetConnect();
   emit NetConnectStateSig(IsNetConnect);
}

void NetSpyThread::FunIsNetConnect()
{
    if(!IsNetConnect)
        NetTimer->start(1000);
}

void NetSpyThread::NoDataReconnect()
{
    emit NoDataReconnectSig();
}

void NetSpyThread::ReConnect()
{
   //pClient->Client->disconnectFromHost();
    pCommonWndPoint->NetManage();
}

void NetSpyThread::NoDataReconnectSlot()
{
    IsNetConnect = false;
    FunIsNetConnect();
    emit NetConnectStateSig(IsNetConnect);
}


TCPNetClient::TCPNetClient()
{
    Client = NULL;
    pNetThread = NULL;

}

void TCPNetClient::InitClient(NetdataArrive m_pFun, QString m_sSvrIP, uint m_uPort)
{
    if(Client == NULL)
    {
        Client = new QTcpSocket;
        Client->abort();
    }
    Client->disconnectFromHost();
    Client->connectToHost(m_sSvrIP,m_uPort);    //#与服务器进行连接
    StartClientSpyThread();     //#主要代码“pNetThread = new NetSpyThread(this);”
    pNetThread->FunIsNetConnect();
    qDebug()<<"errorstring:"<<Client->errorString();


    if(m_pFun != NULL)
    {
        m_curFun = m_pFun;
    }


}
void TCPNetClient::ReadNetData()
{
    static int IsData = 0;
    if(Client != NULL)
    {
      if(Client->bytesAvailable()>0)
      {
          IsData = 0;
          QByteArray m_NetBuff = Client->readAll();
          char *m_data = m_NetBuff.data();

          qDebug()<<"read data from Net:"<<m_NetBuff.toHex();
         // qDebug()<<"read data from Net:"<<m_NetBuff.toUInt(0,16);
          if(m_curFun != NULL)
          {
              m_curFun(m_data,m_NetBuff.size());
          }
      }
      else//在没有服务器数据传来时，可能是网络断开，因此再次发起连接
      {
         IsData++;
         if(IsData > 1000)
         {
            pNetThread->NoDataReconnect();
            IsData = 0;
         }
      }


    }

}

void TCPNetClient::SendNetData(char *DataBuff, uint m_uSize)
{
    if(Client != NULL&&DataBuff != NULL&&m_uSize>0)
    {

        Client->write(DataBuff,m_uSize);
    }
}

void TCPNetClient::StartClientSpyThread()
{
    if(pNetThread == NULL)
    {
        pNetThread = new NetSpyThread(this);
        //pNetThread->start();
    }
}

void TCPNetClient::StopClientSpyThread()
{
    if(pNetThread != NULL)
    {
        pNetThread->stopThread();
    }

    if(Client != NULL)
    {
        Client->close();
    }
}






