#include "workwidget.h"
#include "ui_workwidget.h"
#include <QDateTime>
#include <QTimer>
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QSettings>
#include "myinputpanelcontext.h"
#include "mainwindow.h"
extern MainWindow *pCommonWndPoint;
long WorkCode = 0;


Workwidget::Workwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Workwidget)
{

    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    setFixedSize(800,480);
    ui->ThreeGLab->setStyleSheet("background-color:red;");
    //#设置右上角的3G标签样式表的背景颜色

    createMenuWidget();
    ui->MenuBtn->setText("打开菜单");
    //#右下角的“打开菜单”-&setVisible(false)即不可见（点击可见）

    ui->FinishWorkBtn->setDisabled(true);
    //#"工班完成"按钮设置为不能输入，一开始未设置作业

    ui->ManInputBtn->setStyleSheet("background-color:green;");
    //#输入作业信息框的“确定”按钮，设置其背景颜色

    Co_work = new CompleteWork;
    //#工作完成的“确定”或“取消”选择菜单

    pWorkInfoFile = new BaseFile(WorkInfoFile);
    pMRecordState = new RecordFile(RecordFilePath);

    istimeout = true;
    memset(SaveWorkInfo,0,3*sizeof(WorkInfo));
    memset(&mRecordState,0,sizeof(WRState));
    memset(&mBackWorkInfo,0,sizeof(BackWorkInfo));

    FileMutex.lock();
    pWorkInfoFile->ReadData((char*)&SaveWorkInfo[0],sizeof(WorkInfo),0);
    pWorkInfoFile->ReadData((char*)&SaveWorkInfo[1],sizeof(WorkInfo),sizeof(WorkInfo));
    pWorkInfoFile->ReadData((char*)&SaveWorkInfo[2],sizeof(WorkInfo),2*sizeof(WorkInfo));
    FileMutex.unlock();

    UpdateNetWorkInfoSlot();//显示派工信息
    ReadWorkStateConfig();//判断是否工作中断电，断电恢复
    ShowRecordState();//显示目前存储状态

    QTimer *WorkTimer = new QTimer;
    WorkTimer->start(1000);
    connect(WorkTimer,SIGNAL(timeout()),this,SLOT(updatetime()));
    connect(ui->FinishWorkBtn,SIGNAL(clicked()),this,SLOT(SwitchToCompleteWorkSlot()));
	//#点击“工作完成”按钮，显示工作完成的“确定”或“取消”选择菜单，当前界面隐藏

    connect(ui->MenuBtn,SIGNAL(clicked()),this,SLOT(showMenu()));
	//#点击“打开/关闭菜单”按钮，相应设置菜单的显示/隐藏

    connect(this,SIGNAL(UpdateShowSig()),this,SLOT(UpdateShowSlot()));
	//#ShowPar发出UpdateShowSig信号，更新显示的信息

    connect(Co_work,SIGNAL(WorkFinishedSig()),this,SLOT(WorkFinished()));
	//#当Co_work传来“工作完成”的信号，触发对应的槽函数

    connect(Co_work,SIGNAL(SwicthToWorkSignal_Co()),this,SLOT(ToWorkWidget()));
    connect(this,SIGNAL(UpdateNetWorkInfoSig()),this,SLOT(UpdateNetWorkInfoSlot()));
    connect(ui->ComDriverName,SIGNAL(currentIndexChanged(int)),this,SLOT(ComIndexChange(int)));
    connect(this,SIGNAL(ShowRecordStateSig()),this,SLOT(ShowRecordState()));
    }

Workwidget::~Workwidget()
{
    delete ui;
}

void Workwidget::SwitchToCompleteWorkSlot()
{
    //emit SwitchToCompleteWorkSignal();
    Co_work->show();
    this->hide();
}

void Workwidget::SwitchToChooseCraftSlot()
{
    emit SwitchToChooseCraftSignal();
}

void Workwidget::on_StartWorkBtn_clicked()
{

    ui->StartWorkBtn->setStyleSheet(tr("background-color:red;")+tr("font-size : 22px;"));
    ui->StartWorkBtn->setText("正在作业");
    ui->StartWorkBtn->setDisabled(true);
    ui->FinishWorkBtn->setDisabled(false);
    ui->QuPi->setDisabled(true);
    ui->WorkNum->setDisabled(true);
    ui->ManInputBtn->setDisabled(true);
    mWorkingState = StartWork;
    if(IsManInput)
         ManInputCode();
    else
    {
        ExchangWorkArray();//确定当前工作信息
        ShowCurrentWorkInfo(true);
    }
    IsWorking = true;
    WriteWorkStateConfig();	//#记录工作状态
}

