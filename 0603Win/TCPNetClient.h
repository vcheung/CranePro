#ifndef TCPNETCLIENT_H
#define TCPNETCLIENT_H

#include <QObject>
#include <QtNetwork>
#include <QString>
#include <QThread>
#include <QtNetwork>

typedef void (*NetdataArrive)(char *DataBuff,ulong m_ulen);//���ݴ��ݳ�����
class TCPNetClient;
class NetSpyThread:public QThread//�����������߳�
{
    Q_OBJECT
public:
    NetSpyThread(TCPNetClient *m_pNetClient);//���ô��ڶ���ָ��
    ~NetSpyThread();
     bool m_bIsRunFlag;//�̱߳�־
     TCPNetClient *pClient;//���ڶ���

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
     void displayerror(QAbstractSocket::SocketError);   //#��ʾ����
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
    NetSpyThread   *pNetThread;//�߳�
private:

    QString ServerMessage;
    quint16 BlockSize;
    QString Ip;
    int Port;
    //NetSpyThread   *pNetThread;//�߳�
    bool       m_bIsOpenFlag;//���ڴ򿪱�־
public:
    NetdataArrive m_curFun;//�����������ݺ���
    //��ʼ�����ڣ���ȷ�����ݴ�������m_pFun
    void InitClient(NetdataArrive m_pFun,QString m_sSvrIP,uint  m_uPort);
    void ReadNetData();//��ȡ����
    void SendNetData(char * DataBuff,uint m_uSize);//�������� 
    void StartClientSpyThread();//���߳�
    void StopClientSpyThread();//�����߳�
};

#endif // TCPNETCLIENT_H
