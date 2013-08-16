#include "completework.h"
#include "ui_completework.h"

CompleteWork::CompleteWork(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CompleteWork)
{
    ui->setupUi(this);
    connect(ui->SureBtn,SIGNAL(clicked()),this,SLOT(WorkFinishedSlot()));
	//#点击“确定”按钮，触发工作完成的槽函数

    connect(ui->BackToWorkBtn_Co,SIGNAL(clicked()),this,SLOT(SwitchToWorkSlot_Co()));
	//#点击“取消”按钮，返回

}

CompleteWork::~CompleteWork()
{
    delete ui;
}

void CompleteWork::WorkFinishedSlot()
{
    emit WorkFinishedSig();
}

void CompleteWork::SwitchToWorkSlot_Co()
{
    emit SwicthToWorkSignal_Co();
}
