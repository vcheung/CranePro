#ifndef CONFIGUREDATA_H
#define CONFIGUREDATA_H
#include <QObject>
#include <QMutex>

#define QueuenSize 50
#define BuffSize 55
#define SysWidgetParChoice 1 //称重传感器的参数选择，选为系统或者界面输入，为1表示用系统为0表示界面输入
#define SENSOR1 1 //重力传感器通道启用
#define SENSOR2 1 //重力传感器通道启用
#define SENSOR3 0 //未启用
#define SENSOR4 0 //未启用
#define SENSOR5 1 //角度传感器通道启用
#define SENSOR6 1 //高度传感器通道启用
#define SENSOR7 0 //未启用
#define SENSOR8 0 //未启用

#define CARRENT_MAX    24.5  //传感器最大电流  单位：毫安
#define CARRENT_MIN    3.0   //传感器最小电流  单位：毫安

//输出控制比例值(抓斗)
#define ALAM_OUT1       1.15   //瞬时输出比例
#define ALAM_OUT2       1.05   //超载输出比例
#define ALAM_OUT3       1.0   //解除输出比例

//输出控制比例值（吊钩）
#define DALAM_OUT1      1.10   //瞬时输出比例
#define DALAM_OUT2      1.05   //超载输出比例
#define DALAM_OUT3      1.00   //解除输出比例

#define OVERLOADCOUNTERA 10  //超载检测次数 ，DALAM_OUT1情况下
#define OVERLOADCOUNTERB 30  //DALAM_OUT2情况下

#define SlowDownWeight  10

#define MaxCounter 20000
#define MaxNetSendNum 10
#define IniAddr  "Configure.ini"
#define RecordFilePath "Storage.dat"
#define WorkInfoFile "WorkInfo.dat"

#pragma pack(1)

typedef struct//缓存队列
{
    char DataBuff[BuffSize];
    int  Len;
}Comdata,*pComdata;

typedef struct//缓存队列
{
    char DataBuff[BuffSize];
    int  Len;
}Netdata,*pNetdata;//59
//存储数据结构
typedef struct
{
    int  WritePos;
    int  ReadPos;
    char TurnFlag;

}WRState,*pWRState;//9

typedef struct
{
    char mYear;
    char mMonth;
    char mDay;
    char mHour;
    char mMins;
    char mSec;
}SYSTIM;
typedef struct
{
    long mWorkCode;
    float NetWeight;
    SYSTIM CurrentTime;
    char OverloadFlag;
    float ElePower;
    char  IsWorking;


}SaveData,*pSaveData;//20
//#pragma pack()


typedef struct
{
    float SenWeight[4];
    float AngleSig;
    float HeightSig;
    float Angle;
    float EleOnOff;
    float EleSupport;
    float EleCurrWeight;
    uint  EleEffectiveNum;
    float EleLastWeight;
    uchar CollectionState;
    float SumEleConsump;
    uchar SwitchState;
    uint  Counter;

    float NetWeight;//净重
    uint   OnDutySum;//当班累计
    uint   WorkTimes;//作业次数
    float RoughWeight;//毛重
    float EmptyWeight;//皮重
    float RatedWeight;//额重
    float Height;//高度
    float Range;//幅度
    float EnergyConsumption;//电量能耗
    uchar Position;//位置
    uchar Overload;//超载

}SerCurrentData;//80

typedef struct
{
    float HeightZeroInput;//高度零点
    float HeightCoefficientInput;//高度系数
    float DataNumInput;//数据采集个数
    float OnOffZeroInput;//开闭零点
    float SupportZeroInput;//支持零点
    float OnOffCoefficientInput;//开闭系数
    float OFDemarcateWeightInput;//开闭标定重量
    float SupportCoefficientInput;//支持系数
    float SDemarcateWeightInput;//支持标定重量
    float DynamicCoefficientInput;//动态系数

    uint AlarmValue;
    uint ControlValue;
    uint InstantValue;
    uint SlowValue;
    uint ControlDelay;
    uint InstantDelay;
    uint SlowDelay;

    float ZeroPoint;
    float CoefficientModify;
}AllInputPar;//76

typedef struct
{
  float OnOffSen;//开闭传感器
  float SupportSen;//支持传感器
  float AngleSen;//角度传感器
  float HeightSen;//高度传感器
  float Angle;//角度
  float Height;//高度

}SensorShowPar;//传感器界面显示参数24

typedef struct
{
    float SysZero1;
    float SysZero2;
    float SysZero3;
    float SysZero4;

    float SysCoff1;
    float SysCoff2;
    float SysCoff3;
    float SysCoff4;

}SysSensorPar;//系统重力传感器参数，零点和系数32

typedef struct
{
    bool WeightSensor1;//1号传感器故障否，true为故障
    bool WeightSensor2;//2号传感器故障否，true为故障
    bool WeightSensor3;//3号传感器故障否，true为故障
    bool WeightSensor4;//4号传感器故障否，true为故障

    bool AngleSensor;//角度传感器故障否，true为故障
    bool HeightSensor;//高度传感器故障否，true为故障
    bool CommunicationError;//串口通信故障

}BreakInf;//故障检测7

typedef struct
{
    float  EleSupport;//支持传感器
    float  EleOnOff;//开闭传感器
    int EffectiveNum;

}ElePar;//电量控制参数界面参数//12

#pragma pack()

typedef struct
{
    long msWorkCode;
    char ShipName[13];
    char DriverName[9];
    char CabinNum;
}WorkInfo;//27

typedef struct
{
    long BWorkCode;
    char ShipName[13];
    char DriverName[9];
    char CabinNum;
    char CurrNetWeight[3];
    char BreakDownInf;
    char CurrEle[5];
}BackWorkInfo;//36



enum WorkingState   //#工作状态的枚举
{
    Normal = 1,
    StartWork = 2,
    FinishWork = 3,
    NotWork =4,
    QuPi = 5
};//16
enum ReadState//写文件函数返回值枚举
{
    ReadSuccess = 1,
    ReadFail = 2,
    SendOver = 3,
    OtherError = 4
};

enum WorkInfoState
{
    InitWork = 1,
    UpdateWork = 2,
    SetWork = 3,
    ErrorWork =4
};

//typedef struct
//{
//    long SavWorkCode;
//    char DriverName[9];
//    char ShipName[13];
//    char CabinNum;
//}SaveWorkInfo;





extern int m_intoCount,m_outCount;
extern qint64 SendControlData;
extern qint64 SendIsSaveState;
extern Comdata mtQueuen[QueuenSize];
extern AllInputPar mAllInputPar;



extern void PutDataIntoQueuen(pComdata pData);
extern bool GetDataFromQueuen(pComdata pData);
extern QMutex DataMutex;

extern Netdata mtNetQueuen[QueuenSize];
extern void PutNetDataIntoQueuen(pNetdata pData);
extern bool GetNetDataFromQueuen(pNetdata pData);
extern QMutex NetDataMutex;
extern QMutex FileMutex;

extern char MachID;
extern long WorkCode;
extern int mWorkingState;
extern QString Password;
//extern



#endif // CONFIGUREDATA_H