void Workwidget::WorkFinished()
{
   ui->StartWorkBtn->setStyleSheet(tr("background-color:green;")+tr("font-size : 22px;"));
   ui->ManInputBtn->setStyleSheet("background-color:green;");
   ui->StartWorkBtn->setText("开始作业");
   ui->StartWorkBtn->setDisabled(false);
   ui->QuPi->setDisabled(false);
   ui->FinishWorkBtn->setDisabled(true);
   Co_work->hide();
   this->show();
   ShowCurrentWorkInfo(false);
   mWorkingState = FinishWork;

   IsManInput = false;
   IsWorking = false;
   ui->WorkNum->setDisabled(false);
   ui->ManInputBtn->setDisabled(false);
   WriteWorkStateConfig();	//#记录工作状态
}

void Workwidget::on_QuPi_clicked()
{
   mWorkingState = QuPi;
 //  ui->StartWorkBtn->setDisabled(true);
  // ui->FinishWorkBtn->setDisabled(true);
   //ui->QuPi->setDisabled(true);
}


void Workwidget::ToWorkWidget()
{
    Co_work->hide();
    this->show();
}



void Workwidget::updatetime()
{
    QDateTime time = QDateTime::currentDateTime();
    QString timestr =time.toString(" yyyy年MM月dd日  hh:mm:ss");
    ui->Timelab_work->setText(timestr);

}
void Workwidget::showMenu()
{
    mutex.lock();
    if(istimeout)	//#构造函数中，istimeout==ture
    {
        if(this->menu->isVisible())
        {
            this->menu->setVisible(false);	//#如果当前菜单显示，再次点击之后菜单隐藏
            ui->MenuBtn->setText("打开菜单");
            ui->MenuBtn->setStyleSheet("background-color: rgb(0, 170, 0)");
        }
        else
        {
            this->menu->setVisible(true);
            ui->MenuBtn->setText("关闭菜单");
            ui->MenuBtn->setStyleSheet("background-color: rgb(255, 0, 0)");
        }
        istimeout=false;
        timerid=startTimer(200);
    }
    mutex.unlock();
}


void Workwidget::createMenuWidget()
{

    menu=new QWidget(this);//////******
    QVBoxLayout *layout=new QVBoxLayout;
    QPushButton *timeAdjustBtn=new QPushButton(QString("系统设置"));
    timeAdjustBtn->setStyleSheet("font-size : 22px");

    QPushButton *sensorParaBtn=new QPushButton(QString("传感参数"));
    sensorParaBtn->setStyleSheet("font-size : 22px");

    QPushButton *ctrlParaBtn=new QPushButton(QString("控制参数"));
    ctrlParaBtn->setStyleSheet("font-size : 22px");


    QPushButton *dianliangParaBtn=new QPushButton(QString("电量参数"));
    dianliangParaBtn->setStyleSheet("font-size : 22px");

    QPushButton *GThBtn=new QPushButton(QString("网络设置"));
    GThBtn->setStyleSheet("font-size : 22px");

    QPushButton *ShutDown=new QPushButton(QString("退出程序"));
    ShutDown->setStyleSheet("font-size : 22px");

    layout->addWidget(timeAdjustBtn);
    layout->addWidget(sensorParaBtn);
    layout->addWidget(ctrlParaBtn);
    layout->addWidget(dianliangParaBtn);
    layout->addWidget(GThBtn);
    layout->addWidget(ShutDown);



    connect(timeAdjustBtn,SIGNAL(clicked()),this,SLOT(SwitchToTimeSecretSlot()));
    connect(sensorParaBtn,SIGNAL(clicked()),this,SLOT(SwitchToSensorSecretSlot()));
    connect(ctrlParaBtn,SIGNAL(clicked()),this,SLOT(SwitchToParaSecretSlot()));
    connect(dianliangParaBtn,SIGNAL(clicked()),this,SLOT(SwitchToSysEleSecretSlot()));
    connect(ShutDown,SIGNAL(clicked()),this,SLOT(ShutDown()));
    connect(GThBtn,SIGNAL(clicked()),this,SLOT(SwitchToGThSecretSlot()));


    menu->setLayout(layout);
    menu->setGeometry(QRect(580,70,200,350));
    menu->setStyleSheet(tr("QWidget{background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,")
                        +tr("stop: 0 #bbbbbb, stop: 1.0 #c0c0c0);border-radius:15px;}")+tr("font-size : 22px"));
    menu->setVisible(false);
}

