#include "sensorparameter.h"
#include "ui_sensorparameter.h"
#include <QDebug>
#include "mainwindow.h"
extern MainWindow *pCommonWndPoint;
SensorParameter::SensorParameter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SensorParameter)
{
   // pWnd=NULL;//方案2
    ui->setupUi(this);
    memset(&SmSensorShowPar,0,sizeof(SensorShowPar));
    ReadConfigSetting();
    InitSenParStruct();
    connect(ui->BackToWorkBtn,SIGNAL(clicked()),this,SLOT(SwitchToWorkSlots_Sen()));
    connect(this,SIGNAL(UpdateShowSig()),this,SLOT(UpdateShowSlot()));
}

SensorParameter::~SensorParameter()
{
    delete ui;
}
void SensorParameter::SwitchToWorkSlots_Sen()
{
    emit SwitchToWorkSignal_Sen();
}
void SensorParameter::ShowSenPar(SensorShowPar *TSenpar)
{
    if(TSenpar == NULL)
        return;
    memcpy(&SmSensorShowPar,TSenpar,sizeof(SensorShowPar));
    emit UpdateShowSig();
}
void SensorParameter::UpdateShowSlot()
{
    ui->OnOffSenLab->setText(QString::number(SmSensorShowPar.OnOffSen,'f',2));
    ui->SupportLab->setText(QString::number(SmSensorShowPar.SupportSen));
    ui->AngleSenLab->setText(QString::number(SmSensorShowPar.AngleSen));
    ui->HeightSenLab->setText(QString::number(SmSensorShowPar.HeightSen));
    ui->AngleLab->setText(QString::number(SmSensorShowPar.Angle));
    ui->HeightLab->setText(QString::number(SmSensorShowPar.Height));
}


void SensorParameter::InitSenParStruct()
{
    mAllInputPar.HeightZeroInput = ui->HeightZeroInputLine->text().toFloat();
    mAllInputPar.HeightCoefficientInput = ui->HeightCoefficientInput->text().toFloat();
    mAllInputPar.DataNumInput = ui->DataNum->text().toFloat();
    mAllInputPar.OnOffZeroInput = ui->OnOffZeroInput->text().toFloat();
    mAllInputPar.SupportZeroInput = ui->SupportZeroInput->text().toFloat();
    mAllInputPar.OnOffCoefficientInput = ui->OnOffCoefficientInput->text().toFloat();
    mAllInputPar.OFDemarcateWeightInput = ui->OFDemarcateWeightInput->text().toFloat();
    mAllInputPar.SupportCoefficientInput = ui->SupportCoefficientInput->text().toFloat();
    mAllInputPar.SDemarcateWeightInput = ui->SDemarcateWeightInput->text().toFloat();
    mAllInputPar.DynamicCoefficientInput = ui->DynamicCoefficientInput->text().toFloat();
}

void SensorParameter::on_ModifyCoeH_clicked()//高度系数调整
{
    mAllInputPar.HeightZeroInput = ui->HeightZeroInputLine->text().toFloat();
    mAllInputPar.HeightCoefficientInput = ui->HeightCoefficientInput->text().toFloat();
    mAllInputPar.DataNumInput = ui->DataNum->text().toFloat();
    WriteConfigSetting();//保存修改
}


void SensorParameter::on_ModifyOFSZero_clicked()//开闭支持零点系数调整
{
    mAllInputPar.OnOffZeroInput = ui->OnOffZeroInput->text().toFloat();
    mAllInputPar.SupportZeroInput = ui->SupportZeroInput->text().toFloat();
    WriteConfigSetting();//保存修改

}

void SensorParameter::on_ModifyCoeOn_clicked()
{
    mAllInputPar.OnOffCoefficientInput = ui->OnOffCoefficientInput->text().toFloat();
    mAllInputPar.OFDemarcateWeightInput = ui->OFDemarcateWeightInput->text().toFloat();
    WriteConfigSetting();//保存修改

}

void SensorParameter::on_ModifyCoeSu_clicked()
{
    mAllInputPar.SupportCoefficientInput = ui->SupportCoefficientInput->text().toFloat();
    mAllInputPar.SDemarcateWeightInput = ui->SDemarcateWeightInput->text().toFloat();
    mAllInputPar.DynamicCoefficientInput = ui->DynamicCoefficientInput->text().toFloat();
    WriteConfigSetting();//保存修改
}

void SensorParameter::WriteConfigSetting()
{
    QSettings settings(IniAddr, QSettings::IniFormat); // 当前目录的INI文件
       settings.beginGroup("SensorPar");//当前组
       settings.setValue("HeightZeroInput", ui->HeightZeroInputLine->text());
       settings.setValue("HeightCoefficientInput", ui->HeightCoefficientInput->text());
       settings.setValue("DataNumInput", ui->DataNum->text());

       settings.setValue("OnOffZeroInput", ui->OnOffZeroInput->text());
       settings.setValue("SupportZeroInput", ui->SupportZeroInput->text());

       settings.setValue("OnOffCoefficientInput", ui->OnOffCoefficientInput->text());
       settings.setValue("OFDemarcateWeightInput", ui->OFDemarcateWeightInput->text());

       settings.setValue("SupportCoefficientInput", ui->SupportCoefficientInput->text());
       settings.setValue("SDemarcateWeightInput", ui->SDemarcateWeightInput->text());
       settings.setValue("DynamicCoefficientInput", ui->DynamicCoefficientInput->text());
       settings.endGroup();
}

void SensorParameter::ReadConfigSetting()
{
    QSettings settings(IniAddr, QSettings::IniFormat);
    QString HeightZeroInput = settings.value("SensorPar/HeightZeroInput").toString();
    ui->HeightZeroInputLine->setText(HeightZeroInput);
    QString HeightCoefficientInput = settings.value("SensorPar/HeightCoefficientInput").toString();
    ui->HeightCoefficientInput->setText(HeightCoefficientInput);
    QString DataNum = settings.value("SensorPar/DataNumInput").toString();
    ui->DataNum->setText(DataNum);

    QString OnOffZeroInput = settings.value("SensorPar/OnOffZeroInput").toString();
    ui->OnOffZeroInput->setText(OnOffZeroInput);
    QString SupportZeroInput = settings.value("SensorPar/SupportZeroInput").toString();
    ui->SupportZeroInput->setText(SupportZeroInput);

    QString OnOffCoefficientInput = settings.value("SensorPar/OnOffCoefficientInput").toString();
    ui->OnOffCoefficientInput->setText(OnOffCoefficientInput);
    QString OFDemarcateWeightInput = settings.value("SensorPar/OFDemarcateWeightInput").toString();
    ui->OFDemarcateWeightInput->setText(OFDemarcateWeightInput);

    QString SupportCoefficientInput = settings.value("SensorPar/SupportCoefficientInput").toString();
    ui->SupportCoefficientInput->setText(SupportCoefficientInput);
    QString SDemarcateWeightInput = settings.value("SensorPar/SDemarcateWeightInput").toString();
    ui->SDemarcateWeightInput->setText(SDemarcateWeightInput);
    QString DynamicCoefficientInput = settings.value("SensorPar/DynamicCoefficientInput").toString();
    ui->DynamicCoefficientInput->setText(DynamicCoefficientInput);
}

