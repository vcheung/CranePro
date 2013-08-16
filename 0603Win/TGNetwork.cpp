#include "TGNetwork.h"
#include "ui_TGNetwork.h"
#include <QDebug>
#include <QSettings>
#include <ConfigureData.h>

TGNetwork::TGNetwork(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TGNetwork)
{
    ui->setupUi(this);  //#��ʼ���������ý��桭��
    setWindowFlags(Qt::FramelessWindowHint);    //#ȥ�����ڵı�����
    QSettings settings(IniAddr, QSettings::IniFormat);
    /*#QSettings ���ṩ���־��ԡ���ƽ̨������Ӧ�ó������á���˼�ǣ�
     *����رպ�QSettings�Ѵ����С��λ�ã��û����õ�Option ��
     *���������´δ򿪳���ʱ�����¼��ء�*/

    Ip = settings.value("Net/IP").toString();   //#***.toString()_��ʽתΪString
    Port = settings.value("Net/Port").toInt();
    ui->IPIput->setText(Ip);
    ui->PortIput->setText(QString::number(Port));
}

TGNetwork::~TGNetwork()
{
    delete ui;
}

void TGNetwork::on_NetBtn_clicked() //#����������õġ�ȷ������ť
{
    Ip = ui->IPIput->text();
    Port = ui->PortIput->text().toInt();
    ui->NetState->setStyleSheet("background-color:yellow;");
    ui->NetState->setText("��������....");
    QSettings settings(IniAddr, QSettings::IniFormat); // ��ǰĿ¼��INI�ļ�
    settings.beginGroup("Net");//��ǰ��
    settings.setValue("IP", Ip);
    settings.setValue("Port", Port);
    settings.endGroup();
    emit sevIPPort(Ip,Port);
}

void TGNetwork::on_SendTestDataBtn_clicked()//����
{
    QString TestData = ui->SendTestData->text();

    cTestData = TestData.toLatin1().data();
    emit TestDataSignal(cTestData);


}

void TGNetwork::on_NetBtn_2_clicked()   //#����˳���ť
{
    emit SwitchToWork();
}

void TGNetwork::readTestData(char *DataBuff, ulong m_ulen)
{
    char pcTestData[300]= {0};
    memcpy(pcTestData,DataBuff,m_ulen);
//    QString d;
//    d = QString(pcTestData);

//   QString TempData;
//   TempData.sprintf("%s",pcTestData);

    QByteArray data;
    data=data.append(pcTestData,m_ulen);
    data = data.toHex();
    ui->testLab->setText(data);
}
void TGNetwork::TCPState(bool IsTCP)
{
    if(IsTCP)

    {
        ui->NetState->setStyleSheet("background-color:green;");
        ui->NetState->setText("������������");
    }
    else
    {
        ui->NetState->setStyleSheet("background-color:red;");
        ui->NetState->setText("����Ͽ�");
    }

}