void Workwidget::SwitchToTimeSecretSlot()
{
    emit SwitchToTimeSecretSignal();
    this->menu->setVisible(false);
    ui->MenuBtn->setText("打开菜单");
    ui->MenuBtn->setStyleSheet("background-color: rgb(0, 170, 0)");
}

void Workwidget::SwitchToSensorSecretSlot()
{
    emit SwitchToSensorSecretSignal();
    this->menu->setVisible(false);
    ui->MenuBtn->setText("打开菜单");
    ui->MenuBtn->setStyleSheet("background-color: rgb(0, 170, 0)");
}

void Workwidget::SwitchToParaSecretSlot()
{
    emit SwitchToParaSecretSignal();
    this->menu->setVisible(false);
    ui->MenuBtn->setText("打开菜单");
    ui->MenuBtn->setStyleSheet("background-color: rgb(0, 170, 0)");
}

void Workwidget::SwitchToSysEleSecretSlot()
{
    emit SwitchToSysEleSecretSignal();
    this->menu->setVisible(false);
    ui->MenuBtn->setText("打开菜单");
    ui->MenuBtn->setStyleSheet("background-color: rgb(0, 170, 0)");
}

void Workwidget::ShutDown()
{
    emit ShutDownSignal();
    this->menu->setVisible(false);
    ui->MenuBtn->setText("打开菜单");
    ui->MenuBtn->setStyleSheet("background-color: rgb(0, 170, 0)");

}

void Workwidget::SwitchToGThSecretSlot()
{
    emit SwitchToGThSignal();
    this->menu->setVisible(false);
    ui->MenuBtn->setText("打开菜单");
    ui->MenuBtn->setStyleSheet("background-color: rgb(0, 170, 0)");
}

void Workwidget::timerEvent(QTimerEvent *)
{
    killTimer(timerid);
    mutex.lock();
    istimeout=true;//判断上一次点击菜单按钮是否超过200ms，若超过就是true，若没超过，就是false，这时再点菜单按钮，就不做反应，像没点一样
    mutex.unlock();
}
/*****************************数据管理***************************************/
void Workwidget::ParseDataArrive(char *DataBuff, uint m_ulen)
{
    qDebug()<<"--data--"<<DataBuff<<"--size--"<<m_ulen<<"workwidget";
    QByteArray data;
    data=data.append(DataBuff,m_ulen-2);
    data = data.toHex();
    ui->NetWeightLab->setText(data);
}

void Workwidget::ShowPar(SerCurrentData *pW_mSerCurrentData, BreakInf *pW_mBreakInf)
{
    if(pW_mSerCurrentData == NULL||pW_mBreakInf == NULL)
        return;
    memset(&W_mSerCurrentData,0,sizeof(SerCurrentData));
    memset(&W_mBreakInf,0,sizeof(BreakInf));
    memcpy(&W_mSerCurrentData,pW_mSerCurrentData,sizeof(SerCurrentData));
    memcpy(&W_mBreakInf,pW_mBreakInf,sizeof(BreakInf));
    emit UpdateShowSig();
}

void Workwidget::GetWorkInfoFromNet(WorkInfo *pNworkInfo)
{
    if(pNworkInfo == NULL)
        return;

    uint Istate = 0xff;
    bool m_bIsFlag = false;
    int mState;
    mState = GetIndexFromWorkArray(pNworkInfo,Istate);
    switch(mState)
    {
    case InitWork:
         SetWorkArray(Istate,pNworkInfo);
         m_bIsFlag = true;
         break;
    case UpdateWork:
         SetWorkArray(Istate,pNworkInfo);
         m_bIsFlag = true;
         break;
    case SetWork:
         SetWorkArray(2,pNworkInfo);
         m_bIsFlag = true;
         break;
    case ErrorWork:
    default:
         break;

    }
    if(m_bIsFlag)
    {
      emit UpdateNetWorkInfoSig();
      WriteWorkArrayToFile(false);
    }


}

