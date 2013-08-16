#ifndef TGNETWORK_H
#define TGNETWORK_H

#include <QWidget>
#include <QtNetwork>
#include <QString>
#include <QThread>


namespace Ui {
    class TGNetwork;
}

class TGNetwork : public QWidget
{
    Q_OBJECT

public:
    explicit TGNetwork(QWidget *parent = 0);
    ~TGNetwork();

//    void ConnectTGNet();
//    void WriteNetData();
//    void setIpPort();
//public slots:
//    void DisplayError(QAbstractSocket::SocketError);
//    void ReadNetData();
    void readTestData(char *DataBuff,ulong m_ulen);


    QString Ip;
    uint Port;
    QString ServerMessage;
    QString SendTest;
    quint16 BlockSize;
    char *cTestData;

signals:
    void sevIPPort(QString Ip,uint Port);
    void TestDataSignal(char *TestData);
    void SwitchToWork();

private slots:
    void on_NetBtn_clicked();

    void on_SendTestDataBtn_clicked();
    void on_NetBtn_2_clicked();
     void TCPState(bool IsTCP);

private:
    Ui::TGNetwork *ui;
//    QTcpSocket *Client;


};

#endif // TGNETWORK_H
