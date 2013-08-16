#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>
#include <QPropertyAnimation>
#include <QSequentialAnimationGroup>
#include <QTimer>
//#include "dowithserdata.h"
MainWindow *pMainWnd=NULL;
MainWindow *pCommonWndPoint;
int mWorkingState;

extern Netdata mtNetQueuen[QueuenSize];
extern int m_NetIntoCount,m_NetoutCount;
extern QMutex NetDataMutex;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    mWorkingState = NotWork;
    ui->setupUi(this);
    /*#setupUi(this)是由.ui文件生成的类的构造函数，这个函数的作用是对界面进行初始化，
它按照我们在Qt设计器里设计的样子把窗体画出来，把我们在Qt设计器里面定义的信号和槽建立起来。
也可以说，setupUi 是我们画界面和写程序之间的桥梁。*/

    setWindowFlags(Qt::FramelessWindowHint);
    //#设置窗口属性，Qt::FramelessWindowHint这个是去掉标题栏（可以直接F1看英文说明）

    pMainWnd=pCommonWndPoint = this;
    animation = NULL;

    m_NetIntoCount = 0; //#？哪里用到
    m_NetoutCount = 0;

    memset(&mtNetQueuen,0,QueuenSize*sizeof(Comdata));  //#应该sizeof(Netdata)？

    /***************界面管理****************/


    Work = new Workwidget;
    Work->show();
    //#主界面构造函数&显示


    //菜单选项
    Adjust_tim = new adjusttimewidget;
    Adjust_par = new adjustparameter;


    //参数修改输入密码界面
    SecInTime = new Secretinput(0);
    SecInSensor = new Secretinput(1);
    SecInPara = new Secretinput(2);
    SecInSysEle = new Secretinput(3);
    SecInTG = new Secretinput(4);

    //参数修改
    Sen_par = new SensorParameter;//(this);
    Sys_ele = new System_electric;

    //动画类型
    Anim0.setType(QEasingCurve::Linear);
    Anim1.setType(QEasingCurve::OutExpo);
    Anim2.setType(QEasingCurve::InQuint);
    Anim3.setType(QEasingCurve::InOutElastic);
    Anim4.setType(QEasingCurve::InBack);
    Anim5.setType(QEasingCurve::InOutQuart);

    /**********************************界面**上*******************/

    /*******************************数据管理************************************/
    //串口线程置空
    pSer_COM = NULL;
    SerComManage();//串口打开，并创建串口线程

    pDoWithComdata = new DoWithSerData;//串口数据解析线程
    //网络
    TGNet = NULL;//网络设置窗口
    TCPNet = NULL;//网络线程    //#TCP_Transmission Control Protocol 传输控制协议
    NetManage();
    pDoWithNetData = new DoWithNetData;




    /*******************************信号和槽************************************/
    connect(Work,SIGNAL(SwitchToCompleteWorkSignal()),this,SLOT(ToCompleteWork()));
    //************ ****工作界面上菜单下的界面切换****************
    connect(Work,SIGNAL(SwitchToTimeSecretSignal()),this,SLOT(ToSecretTime())); //#to 时间密码界面
    connect(Work,SIGNAL(SwitchToSensorSecretSignal()),this,SLOT(ToSecretSensor()));
    connect(Work,SIGNAL(SwitchToParaSecretSignal()),this,SLOT(ToSecretPara()));
    connect(Work,SIGNAL(SwitchToSysEleSecretSignal()),this,SLOT(ToSecretSysEle()));
    connect(Work,SIGNAL(ShutDownSignal()),this,SLOT(ShutDown()));

    connect(Work,SIGNAL(SwitchToGThSignal()),this,SLOT(ToGThsecSlot()));//3G_#网络设置

    connect(SecInTime,SIGNAL(SwitchToWorkSignal_Sec()),this,SLOT(ToWork()));    //#点击密码输入中“取消”按钮，返回到work界面
    connect(SecInSensor,SIGNAL(SwitchToWorkSignal_Sec()),this,SLOT(ToWork()));
    connect(SecInPara,SIGNAL(SwitchToWorkSignal_Sec()),this,SLOT(ToWork()));
    connect(SecInSysEle,SIGNAL(SwitchToWorkSignal_Sec()),this,SLOT(ToWork()));
    connect(SecInTG,SIGNAL(SwitchToWorkSignal_Sec()),this,SLOT(ToWork()));

    connect(SecInTime,SIGNAL(SwitchToTimeSignal()),this,SLOT(ToTimeSlot()));    //#转到对应的界面
    connect(SecInSensor,SIGNAL(SwitchToSensorSignal()),this,SLOT(ToSensorSlot()));
    connect(SecInPara,SIGNAL(SwithcToParaSignal()),this,SLOT(ToParaSlot()));
    connect(SecInSysEle,SIGNAL(SwitchToSysEleSignal()),this,SLOT(ToSysEleSlot()));
    connect(SecInTG,SIGNAL(SwitchToNetSignal()),this,SLOT(ToNetSlot()));

    connect(Adjust_tim,SIGNAL(SwitchToWorkSignal_Time()),this,SLOT(ToWork()));  //#时间设置界面返回
    connect(Sen_par,SIGNAL(SwitchToWorkSignal_Sen()),this,SLOT(ToWork()));
    connect(Adjust_par,SIGNAL(SwitchToWorkSignal_Para()),this,SLOT(ToWork()));
    connect(Sys_ele,SIGNAL(SwitchToWorkSignal_Sysele()),this,SLOT(ToWork()));

    //****************工作界面与其他界面的切换****************
    //connect(Co_work,SIGNAL(SwicthToWorkSignal_Co()),this,SLOT(ToWork()));

    //connect(Co_work,SIGNAL(SwitchToLoginSignal_Co()),this,SLOT(ToWork()));

    connect(TGNet,SIGNAL(sevIPPort(QString,uint)),this,SLOT(NetSet(QString,uint)));
    //#点击网络设置的“确定”按钮，发出sevIPPort信号NetSet（）代码“TCPNet->InitClient(NetDataArriveOK,IP,Port);”
    connect(TGNet,SIGNAL(TestDataSignal(char*)),this,SLOT(NetDataTest(char*)));
    //#点击网络测试的“确定”按钮，发出TestDataSignal
    connect(TGNet,SIGNAL(SwitchToWork()),this,SLOT(ToWork()));
    //#点击“退出”按钮，返回主界面

    connect(pDoWithNetData,SIGNAL(SendNetDataSig(char*,uint)),this,SLOT(SendNetData(char*,uint)));
    connect(TCPNet->pNetThread,SIGNAL(NetConnectStateSig(bool)),Work,SLOT(TCPState(bool)));
    connect(TCPNet->pNetThread,SIGNAL(NetConnectStateSig(bool)),TGNet,SLOT(TCPState(bool)));

}