void Workwidget::ShowCurrentInfo()
{


}

void Workwidget::BackWorkInfoToNet(BackWorkInfo *pBackWorkInfo)
{
    if(pBackWorkInfo == NULL)
        return;
    memcpy(pBackWorkInfo,&mBackWorkInfo,sizeof(BackWorkInfo));
}

WorkInfoState Workwidget::GetIndexFromWorkArray(WorkInfo *pNworkInfo, uint &index)
{
    if(pNworkInfo == NULL)
        return ErrorWork;
    if(SaveWorkInfo[1].msWorkCode == 0)
      {
       index=1;
       return InitWork;
    }
    if(SaveWorkInfo[2].msWorkCode == 0)
      {
       index=2;
       return InitWork;
    }
    for(int i = 1;i<3;i++)
    {
         if(SaveWorkInfo[i].msWorkCode == pNworkInfo->msWorkCode)
        {
        index = i;
        return UpdateWork;
        }
    }
    return SetWork;
}

void Workwidget::SetWorkArray(uint Index, WorkInfo *pNworkInfo)
{
    memcpy(SaveWorkInfo+Index,pNworkInfo,sizeof(WorkInfo));
}

void Workwidget::ShowCurrentWorkInfo(bool m_bIsWork)
{
    if(m_bIsWork)
    {
        FileMutex.lock();
        pWorkInfoFile->WriteData((char*)&SaveWorkInfo[0],sizeof(WorkInfo),0);
        FileMutex.unlock();
        ui->WorkNum->setText(QString::number(SaveWorkInfo[0].msWorkCode));
        ui->DriverNameLab->setText(QString::fromLocal8Bit(SaveWorkInfo[0].DriverName));
        ui->ShipName->setText(QString::fromLocal8Bit(SaveWorkInfo[0].ShipName));
    }
    else
    {
        ui->WorkNum->setText("");
        ui->DriverNameLab->setText("");
        ui->ShipName->setText("");
    }

}

void Workwidget::WriteWorkArrayToFile(bool IsWriteCurrArray)
{
    FileMutex.lock();
    if(IsWriteCurrArray)
    pWorkInfoFile->WriteData((char*)&SaveWorkInfo[0],sizeof(WorkInfo),0);

    pWorkInfoFile->WriteData((char*)&SaveWorkInfo[1],sizeof(WorkInfo),sizeof(WorkInfo));
    pWorkInfoFile->WriteData((char*)&SaveWorkInfo[2],sizeof(WorkInfo),2*sizeof(WorkInfo));
    FileMutex.unlock();
}


void Workwidget::UpdateNetWorkInfoSlot()
{

    ui->ComDriverName->clear();
    for(int i = 1;i<3;i++)
    if(SaveWorkInfo[i].msWorkCode!=0)
    ui->ComDriverName->addItem(QString::fromLocal8Bit(SaveWorkInfo[i].DriverName));

    ui->ComDriverName->setCurrentIndex(0);
    ComIndexChange(0);

}

void Workwidget::ComIndexChange(int Index)
{
    QString mCabinNum;
    //int Index = ui->ComDriverName->currentIndex();
    if(Index < 0)
        return;
   ui->ConWorkNum->setText(QString::number(SaveWorkInfo[Index+1].msWorkCode));
   //ui->ComDriverName->setText(QString::fromLocal8Bit(SaveWorkInfo[Index].DriverName));
   ui->ConShipName->setText(QString::fromLocal8Bit(SaveWorkInfo[Index+1].ShipName));
   mCabinNum.sprintf("%d",SaveWorkInfo[Index+1].CabinNum);
   ui->ConCabinNum->setText(mCabinNum);
}

