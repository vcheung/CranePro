#ifndef DOWITHNETDATA_H
#define DOWITHNETDATA_H
#include "ConfigureData.h"
#include <QThread>
#include "RecordFile.h"


class DoWithNetData:public QThread//创建读串口线程
{
    Q_OBJECT
public:
    DoWithNetData();
    ~DoWithNetData();
    bool m_bIsRunFlag;//线程标志

    void run();
    void stopThread();




    void NetCommand01();
    void NetCommand02();
    void NetCommand03(Netdata CurrentData);
    void NetCommand04();
    void NetCommand05();
    void NetCommand06(Netdata CurrentData);
    void NetCommand07(Netdata CurrentData);

    char SendNetData01[10];
    char SendNetData02[200];
    char SendNetData03[10];
    char SendNetData04[100];
    char SendNetData05[10];
    char SendNetData06[100];
    char SendNetData07[50];

    WRState NetFileState;
    SaveData NetFileData;
    WorkInfo NetWorkInfo;
    SYSTIM  NetTime;
    bool IsDataReceived;
    char Buffer[200];
    int ReadTimes;
    Netdata m_Databuf;

    char XORValid(char *buffer, int len);

signals:
    void SendNetDataSig(char *,uint);

};

#endif // DOWITHNETDATA_H