MainWindow::~MainWindow()
{
    delete ui;
}
/************************************界面管理*************************/
//动画效果
void MainWindow::CreateAnimation(QWidget *w, const QEasingCurve &easing,int coordx,int coordy)//动画设置函数
{
    if(NULL == animation)
    {
        animation = new QPropertyAnimation(w,"geometry");
    }
    animation->setTargetObject(w);
    animation->setDuration(300);
    animation->setStartValue(QRect(coordx,coordy,150,100));
    animation->setEndValue(QRect(0,0,800,480));
    animation->setEasingCurve(easing);
    animation->start();
}

void MainWindow::ToWork()//工作界面_#到工作界面，其他界面均隐藏
{
    Work->show();
    CreateAnimation(Work,Anim0,800,480);
    SecInTG->hide();
    SecInTime->hide();
    SecInSensor->hide();
    SecInPara->hide();
    SecInSysEle->hide();
    Adjust_par->hide();
    Adjust_tim->hide();
    Sen_par->hide();
    Sys_ele->hide();
    TGNet->hide();
}

void MainWindow::ToCompleteWork()//确认完工
{
    //Co_work->show();
   // CreateAnimation(Co_work,Anim5,0,480);
    Work->hide();
}


void MainWindow::ToSecretTime()//时间密码界面
{
    SecInTime->show();
    CreateAnimation(SecInTime,Anim4,800,480);
    Work->hide();
}

