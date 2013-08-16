#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QPropertyAnimation>
#include <QSequentialAnimationGroup>
#include <QEasingCurve>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMainWindow>
#include "adjustparameter.h"
#include "adjusttimewidget.h"
//#include "completework.h"
#include "secretinput.h"
#include "system_electric.h"
#include "workwidget.h"
#include "sensorparameter.h"
#include "serthread.h"
#include "TGNetwork.h"
#include "TCPNetClient.h"
#include "dowithserdata.h"
#include "DoWithNetData.h"



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    //#explicit��Ҫ���� "���� "���캯��. ָ�����캯��ֻ����ʾʹ��,Ŀ����Ϊ�˷�ֹ����Ҫ����ʽת��.
    ~MainWindow();

    //Login *logwidget;

    //�������ú���
    void CreateAnimation(QWidget *w,const QEasingCurve & easing,int coordx,int coordy);
   /*******************************���ݹ���************************************/
    //��������
    void SerComManage();
    static void ComDataArriveOK(char *DataBuff,ulong m_ulen);
    ulong CRCCheck(char *DataBuff,ulong m_ulen);//CRCУ��
    bool DataCrcCheck(char *DataBuff, ulong m_ulen);
    void SendText(QString LinetexInput);

    void SendModData(qint64 DataHex, qint64 IsSaveState, int Counter);

    //��������
   static void NetDataArriveOK(char *DataBuff,ulong m_ulen);
   void NetManage();
   uchar XORValid(char *buffer, int len);
   bool NetXORValid(char *buffer, int len);


public slots:
    void ToWork();
    void ToCompleteWork();

    void ToSecretTime();
    void ToSecretSensor();
    void ToSecretPara();
    void ToSecretSysEle();
    void ToTimeSlot();
    void ToSensorSlot();
    void ToParaSlot();
    void ToSysEleSlot();
    void ToGThsecSlot();
    void ToNetSlot();
    void ShutDown();

    void NetSet(QString IP,uint Port);
    void NetDataTest(char *TestData);

    void SendModDataSlot();
    void SendNetData(char *Data,uint mLen);

public:
    Workwidget *Work;
    adjustparameter *Adjust_par;
    adjusttimewidget *Adjust_tim;

    Secretinput *SecInTime;
    Secretinput *SecInSensor;
    Secretinput *SecInPara;
    Secretinput *SecInSysEle;
    Secretinput *SecInTG;
    SensorParameter *Sen_par;
    System_electric *Sys_ele;


    serialcom   *pSer_COM;//����
    DoWithSerData *pDoWithComdata;//�������ݴ����߳�
    TGNetwork *TGNet;//�������ý���
    TCPNetClient *TCPNet;//�����߳�
    DoWithNetData *pDoWithNetData;

    QString sevIP;
    uint    sevPort;

    char mSerData[100];


    QVBoxLayout *WindLayout;
    QEasingCurve Anim0;
    QEasingCurve Anim1;
    QEasingCurve Anim2;
    QEasingCurve Anim3;
    QEasingCurve Anim4;
    QEasingCurve Anim5;

    QPropertyAnimation *animation ;

    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