void Workwidget::ExchangWorkArray()
{
    if(ui->ComDriverName->currentIndex() == 0)
    memcpy(&SaveWorkInfo[0],&SaveWorkInfo[1],sizeof(WorkInfo));
    else
       {
        memcpy(&SaveWorkInfo[0],&SaveWorkInfo[2],sizeof(WorkInfo));
        memcpy(&SaveWorkInfo[2],&SaveWorkInfo[1],sizeof(WorkInfo));
        memcpy(&SaveWorkInfo[1],&SaveWorkInfo[0],sizeof(WorkInfo));
    }
    WriteWorkArrayToFile(true);
    WorkCode = SaveWorkInfo[0].msWorkCode;// 保存当前作业票信息用于存储记录
    mBackWorkInfo.BWorkCode = WorkCode;//记录当前作业票用于返回给服务器实时信息
    memcpy(mBackWorkInfo.DriverName,SaveWorkInfo[0].DriverName,8);
    memcpy(mBackWorkInfo.ShipName,SaveWorkInfo[0].ShipName,12);
    mBackWorkInfo.CabinNum = SaveWorkInfo[0].CabinNum;
    UpdateNetWorkInfoSlot();
}

void Workwidget::ManInputCode()
{
    ui->ShipName->setText("");
    ui->DriverNameLab->setText("");
    WorkCode = ui->WorkNum->text().toLong() ;
    mBackWorkInfo.BWorkCode = WorkCode;//记录当前作业票用于返回给服务器实时信息
    memset(mBackWorkInfo.DriverName,0,8);
    mBackWorkInfo.CabinNum = 0;
    memcpy(mBackWorkInfo.ShipName,"unknow",12);
}

void Workwidget::WriteWorkStateConfig()	//#记录工作状态的设置
{
    QSettings settings(IniAddr, QSettings::IniFormat); // 当前目录的INI文件
       settings.beginGroup("WorkState");//当前组
       settings.setValue("IsManInput", IsManInput);
       settings.setValue("IsWorking", IsWorking);
       settings.setValue("WorkCode",ui->WorkNum->text());
       settings.setValue("ShipName", ui->DriverNameLab->text());
       settings.setValue("DriverName",ui->ShipName->text());
       settings.endGroup();
}

void Workwidget::ReadWorkStateConfig()//关机重启后读取之前的工作状态
{
   QSettings settings(IniAddr, QSettings::IniFormat);
   IsWorking = settings.value("WorkState/IsWorking").toBool();
   IsManInput = settings.value("WorkState/IsManInput").toBool();
   if(IsWorking)
   {
       ui->WorkNum->setText(settings.value("WorkState/WorkCode").toString());
       ui->DriverNameLab->setText(settings.value("WorkState/DriverName").toString());
       ui->ShipName->setText(settings.value("WorkState/ShipName").toString());
       //WorkCode = ui->WorkNum->text().toLong();
       on_StartWorkBtn_clicked();

   }

}

void Workwidget::GetWRState(WRState *wpWRState)
{
    if(wpWRState == NULL)
        return;
    memcpy(&mRecordState,wpWRState,sizeof(WRState));
    emit ShowRecordStateSig();
}

void Workwidget::ShowRecordState()
{
    uint RecordFlag = 0;
//    FileMutex.lock();
//    pMRecordState->ReadData((char *)&mRecordState,sizeof(WRState),0);
//    FileMutex.unlock();
    if(mRecordState.TurnFlag == 0)
      RecordFlag = mRecordState.WritePos - mRecordState.ReadPos;
    else
      RecordFlag = MaxCounter- mRecordState.ReadPos + mRecordState.WritePos;
    ui->RecordState->setText(QString::number(RecordFlag));
}