void MainWindow::ToSecretSensor()//传感器参数密码界面
{
    SecInSensor->show();
    CreateAnimation(SecInSensor,Anim5,800,480);
    Work->hide();
}

void MainWindow::ToSecretPara()//控制参数密码界面
{
    SecInPara->show();
    CreateAnimation(SecInPara,Anim2,800,480);
    Work->hide();
}

void MainWindow::ToSecretSysEle()//电量参数密码界面
{
    SecInSysEle->show();
    CreateAnimation(SecInSysEle,Anim1,800,480);
    Work->hide();
}
void MainWindow::ToTimeSlot()//时间设置
{
    Adjust_tim->show();
    CreateAnimation(Adjust_tim,Anim0,0,480);
    Adjust_tim->ShowCurrentTime();
    SecInTime->hide();
}

void MainWindow::ToSensorSlot()//传感器参数
{
    Sen_par->show();
    CreateAnimation(Sen_par,Anim1,800,480);
    SecInSensor->hide();
}

void MainWindow::ToParaSlot()//控制参数
{
    Adjust_par->show();
    CreateAnimation(Adjust_par,Anim2,800,0);
    SecInPara->hide();
}

void MainWindow::ToSysEleSlot()//电量参数
{
    Sys_ele->show();
    CreateAnimation(Sys_ele,Anim3,-200,-480);
    SecInSysEle->hide();
}


void MainWindow::ToGThsecSlot()//3G设置_#网络设置
{
    SecInTG->show();
    Work->hide();
    CreateAnimation(TGNet,Anim2,0,480);

}

void MainWindow::ToNetSlot()
{
    SecInTG->hide();
    TGNet->show();
}

/*******************************数据管理************************************/
void MainWindow::SerComManage()//打开串口
{
    if(pSer_COM == NULL)
    {
        pSer_COM = new serialcom;   //#串口类
        if(pSer_COM== NULL)
            return;
        if(! pSer_COM->Initcom(ComDataArriveOK,"COM1",      //#ComDataArriveOK把函数传进去_vc
                               BAUD115200,DATA_8,PAR_NONE,STOP_1,100))
            qDebug()<<"COM open fail!";
        else

        {
            qDebug()<<"Serial Thread Successful";
            QTimer *TimerSerData = new QTimer ;
            connect(TimerSerData,SIGNAL(timeout()),this,SLOT(SendModDataSlot()));
            TimerSerData->start(200);   //#设置延时_

        }

    }

}

void MainWindow::SendModDataSlot()//定时用串口向控制板请求数据
{
    static uint i = 0;
    i++;
    //qDebug()<<"SendControlData"<<SendControlData;
    SendModData(SendControlData,SendIsSaveState,i);
    if(i>255)
        i = 0;
    //qDebug()<<i;

}



