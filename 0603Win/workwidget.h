#ifndef WORKWIDGET_H
#define WORKWIDGET_H

#include <QWidget>
#include <QMutex>
#include <QEvent>
#include "ConfigureData.h"
#include "completework.h"
#include "BaseFile.h"
#include "RecordFile.h"

namespace Ui {
class Workwidget;
}

class Workwidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Workwidget(QWidget *parent = 0);
    ~Workwidget();
    void createMenuWidget();

    void ParseDataArrive(char *DataBuff,uint m_ulen);

    void ShowPar(SerCurrentData *pW_mSerCurrentData,BreakInf *pW_mBreakInf);

    CompleteWork *Co_work;
    void GetWorkInfoFromNet(WorkInfo *pNworkInfo);
    void ShowCurrentInfo();
    void BackWorkInfoToNet(BackWorkInfo *pBackWorkInfo);
    WorkInfoState GetIndexFromWorkArray(WorkInfo *pNworkInfo,uint &index);
    void SetWorkArray(uint Index,WorkInfo *pNworkInfo);
    void ShowCurrentWorkInfo(bool m_bIsWork);
    void WriteWorkArrayToFile(bool IsWriteCurrArray);
    void ExchangWorkArray();
    void ManInputCode();//人工输入作业票时
    void WriteWorkStateConfig();
    void ReadWorkStateConfig();
    void GetWRState(WRState *wpWRState);

signals:
    void SwitchToCompleteWorkSignal();
    void SwitchToChooseCraftSignal();

    void SwitchToTimeSecretSignal();//timeSE
    void SwitchToSensorSecretSignal();//sensorSE
    void SwitchToParaSecretSignal();//paramererSE
    void SwitchToSysEleSecretSignal();//sys eleSE

    void ShutDownSignal();//shutdown
    void SwitchToGThSignal();//instr

    void UpdateShowSig();//更新界面显示
    void UpdateNetWorkInfoSig();
    void ShowRecordStateSig();//存储状态
public slots:
    void SwitchToCompleteWorkSlot();
    void SwitchToChooseCraftSlot();

    void SwitchToTimeSecretSlot();//timeSE
    void SwitchToSensorSecretSlot();//sensorSE
    void SwitchToParaSecretSlot();//paramererSE
    void SwitchToSysEleSecretSlot();//sys eleSE

    void ShutDown();//weight
    void SwitchToGThSecretSlot();//instr

    void updatetime();
    void showMenu();

    void UpdateShowSlot();
    void TCPState(bool IsTCP);
    void WorkFinished();
    void ToWorkWidget();
    void UpdateNetWorkInfoSlot();
    void ComIndexChange( int Index);


    void ShowRecordState();


private slots:
    void on_StartWorkBtn_clicked();

    void on_ManInputBtn_clicked();

    void on_QuPi_clicked();

private:
    Ui::Workwidget *ui;
    QWidget *menu;
    QMutex mutex;
    void timerEvent(QTimerEvent *);
    int timerid;
    bool istimeout;
    bool IsManInput;
    bool IsWorking;

    SerCurrentData W_mSerCurrentData;
    BreakInf W_mBreakInf;
    WorkInfo mNworkInfo;
    BackWorkInfo mBackWorkInfo;
    WorkInfo SaveWorkInfo[3];
    BaseFile *pWorkInfoFile;
    RecordFile *pMRecordState;
    WRState mRecordState;

};

#endif // WORKWIDGET_H
