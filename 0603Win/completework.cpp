#include "completework.h"
#include "ui_completework.h"

CompleteWork::CompleteWork(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CompleteWork)
{
    ui->setupUi(this);
    connect(ui->SureBtn,SIGNAL(clicked()),this,SLOT(WorkFinishedSlot()));
	//#�����ȷ������ť������������ɵĲۺ���

    connect(ui->BackToWorkBtn_Co,SIGNAL(clicked()),this,SLOT(SwitchToWorkSlot_Co()));
	//#�����ȡ������ť������

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