void MainWindow::ComDataArriveOK(char *DataBuff, ulong m_ulen)//接受串口数据
{
    if(pMainWnd->DataCrcCheck(DataBuff,m_ulen)&&pMainWnd!=NULL)//将串口数据CRC校验
    {
        Comdata mData;//={0};
        memset(&mData,0,sizeof(Comdata));   //#把mdata请零
        memcpy(mData.DataBuff,DataBuff,m_ulen);     //#把DataBuff指向的数据放在mData.DataBuff中_
        mData.Len=m_ulen;
        PutDataIntoQueuen(&mData);//数据放入缓存队列（结构体）
    }
    // pMainWnd->Work->ParseDataArrive(DataBuff,m_ulen);
}
ulong MainWindow::CRCCheck(char *crcBuff,ulong size)//数据的CRC校验
{
    ulong m_uCrcValue=0;
    if(NULL == crcBuff||size<0)
    return m_uCrcValue;
    //首先为crc开辟2个字节的内存空间，并将各位全部置为1。
    unsigned short crc = 0xffff;
    unsigned short a,j,k;
    unsigned char crcValue=0;
    //对于每一个字节，执行for循环里的语句。
    for(a=0;a<size;a++)
    {
        //crc和第a个字节里的值异或，新值赋给crc。注意gemfield[a]在转换为int型时是有符号的，
        //因此，我们在其值大于7F时，需要做相应的转换处理。
        crc =crc ^ ( (int)crcBuff[a]>=0 ? crcBuff[a] : (crcBuff[a]+256) );
        for(j=0;j<8;j++)
        {
            k=crc & 01;//看crc的最低位是不是0，如果不是0，就与0xA001异或。
            crc = crc >> 1;
            if (k==0) continue;
            crc =crc ^ 0xA001;
        }
    }
    crcValue =crc%256;
    m_uCrcValue=(crcValue<<8)&0xff00;
    crcValue =crc/256;
    m_uCrcValue=m_uCrcValue|((crcValue)&0x00ff);
    return m_uCrcValue;    //将整数返回,这里是个十进制数
}

bool MainWindow::DataCrcCheck(char *DataBuff, ulong m_ulen)//串口传来数据的crc校验
{
    if(DataBuff == NULL||m_ulen<=2)
    return false;
    uint m_CrcLow,m_CrcHig;
    ulong m_uCrcValue=0;
    m_uCrcValue = CRCCheck(DataBuff,m_ulen - 2);
    m_CrcHig=(m_uCrcValue)>>8&0xff;
    m_CrcLow=m_uCrcValue&0xff;
    //qDebug()<<m_CrcHig<<m_CrcLow<<"CRChL";
    //判断CRC是否正确
    if( m_CrcLow==(uchar)DataBuff[m_ulen - 1]&&m_CrcHig == (uchar)DataBuff[m_ulen - 2] )
    {
        qDebug()<< "CRC ok!";
        return true;
    }
    else
    { qDebug()<<"CRC error";
        return false;}
      return false;
}
void MainWindow::SendModData(qint64 Data,qint64 IsSaveState,int Counter)
{
    uint m_CrcLow = 0,m_CrcHig = 0;//存放CRC高低位
    char SendData[10]={0};//存放发送缓冲数据
    SendData[0]=0x01;//modbus 地址位
    SendData[1]=0x01;//功能位
    SendData[2]=Data;//控制位
    SendData[3] = IsSaveState;//是否存储状态
    SendData[4]=Counter;


    ulong m_uCrcValue=0;//crc校验返回值
    m_uCrcValue = CRCCheck(SendData,5);//CRC校验
    //取出CRC高地位
    m_CrcHig=m_uCrcValue>>8&0xff;
    m_CrcLow=m_uCrcValue&0xff;
    //将CRC高低位放入缓冲
    SendData[5]=m_CrcHig;
    SendData[6]=m_CrcLow;

  //判断mainwindow和pser_com两个对象均已创建
             if( pMainWnd!=NULL)
             if( pMainWnd->pSer_COM!=NULL)
  //然后即可用调用mainwindow下pserCOM对象的函数发送数据
//                 for(int i =0;i<7;i++)
//                     qDebug("%d",(uchar)SendData[i]);
                  pMainWnd->pSer_COM->SendData(SendData,7);
}

