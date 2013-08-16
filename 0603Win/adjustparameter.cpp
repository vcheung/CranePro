#include "adjustparameter.h"
#include "ui_adjustparameter.h"
#include "dowithserdata.h"
#include <QSettings>
#include <QtDebug>

adjustparameter::adjustparameter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adjustparameter)
{
    ui->setupUi(this);
    memset(&mReState,0,sizeof(WRState));
    ShowRecordState = NULL;
    ShowRecordState =  new RecordFile(RecordFilePath);
    ReadConfigSetting();
    AdShowRecordState();
    connect(ui->BackToWorkBtn,SIGNAL(clicked()),this,SLOT(SwitchToWorkSlot_Para()));
    connect(this,SIGNAL(UpdateRecordStateSig()),this,SLOT(UpdateRecordStateSlot()));

}

adjustparameter::~adjustparameter()
{
    delete ui;
}
void adjustparameter::SwitchToWorkSlot_Para()
{
    emit SwitchToWorkSignal_Para();
}


void adjustparameter::WriteConfigSetting()//修改参数保存到ini文件
{
    QSettings settings(IniAddr, QSettings::IniFormat); // 当前目录的INI文件
    settings.beginGroup("AlarmPar");//当前组
    settings.setValue("AlarmValue", ui->AlarmValue->text());
    settings.setValue("ControlValue", ui->ControlValue->text());
    settings.setValue("ControlDelay", ui->ControlDelay->text());
    settings.setValue("InstantValue", ui->InstantValue->text());
    settings.setValue("InstantDelay", ui->InstantDelay->text());
    settings.setValue("SlowValue", ui->SlowValue->text());
    settings.setValue("SlowDelay", ui->SlowDelay->text());
    settings.endGroup();
}


void adjustparameter::ReadConfigSetting()//读出ini里参数
{
    QSettings settings(IniAddr,QSettings::IniFormat);
    QString AlarmValue = settings.value("AlarmPar/AlarmValue").toString();
    QString ControlValue = settings.value("AlarmPar/ControlValue").toString();
    QString ControlDelay = settings.value("AlarmPar/ControlDelay").toString();
    QString InstantValue = settings.value("AlarmPar/InstantValue").toString();
    QString InstantDelay = settings.value("AlarmPar/InstantDelay").toString();
    QString SlowValue = settings.value("AlarmPar/SlowValue").toString();
    QString SlowDelay = settings.value("AlarmPar/SlowDelay").toString();

    mAllInputPar.AlarmValue = AlarmValue.toFloat();
    mAllInputPar.ControlValue = ControlValue.toFloat();
    mAllInputPar.ControlDelay = ControlDelay.toFloat();
    mAllInputPar.InstantValue = InstantValue.toFloat();
    mAllInputPar.InstantDelay = InstantDelay.toFloat();
    mAllInputPar.SlowValue = SlowValue.toFloat();
    mAllInputPar.SlowDelay = SlowDelay.toFloat();

    ui->AlarmValue->setText(AlarmValue);
    ui->ControlValue->setText(ControlValue);
    ui->ControlDelay->setText(ControlDelay);
    ui->InstantValue->setText(InstantValue);
    ui->InstantDelay->setText(InstantDelay);
    ui->SlowValue->setText(SlowValue);
    ui->SlowDelay->setText(SlowDelay);

}

void adjustparameter::GetWRState(WRState *apWRState)
{
    if(apWRState == NULL)
        return;
    memcpy(&mReState,apWRState,sizeof(WRState));
    emit UpdateRecordStateSig();
}

void adjustparameter::AdShowRecordState()
{
    QString sTurnFlag;
    memset(&mReState,0,sizeof(WRState));
    FileMutex.lock();
    ShowRecordState->ReadData((char*)&mReState,sizeof(WRState),0);
    FileMutex.unlock();
    ui->RecordPosLab->setText(QString::number(mReState.WritePos));
    ui->SendPosLab->setText(QString::number(mReState.ReadPos));
    sTurnFlag.sprintf("%d",mReState.TurnFlag);
    ui->OverflowFlagLab->setText(sTurnFlag);
   // emit UpdateRecordStateSig();
}
void adjustparameter::UpdateRecordStateSlot()
{
    QString sTurnFlag;
    sTurnFlag.sprintf("%d",mReState.TurnFlag);
   ui->RecordPosLab->setText(QString::number(mReState.WritePos));
   ui->SendPosLab->setText(QString::number(mReState.ReadPos));
   ui->OverflowFlagLab->setText(sTurnFlag);
}

void adjustparameter::on_SureBtn_clicked()
{
    WriteConfigSetting();
    ReadConfigSetting();
}

