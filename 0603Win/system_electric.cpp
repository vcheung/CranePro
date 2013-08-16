#include "system_electric.h"
#include "ui_system_electric.h"
#include "dowithserdata.h"
#include <QSettings>

System_electric::System_electric(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::System_electric)
{
    ui->setupUi(this);
    ReadConfigSetting();//读出配置文件中的参数
    connect(ui->BackToWorkBtn,SIGNAL(clicked()),this,SLOT(SwitchToWorkSlot_Sysele()));
    connect(this,SIGNAL(UpdateShowSig()),this,SLOT(UpdateShowSlot()));
}

System_electric::~System_electric()
{
    delete ui;
}
void System_electric::SwitchToWorkSlot_Sysele()
{
    emit SwitchToWorkSignal_Sysele();
}
void System_electric::ShowElePar(ElePar *pEmElePar)
{
    if(pEmElePar == NULL)
        return;
    memcpy(&EmElePar,pEmElePar,sizeof(ElePar));
    emit UpdateShowSig();

}

void System_electric::UpdateShowSlot()
{
    ui->SupportEnergyLab->setText(QString::number(EmElePar.EleSupport));
    ui->OnOffEnergyLab->setText(QString::number(EmElePar.EleOnOff));
    ui->SumEnergyLab->setText(QString::number(EmElePar.EleSupport+EmElePar.EleOnOff));
    ui->EffectiveNumLab->setText(QString::number(EmElePar.EffectiveNum));
}

void System_electric::WriteConfigSetting()
{
    QSettings settings(IniAddr, QSettings::IniFormat); // 当前目录的INI文件
    settings.beginGroup("ElePar");//当前组
    settings.setValue("ZeroPoint", ui->ZeroPoint->text());
    settings.setValue("CoefficientModify", ui->CoefficientModify->text());
    settings.endGroup();
}

void System_electric::ReadConfigSetting()
{
     QSettings settings(IniAddr, QSettings::IniFormat);
     QString ZeroPoint = settings.value("ElePar/ZeroPoint").toString();
     QString CoefficientModify = settings.value("ElePar/CoefficientModify").toString();

     mAllInputPar.ZeroPoint = ZeroPoint.toFloat();
     mAllInputPar.CoefficientModify = CoefficientModify.toFloat();
     ui->ZeroPoint->setText(ZeroPoint);
     ui->CoefficientModify->setText(CoefficientModify);

}


void System_electric::on_sureBtn_clicked()
{
    WriteConfigSetting();
    ReadConfigSetting();
}
