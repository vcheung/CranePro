#ifndef DOWITHSERDATA_H
#define DOWITHSERDATA_H

#include <QThread>
#include <QMutex>
#include "ConfigureData.h"
#include  "RecordFile.h"



class DoWithSerData:public QThread//创建读串口线程
{
    Q_OBJECT
public:
    DoWithSerData();
    ~DoWithSerData();
    bool m_bIsRunFlag;//线程标志

    void run();
    void stopThread();

    float  RangeCalculate(float p_angle);
    float  HeightCalculate(float HeightSig, float HC,float Hzero);
    float eZhongCalculate(float CRange,uchar WorkCondition);

    float Bf_Snr_Zero_Calculate(float p,unsigned char n);
    float Bf_Snr_Coeff_Calculate(float p,unsigned char n);//读表里重量系数
    void Bf_Snr_Calculate(float p,uchar WorkCondition);//根据工况查找零点和系数
    float SumWeightCalculate(float *WeightSig);
    void SensorErrorCheck(float *WeightSig, float AngleSig, float HeightSig);//故障检测
    void GrabOverload(float mSumWeight, float CRateWeight);//超载计算

    void SerDataAnalyzing(Comdata mDatabuf);
    void WorkParShow();
    void SensorParShow();
    void EleParShow();
    void SaveRecordFile();



    Comdata m_Databuf;
    SerCurrentData mSerCurrentData;
    BreakInf mBreakInf ;
    SensorShowPar mSensorshowpar;
    ElePar mElePar;
    SysSensorPar sysSenPar;

    SaveData Ser_mSaveData;
    WRState Ser_mWRState;
    RecordFile *mRecordFile;


signals:

public slots:

};

#endif // DOWITHSERDATA_H
