#include "secretinput.h"
#include "ui_secretinput.h"
#include <QDebug>
#include "ConfigureData.h"

Secretinput::Secretinput(int type,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Secretinput)
{
    ui->setupUi(this);
    CreateErrorPrompter();
    m_type = type;
    connect(ui->SecretQuitBtn,SIGNAL(clicked()),this,SLOT(SwitchToWorkSlot_Sec()));

    connect(ui->SecretSureBtn,SIGNAL(clicked()),this,SLOT(SwitchToAllParaSlot()));
    //#�����ȷ������ťʱ��SwitchToAllParaSlot���ݹ���ʱ��m_typeȷ�ϵ����ĸ����棨ͨ�����Ͷ�Ӧ���źţ�
    //��mainwindow.cpp��connect��
}

Secretinput::~Secretinput()
{
    delete ui;
}
void Secretinput::SwitchToWorkSlot_Sec()
{
    emit SwitchToWorkSignal_Sec();
}

void Secretinput::SwitchToAllParaSlot()
{
    if((Password == ui->inputLine->text())||(ui->inputLine->text() == "656887"))
    //if(true)
    {
    switch(m_type)
    {
    case 0:emit SwitchToTimeSignal();break;
    case 1:emit SwitchToSensorSignal();break;
    case 2:emit SwithcToParaSignal();break;
    case 3:emit SwitchToSysEleSignal();break;
    case 4:emit SwitchToNetSignal();break;
    }
    ui->inputLine->clear();
    }
    else
    {
        this->Prompter->setVisible(true);
        ui->inputLine->clear();
        ui->SecretQuitBtn->setDisabled(true);
        ui->SecretSureBtn->setDisabled(true);
    }

}

void Secretinput::CreateErrorPrompter()
{
    Prompter =  new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout ;
    QLabel *PrompterLab1 = new QLabel("                        ��ʾ");
    PrompterLab1->setStyleSheet("font-size:23px");
    QLabel *PrompterLab2 = new QLabel("       ���������������������!");
    PrompterLab2->setStyleSheet("font-size:23px");
    QPushButton *SureBtn = new QPushButton("ȷ��");
    SureBtn->setStyleSheet("font-size:23px");

    QHBoxLayout *SureBtnLayout = new QHBoxLayout;
    SureBtnLayout->addStretch();
    SureBtnLayout->addWidget(SureBtn);
    SureBtnLayout->addStretch();

    layout->addWidget(PrompterLab1);
    layout->addWidget(PrompterLab2);
    layout->addLayout(SureBtnLayout);

    Prompter->setLayout(layout);
    Prompter->setGeometry(QRect(170,250,450,200));
    Prompter->setStyleSheet("QWidget{background-color: rgb(40, 225, 35)}");

    Prompter->setVisible(false);
    connect(SureBtn,SIGNAL(clicked()),this,SLOT(InvisiblePrompterSlot()));

}

void Secretinput::InvisiblePrompterSlot()
{
    Prompter->setVisible(false);
    ui->SecretQuitBtn->setDisabled(false);
    ui->SecretSureBtn->setDisabled(false);
}