void MainWindow::SendText(QString LineTextInput)//把linetex框的数据经过CRC校验后发送
{
//    float LineData  = LineTextInput.toFloat();//把从输入框传来得数据转换为float型
//    uint m_CrcLow = 0,m_CrcHig = 0;//存放CRC高低位
//    char SendData[200]={0};//存放发送缓冲数据
//    SendData[0]=0x01;//modbus 地址位
//    SendData[1]=0x01;//功能位
//    memcpy(SendData+2,&LineData,sizeof(float));//把输入框数据放入缓冲区sendData
//    ulong m_uCrcValue=0;//crc校验返回值
//    m_uCrcValue = CRCCheck(SendData,sizeof(float));//CRC校验
//    //取出CRC高地位
//    m_CrcHig=(m_uCrcValue)>>8&0xff;
//    m_CrcLow=m_uCrcValue&0xff;
//    //将CRC高低位放入缓冲
//    SendData[2+sizeof(float)]=m_CrcHig;
//    SendData[2+sizeof(float)+1]=m_CrcLow;

//  //判断mainwindow和pser_com两个对象均已创建
//             if( pMainWnd!=NULL)
//             if( pMainWnd->pSer_COM!=NULL)
//  //然后即可用调用mainwindow下pserCOM对象的函数发送数据

//                  pMainWnd->pSer_COM->SendData(SendData,sizeof(float)+4);

}
/*******************************网络数据管理************************************/
void MainWindow::NetManage()
{
    if(TGNet == NULL)
    TGNet = new TGNetwork;  //#网络设置的界面
    if(TCPNet == NULL)
    TCPNet = new TCPNetClient;  //#构造函数：“Client = NULL; pNetThread = NULL;”

    if(TGNet!=NULL&&TCPNet!=NULL)
    {
        sevIP = TGNet->Ip;
        sevPort = TGNet->Port;
        TCPNet->InitClient(NetDataArriveOK,sevIP,sevPort); //#
        qDebug()<<sevIP;
        //TCPNet->InitClient(NULL,"192.168.0.125",8010);
        //char a[20] = "hello net";
        //        TCPNet->SendNetData(a,20);
        //网络测试连接

    }

}


void MainWindow::NetDataArriveOK(char *DataBuff, ulong m_ulen)
{
//   if(pMainWnd->DataCrcCheck(DataBuff,m_ulen)||pMainWnd!=NULL)//将串口数据CRC校验
//    pMainWnd->Work->ParseDataArrive(DataBuff,m_ulen);
//    qDebug()<<*DataBuff;
//    pMainWnd->TGNet->readTestData(DataBuff,m_ulen);

    if(pMainWnd->NetXORValid(DataBuff,m_ulen)&&pMainWnd!=NULL)//将串口数据CRC校验
    {
        Netdata mData;
        memset(&mData,0,sizeof(Netdata));
        memcpy(mData.DataBuff,DataBuff,m_ulen%BuffSize);
        mData.Len=m_ulen%BuffSize;
        PutNetDataIntoQueuen(&mData);//数据放入缓存队列（结构体）
        pMainWnd->TGNet->readTestData(mData.DataBuff,m_ulen%BuffSize);
    }
}

void MainWindow::NetSet(QString IP, uint Port)
{
    TCPNet->InitClient(NetDataArriveOK,IP,Port);
}

void MainWindow::NetDataTest(char *TestData)
{
    TCPNet->SendNetData(TestData,100);
}

void MainWindow::SendNetData(char *Data, uint mLen)
{
    TCPNet->SendNetData(Data,mLen);
}

uchar MainWindow::XORValid(char* buffer, int len)
{

    uchar checksum = 0;

    for (int i = 0;  i<len;  i++)
    {
        checksum = checksum ^ buffer[i]; //进行异或交验取值
    }
    qDebug("XOR %0X",checksum);
    return checksum;

}

bool MainWindow::NetXORValid(char *buffer, int len)
{
    if(len<3||buffer == NULL)
        return false;
    if((uchar)buffer[len-3] == XORValid(buffer,len-3))
    {
       qDebug()<<"NetXOR is ok";
       return true;
    }

    else
        return false;
}


/*******************************关闭软件************************************/
void MainWindow::ShutDown()//关闭软件
{
    if( pSer_COM!= NULL)
        pSer_COM->StopComSpyThread();//串口线程
    if(TCPNet != NULL)
        TCPNet->StopClientSpyThread();//网络线程
    if(pDoWithComdata != NULL)
        pDoWithComdata->stopThread();//串口数据解析线程


    qApp->exit();
}






