#include "adjusttimewidget.h"
#include "ui_adjusttimewidget.h"
#include <QDateTime>
#include <QDebug>
#include <QSettings>
#include <QMessageBox>
char MachID = 0;
QString Password;
adjusttimewidget::adjusttimewidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adjusttimewidget)
{
    ui->setupUi(this);
    //ShowCurrentTime();
    QSettings settings(IniAddr, QSettings::IniFormat);
    MachID = settings.value("MachID/ID").toInt();
    ui->MachID->setText(QString::number( MachID));
    Password = settings.value("Password/Password").toString();
    connect(ui->BackToWorkBtn,SIGNAL(clicked()),this,SLOT(SwitchToWorkSlot_Time()));
}

adjusttimewidget::~adjusttimewidget()
{
    delete ui;
}
void adjusttimewidget::SwitchToWorkSlot_Time()
{
    emit SwitchToWorkSignal_Time();
    ui->OldPasswordLineE->clear();
}

void adjusttimewidget::ShowCurrentTime()
{
    QDateTime time = QDateTime::currentDateTime();
    ui->YearLineE->setText(time.currentDateTime().toString("yyyy"));
    ui->MonLineE->setText(time.currentDateTime().toString("MM"));
    ui->DayLineE->setText(time.currentDateTime().toString("dd"));
    ui->HourLineE->setText(time.currentDateTime().toString("hh"));
    ui->MinLineE->setText(time.currentDateTime().toString("mm"));
    ui->SecLineE->setText(time.currentDateTime().toString("ss"));

}



void adjusttimewidget::on_ModifyTime_clicked()
{
    QString TimeText;
    TimeText =   "date "
                 +ui->MonLineE->text()
                 +ui->DayLineE->text()
                 +ui->HourLineE->text()
                 +ui->MinLineE->text()
                 +ui->YearLineE->text();
 system(TimeText.toLatin1().data());
//强制写入到CMOS
  system("hwclock -w");
}

void adjusttimewidget::ModfiyTimeFromNet(SYSTIM *pTime)
{
  QString TimeText,Year,Month,Day,Hour,Mins;
  TimeText =   "date "
          +Month.sprintf("%02d",pTime->mMonth)
          +Day.sprintf("%02d",pTime->mDay)
          +Hour.sprintf("%02d",pTime->mHour)
          +Mins.sprintf("%02d",pTime->mMins)
          +Year.sprintf("20%02d",pTime->mYear);

  qDebug()<<Year<<Month<<Day<<Hour<<Mins;
  qDebug()<<TimeText<<"timetiem";
  system(TimeText.toLatin1().data());
 //强制写入到CMOS
   system("hwclock -w");
}

void adjusttimewidget::on_SysParSureBtn_clicked()
{
    MachID = ui->MachID->text().toInt();
    QSettings settings(IniAddr, QSettings::IniFormat); // 当前目录的INI文件
    settings.beginGroup("MachID");//当前组
    settings.setValue("ID", ui->MachID->text());
    settings.endGroup();
}

void adjusttimewidget::on_SureModifyWord_clicked()
{
    if((ui->NewPassordLineE->text() == ui->NewPassword2LineE->text())&&
            (ui->NewPassordLineE->text() != "")&& (ui->NewPassword2LineE->text()!=""))
    {
        QSettings settings(IniAddr, QSettings::IniFormat); // 当前目录的INI文件
        settings.beginGroup("Password");//当前组
        settings.setValue("Password",ui->NewPassword2LineE->text());
        settings.endGroup();
        Password =  ui->NewPassordLineE->text();
        QMessageBox::about(this,"警告","<font color='red' size = 20>密码修改成功</font>");

    }
    else
    {
        QMessageBox::about(this,"警告","<font color='red' size = 20>密码输入有误</font>");


    }
    ui->NewPassordLineE->clear();
    ui->NewPassword2LineE->clear();
}

void adjusttimewidget::on_GetWord_clicked()
{
    QSettings settings(IniAddr, QSettings::IniFormat);
    Password = settings.value("Password/Password").toString();
    ui->OldPasswordLineE->setText(Password);
}