void Workwidget::UpdateShowSlot()	//#更新显示信息
{
    ui->NetWeightLab->setText(QString::number(W_mSerCurrentData.NetWeight,'f',2));
    ui->OnDutySumLab->setText(QString::number(W_mSerCurrentData.OnDutySum,'f',0));
    ui->WorkTimesLab->setText(QString::number(W_mSerCurrentData.WorkTimes,'f',0));
    ui->RoughWeightLab->setText(QString::number(W_mSerCurrentData.RoughWeight,'f',2));
    ui->EmptyWeightLab->setText(QString::number(W_mSerCurrentData.EmptyWeight,'f',2));
    ui->RatedWeightLab->setText(QString::number(W_mSerCurrentData.RatedWeight,'f',2));
    ui->HeightLab->setText(QString::number(W_mSerCurrentData.Height,'f',2));
    ui->RangeLab->setText(QString::number(W_mSerCurrentData.Range,'f',2));
    ui->EnergyLab->setText(QString::number(W_mSerCurrentData.EnergyConsumption,'f',2));

    float mIsOverload  = (W_mSerCurrentData.RoughWeight/W_mSerCurrentData.RatedWeight)*100;
    ui->OverloadLabN->setText(QString::number(mIsOverload,'f',0));

//保存当前信息用于反馈
    mBackWorkInfo.CurrNetWeight[0] = (((uint)(100*W_mSerCurrentData.NetWeight))>>8)&0XFF;;
    mBackWorkInfo.CurrNetWeight[1] = ((uint)(100*W_mSerCurrentData.NetWeight))&0XFF;
    mBackWorkInfo.CurrEle[0] = ((uint)(10*W_mSerCurrentData.EleCurrWeight)>>24)&0XFF;
    mBackWorkInfo.CurrEle[1] = ((uint)(10*W_mSerCurrentData.EleCurrWeight)>>16)&0XFF;
    mBackWorkInfo.CurrEle[2] = ((uint)(10*W_mSerCurrentData.EleCurrWeight)>>8)&0XFF;
    mBackWorkInfo.CurrEle[3] = ((uint)(10*W_mSerCurrentData.EleCurrWeight))&0XFF;

    if(W_mBreakInf.CommunicationError)
      {
        ui->SysInfStatus->setText("串口通信故障");
        mBackWorkInfo.BreakDownInf = 5;
    }
    else if(W_mBreakInf.WeightSensor1)
    {
         ui->SysInfStatus->setText("1号传感器故障");
         mBackWorkInfo.BreakDownInf = 1;
    }

    else if(W_mBreakInf.WeightSensor2)
    {
         ui->SysInfStatus->setText("2号传感器故障");
         mBackWorkInfo.BreakDownInf = 1;
    }

    else if(W_mBreakInf.WeightSensor3)
    {
         ui->SysInfStatus->setText("3号传感器故障");
         mBackWorkInfo.BreakDownInf = 1;
    }

    else if(W_mBreakInf.WeightSensor4)
    {
         ui->SysInfStatus->setText("4号传感器故障");
         mBackWorkInfo.BreakDownInf = 1;
    }

    else if(W_mBreakInf.AngleSensor)
    {
        ui->SysInfStatus->setText("角度传感器故障");
        mBackWorkInfo.BreakDownInf = 2;
    }
    else if(W_mBreakInf.HeightSensor)
    {
        ui->SysInfStatus->setText("高度传感器故障");
        mBackWorkInfo.BreakDownInf = 3;
    }
    else
    {
        ui->SysInfStatus->setText("系统正常");
        mBackWorkInfo.BreakDownInf = 0;
    }
    if(mBackWorkInfo.BreakDownInf != 0)
       ui->SysInfStatus->setStyleSheet("background-color:yellow;");
    else
       ui->SysInfStatus->setStyleSheet("background-color: rgb(0, 255, 255);");

    if(W_mSerCurrentData.Overload == 0x01 )
        ui->OverloadLabT->setStyleSheet("background-color:red;");
    else
        ui->OverloadLabT->setStyleSheet("background-color:green;");

    if(W_mSerCurrentData.Position == 0x08)
        ui->PositionLab->setStyleSheet("background-color:red;");
    else
        ui->PositionLab->setStyleSheet("background-color:green;");

    if(W_mSerCurrentData.EnergyConsumption != 0 )
       ui->EleLab->setStyleSheet("background-color:green;");
    else
    {
        ui->EleLab->setStyleSheet("background-color:red;");
        mBackWorkInfo.BreakDownInf = 4;
    }
}

void Workwidget::TCPState(bool IsTCP)
{
    if(IsTCP)
        ui->ThreeGLab->setStyleSheet("background-color:green;");
    else
        ui->ThreeGLab->setStyleSheet("background-color:red;");
}



void Workwidget::on_ManInputBtn_clicked()
{

    QMessageBox::StandardButton rb = QMessageBox::question(NULL, "警告",
          "<font color='red' size = 20>您确定要手工输入作业票并确认输入无误吗？</font>",
             QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    if(rb == QMessageBox::Yes)
    {
        IsManInput = true;
        ui->WorkNum->setDisabled(true);
        ui->ManInputBtn->setDisabled(true);
        ui->ManInputBtn->setStyleSheet("background-color:red;");
    }
    else
    {
      IsManInput = false;
    }
}

