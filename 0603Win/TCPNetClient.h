#ifndef TCPNETCLIENT_H
#define TCPNETCLIENT_H

#include <QObject>
#include <QtNetwork>
#include <QString>
#include <QThread>
#include <QtNetwork>

typedef void (*NetdataArrive)(char *DataBuff,ulong m_ulen);//数据传递出函数
class TCPNetClient;
class NetSpyThread:public QThread//创建读串口线程
{
    Q_OBJECT
public:
    NetSpyThread(TCPNetClient *m_pNetClient);//引用串口对象指针
    ~NetSpyThread();
     bool m_bIsRunFlag;//线程标志
     TCPNetClient *pClient;//串口对象

     void run();
     void stopThread();
     void FunIsNetConnect();
     void NoDataReconnect();

     bool IsNetConnect;
     QTimer *NetTimer;

signals:
    void NetConnectStateSig(bool);
    void NoDataReconnectSig();

public slots:
     void displayerror(QAbstractSocket::SocketError);   //#显示错误
     void StartThread();
     void NetConnected();
     void NetNotConnceted();
     void ReConnect();
     void NoDataReconnectSlot();

};
class TCPNetClient /*: public QObject*/
{
    //Q_OBJECT
public:
    TCPNetClient(/*QObject *parent = 0*/);
    ~TCPNetClient();
    QTcpSocket *Client;
    NetSpyThread   *pNetThread;//线程
private:

    QString ServerMessage;
    quint16 BlockSize;
    QString Ip;
    int Port;
    //NetSpyThread   *pNetThread;//线程
    bool       m_bIsOpenFlag;//串口打开标志
public:
    NetdataArrive m_curFun;//声明传出数据函数
    //初始化串口，并确定数据传出函数m_pFun
    void InitClient(NetdataArrive m_pFun,QString m_sSvrIP,uint  m_uPort);
    void ReadNetData();//读取数据
    void SendNetData(char * DataBuff,uint m_uSize);//发送数据 
    void StartClientSpyThread();//打开线程
    void StopClientSpyThread();//结束线程
};

#endif // TCPNETCLIENT_H
