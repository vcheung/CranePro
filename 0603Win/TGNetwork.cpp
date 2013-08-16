#include "TGNetwork.h"
#include "ui_TGNetwork.h"
#include <QDebug>
#include <QSettings>
#include <ConfigureData.h>

TGNetwork::TGNetwork(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TGNetwork)
{
    ui->setupUi(this);  //#初始化网络设置界面……
    setWindowFlags(Qt::FramelessWindowHint);    //#去掉窗口的标题栏
    QSettings settings(IniAddr, QSettings::IniFormat);
    /*#QSettings 类提供“持久性”，平台独立的应用程序设置。意思是，
     *程序关闭后QSettings把窗体大小，位置，用户设置的Option 保
     *存起来，下次打开程序时再重新加载。*/

    Ip = settings.value("Net/IP").toString();   //#***.toString()_格式转为String
    Port = settings.value("Net/Port").toInt();
    ui->IPIput->setText(Ip);
    ui->PortIput->setText(QString::number(Port));
}

TGNetwork::~TGNetwork()
{
    delete ui;
}

void TGNetwork::on_NetBtn_clicked() //#点击网络设置的“确定”按钮
{
    Ip = ui->IPIput->text();
    Port = ui->PortIput->text().toInt();
    ui->NetState->setStyleSheet("background-color:yellow;");
    ui->NetState->setText("正在连接....");
    QSettings settings(IniAddr, QSettings::IniFormat); // 当前目录的INI文件
    settings.beginGroup("Net");//当前组
    settings.setValue("IP", Ip);
    settings.setValue("Port", Port);
    settings.endGroup();
    emit sevIPPort(Ip,Port);
}

void TGNetwork::on_SendTestDataBtn_clicked()//测试
{
    QString TestData = ui->SendTestData->text();

    cTestData = TestData.toLatin1().data();
    emit TestDataSignal(cTestData);


}

void TGNetwork::on_NetBtn_2_clicked()   //#点击退出按钮
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
        ui->NetState->setText("网络已连接上");
    }
    else
    {
        ui->NetState->setStyleSheet("background-color:red;");
        ui->NetState->setText("网络断开");
    }

}
