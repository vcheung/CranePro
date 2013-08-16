#ifndef CONFIGUREDATA_H
#define CONFIGUREDATA_H
#include <QObject>
#include <QMutex>

#define QueuenSize 50
#define BuffSize 55
#define SysWidgetParChoice 1 //���ش������Ĳ���ѡ��ѡΪϵͳ���߽������룬Ϊ1��ʾ��ϵͳΪ0��ʾ��������
#define SENSOR1 1 //����������ͨ������
#define SENSOR2 1 //����������ͨ������
#define SENSOR3 0 //δ����
#define SENSOR4 0 //δ����
#define SENSOR5 1 //�Ƕȴ�����ͨ������
#define SENSOR6 1 //�߶ȴ�����ͨ������
#define SENSOR7 0 //δ����
#define SENSOR8 0 //δ����

#define CARRENT_MAX    24.5  //������������  ��λ������
#define CARRENT_MIN    3.0   //��������С����  ��λ������

//������Ʊ���ֵ(ץ��)
#define ALAM_OUT1       1.15   //˲ʱ�������
#define ALAM_OUT2       1.05   //�����������
#define ALAM_OUT3       1.0   //����������

//������Ʊ���ֵ��������
#define DALAM_OUT1      1.10   //˲ʱ�������
#define DALAM_OUT2      1.05   //�����������
#define DALAM_OUT3      1.00   //����������

#define OVERLOADCOUNTERA 10  //���ؼ����� ��DALAM_OUT1�����
#define OVERLOADCOUNTERB 30  //DALAM_OUT2�����

#define SlowDownWeight  10

#define MaxCounter 20000
#define MaxNetSendNum 10
#define IniAddr  "Configure.ini"
#define RecordFilePath "Storage.dat"
#define WorkInfoFile "WorkInfo.dat"

#pragma pack(1)

typedef struct//�������
{
    char DataBuff[BuffSize];
    int  Len;
}Comdata,*pComdata;

typedef struct//�������
{
    char DataBuff[BuffSize];
    int  Len;
}Netdata,*pNetdata;//59
//�洢���ݽṹ
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

    float NetWeight;//����
    uint   OnDutySum;//�����ۼ�
    uint   WorkTimes;//��ҵ����
    float RoughWeight;//ë��
    float EmptyWeight;//Ƥ��
    float RatedWeight;//����
    float Height;//�߶�
    float Range;//����
    float EnergyConsumption;//�����ܺ�
    uchar Position;//λ��
    uchar Overload;//����

}SerCurrentData;//80

typedef struct
{
    float HeightZeroInput;//�߶����
    float HeightCoefficientInput;//�߶�ϵ��
    float DataNumInput;//���ݲɼ�����
    float OnOffZeroInput;//�������
    float SupportZeroInput;//֧�����
    float OnOffCoefficientInput;//����ϵ��
    float OFDemarcateWeightInput;//���ձ궨����
    float SupportCoefficientInput;//֧��ϵ��
    float SDemarcateWeightInput;//֧�ֱ궨����
    float DynamicCoefficientInput;//��̬ϵ��

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
  float OnOffSen;//���մ�����
  float SupportSen;//֧�ִ�����
  float AngleSen;//�Ƕȴ�����
  float HeightSen;//�߶ȴ�����
  float Angle;//�Ƕ�
  float Height;//�߶�

}SensorShowPar;//������������ʾ����24

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

}SysSensorPar;//ϵͳ��������������������ϵ��32

typedef struct
{
    bool WeightSensor1;//1�Ŵ��������Ϸ�trueΪ����
    bool WeightSensor2;//2�Ŵ��������Ϸ�trueΪ����
    bool WeightSensor3;//3�Ŵ��������Ϸ�trueΪ����
    bool WeightSensor4;//4�Ŵ��������Ϸ�trueΪ����

    bool AngleSensor;//�Ƕȴ��������Ϸ�trueΪ����
    bool HeightSensor;//�߶ȴ��������Ϸ�trueΪ����
    bool CommunicationError;//����ͨ�Ź���

}BreakInf;//���ϼ��7

typedef struct
{
    float  EleSupport;//֧�ִ�����
    float  EleOnOff;//���մ�����
    int EffectiveNum;

}ElePar;//�������Ʋ����������//12

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



enum WorkingState   //#����״̬��ö��
{
    Normal = 1,
    StartWork = 2,
    FinishWork = 3,
    NotWork =4,
    QuPi = 5
};//16
enum ReadState//д�ļ���������ֵö��
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




