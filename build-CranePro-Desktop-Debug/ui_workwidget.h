/********************************************************************************
** Form generated from reading UI file 'workwidget.ui'
**
** Created: Fri Sep 6 10:29:24 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKWIDGET_H
#define UI_WORKWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Workwidget
{
public:
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Timelab_work;
    QLabel *EleLab;
    QLabel *PositionLab;
    QLabel *ThreeGLab;
    QLabel *OverloadLabT;
    QLabel *OverloadLabN;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QLabel *label_43;
    QPushButton *zengjia;
    QPushButton *jianshao;
    QLabel *label_41;
    QLabel *RecordState;
    QLabel *label_42;
    QLabel *SysInfStatus;
    QPushButton *MenuBtn;
    QGroupBox *groupBox_2;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_27;
    QLabel *OnDutySumLab;
    QLabel *NetWeightLab;
    QLabel *WorkTimesLab;
    QGroupBox *groupBox_5;
    QPushButton *StartWorkBtn;
    QPushButton *FinishWorkBtn;
    QPushButton *QuPi;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox1;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *RoughWeightLab;
    QLabel *RangeLab;
    QLabel *RatedWeightLab;
    QGroupBox *groupBox2;
    QLabel *label_47;
    QLabel *label_48;
    QLabel *label_36;
    QLabel *EmptyWeightLab;
    QLabel *HeightLab;
    QLabel *EnergyLab;
    QGroupBox *groupBox3;
    QLabel *label_40;
    QLabel *label_31;
    QLabel *label_39;
    QLabel *DriverNameLab;
    QLabel *ShipName;
    QLineEdit *WorkNum;
    QPushButton *ManInputBtn;
    QGroupBox *groupBox_6;
    QLabel *label_35;
    QLabel *label_44;
    QLabel *ConShipName;
    QLabel *label_45;
    QLabel *ConWorkNum;
    QLabel *ConCabinNum;
    QLabel *label_46;
    QLabel *label_37;
    QComboBox *ComDriverName;

    void setupUi(QWidget *Workwidget)
    {
        if (Workwidget->objectName().isEmpty())
            Workwidget->setObjectName(QString::fromUtf8("Workwidget"));
        Workwidget->resize(800, 480);
        Workwidget->setMinimumSize(QSize(800, 480));
        Workwidget->setMaximumSize(QSize(818, 553));
        groupBox_3 = new QGroupBox(Workwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(-1, 0, 801, 60));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setMinimumSize(QSize(0, 60));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        Timelab_work = new QLabel(groupBox_3);
        Timelab_work->setObjectName(QString::fromUtf8("Timelab_work"));
        Timelab_work->setMinimumSize(QSize(480, 40));
        Timelab_work->setMaximumSize(QSize(480, 40));
        Timelab_work->setStyleSheet(QString::fromUtf8("font: 75 26pt \"\346\245\267\344\275\223\";\n"
"background-color: rgb(85, 255, 255);\n"
"color: rgb(85, 0, 127);"));

        horizontalLayout_4->addWidget(Timelab_work);

        EleLab = new QLabel(groupBox_3);
        EleLab->setObjectName(QString::fromUtf8("EleLab"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(EleLab->sizePolicy().hasHeightForWidth());
        EleLab->setSizePolicy(sizePolicy1);
        EleLab->setMinimumSize(QSize(50, 0));
        EleLab->setMaximumSize(QSize(50, 16777215));
        EleLab->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);"));
        EleLab->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(EleLab);

        PositionLab = new QLabel(groupBox_3);
        PositionLab->setObjectName(QString::fromUtf8("PositionLab"));
        sizePolicy1.setHeightForWidth(PositionLab->sizePolicy().hasHeightForWidth());
        PositionLab->setSizePolicy(sizePolicy1);
        PositionLab->setMinimumSize(QSize(50, 0));
        PositionLab->setMaximumSize(QSize(50, 16777215));
        PositionLab->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);"));
        PositionLab->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(PositionLab);

        ThreeGLab = new QLabel(groupBox_3);
        ThreeGLab->setObjectName(QString::fromUtf8("ThreeGLab"));
        sizePolicy1.setHeightForWidth(ThreeGLab->sizePolicy().hasHeightForWidth());
        ThreeGLab->setSizePolicy(sizePolicy1);
        ThreeGLab->setMinimumSize(QSize(50, 0));
        ThreeGLab->setMaximumSize(QSize(50, 16777215));
        ThreeGLab->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);"));
        ThreeGLab->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(ThreeGLab);

        OverloadLabT = new QLabel(groupBox_3);
        OverloadLabT->setObjectName(QString::fromUtf8("OverloadLabT"));
        sizePolicy1.setHeightForWidth(OverloadLabT->sizePolicy().hasHeightForWidth());
        OverloadLabT->setSizePolicy(sizePolicy1);
        OverloadLabT->setMinimumSize(QSize(50, 0));
        OverloadLabT->setMaximumSize(QSize(50, 16777215));
        OverloadLabT->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);"));
        OverloadLabT->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(OverloadLabT);

        OverloadLabN = new QLabel(groupBox_3);
        OverloadLabN->setObjectName(QString::fromUtf8("OverloadLabN"));
        OverloadLabN->setMinimumSize(QSize(40, 40));
        OverloadLabN->setMaximumSize(QSize(40, 40));
        OverloadLabN->setStyleSheet(QString::fromUtf8("background-color: rgb(184, 197, 255);\n"
"font: 75 14pt \"\351\232\266\344\271\246\";"));

        horizontalLayout_4->addWidget(OverloadLabN);

        groupBox = new QGroupBox(Workwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 430, 801, 50));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(0, 50));
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_43 = new QLabel(groupBox);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 127);\n"
"font: 18pt \"\351\273\221\344\275\223\";"));
        label_43->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_43, 0, 0, 1, 1);

        zengjia = new QPushButton(groupBox);
        zengjia->setObjectName(QString::fromUtf8("zengjia"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(zengjia->sizePolicy().hasHeightForWidth());
        zengjia->setSizePolicy(sizePolicy2);
        zengjia->setMinimumSize(QSize(41, 0));
        zengjia->setMaximumSize(QSize(41, 16777215));
        zengjia->setStyleSheet(QString::fromUtf8("font: 75 22pt \"\351\273\221\344\275\223\";"));

        gridLayout_5->addWidget(zengjia, 0, 1, 1, 1);

        jianshao = new QPushButton(groupBox);
        jianshao->setObjectName(QString::fromUtf8("jianshao"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(jianshao->sizePolicy().hasHeightForWidth());
        jianshao->setSizePolicy(sizePolicy3);
        jianshao->setMinimumSize(QSize(41, 30));
        jianshao->setMaximumSize(QSize(41, 30));
        jianshao->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\351\273\221\344\275\223\";"));

        gridLayout_5->addWidget(jianshao, 0, 2, 1, 1);

        label_41 = new QLabel(groupBox);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 127);\n"
"font: 18pt \"\351\273\221\344\275\223\";"));
        label_41->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_41, 0, 3, 1, 1);

        RecordState = new QLabel(groupBox);
        RecordState->setObjectName(QString::fromUtf8("RecordState"));
        RecordState->setMinimumSize(QSize(30, 0));
        RecordState->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 127);\n"
"font: 18pt \"\351\273\221\344\275\223\";"));
        RecordState->setFrameShape(QFrame::WinPanel);

        gridLayout_5->addWidget(RecordState, 0, 4, 1, 1);

        label_42 = new QLabel(groupBox);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setMaximumSize(QSize(140, 16777215));
        label_42->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 127);\n"
"font: 18pt \"\351\273\221\344\275\223\";"));

        gridLayout_5->addWidget(label_42, 0, 5, 1, 1);

        SysInfStatus = new QLabel(groupBox);
        SysInfStatus->setObjectName(QString::fromUtf8("SysInfStatus"));
        sizePolicy1.setHeightForWidth(SysInfStatus->sizePolicy().hasHeightForWidth());
        SysInfStatus->setSizePolicy(sizePolicy1);
        SysInfStatus->setMaximumSize(QSize(200, 16777215));
        SysInfStatus->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(0, 255, 255);\n"
"color: rgb(0, 0, 255);"));
        SysInfStatus->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(SysInfStatus, 0, 6, 1, 1);

        MenuBtn = new QPushButton(groupBox);
        MenuBtn->setObjectName(QString::fromUtf8("MenuBtn"));
        sizePolicy3.setHeightForWidth(MenuBtn->sizePolicy().hasHeightForWidth());
        MenuBtn->setSizePolicy(sizePolicy3);
        MenuBtn->setMinimumSize(QSize(100, 30));
        MenuBtn->setMaximumSize(QSize(100, 30));
        MenuBtn->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(155, 200, 40);\n"
"color: rgb(0, 91, 0);"));

        gridLayout_5->addWidget(MenuBtn, 0, 7, 1, 1);

        groupBox_2 = new QGroupBox(Workwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 160, 801, 60));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMinimumSize(QSize(0, 60));
        groupBox_2->setMaximumSize(QSize(16777215, 16777215));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);\n"
"border-color: rgb(170, 255, 255);\n"
"color: rgb(255, 0, 0);\n"
"font: 30pt \"\351\273\221\344\275\223\";"));
        groupBox_2->setAlignment(Qt::AlignCenter);
        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(10, 10, 61, 40));
        sizePolicy1.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy1);
        label_24->setMinimumSize(QSize(0, 0));
        label_24->setMaximumSize(QSize(92, 16777215));
        label_24->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);\n"
"border-color: rgb(170, 255, 255);\n"
"color: rgb(0, 0, 255);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));
        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(240, 10, 111, 40));
        sizePolicy1.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy1);
        label_25->setMinimumSize(QSize(0, 0));
        label_25->setMaximumSize(QSize(1234, 16777215));
        label_25->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);\n"
"border-color: rgb(170, 255, 255);\n"
"color: rgb(0, 0, 255);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(520, 10, 111, 40));
        sizePolicy1.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy1);
        label_27->setMinimumSize(QSize(0, 0));
        label_27->setMaximumSize(QSize(165, 16777215));
        label_27->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);\n"
"border-color: rgb(170, 255, 255);\n"
"color: rgb(0, 0, 255);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));
        label_27->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        OnDutySumLab = new QLabel(groupBox_2);
        OnDutySumLab->setObjectName(QString::fromUtf8("OnDutySumLab"));
        OnDutySumLab->setGeometry(QRect(350, 0, 161, 61));
        sizePolicy1.setHeightForWidth(OnDutySumLab->sizePolicy().hasHeightForWidth());
        OnDutySumLab->setSizePolicy(sizePolicy1);
        OnDutySumLab->setMinimumSize(QSize(100, 0));
        OnDutySumLab->setMaximumSize(QSize(1000, 16777215));
        OnDutySumLab->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-color: rgb(170, 255, 255);\n"
"color: rgb(255, 170, 0);\n"
"font: 45pt \"\351\273\221\344\275\223\";"));
        OnDutySumLab->setFrameShape(QFrame::Box);
        NetWeightLab = new QLabel(groupBox_2);
        NetWeightLab->setObjectName(QString::fromUtf8("NetWeightLab"));
        NetWeightLab->setGeometry(QRect(70, 0, 161, 61));
        sizePolicy1.setHeightForWidth(NetWeightLab->sizePolicy().hasHeightForWidth());
        NetWeightLab->setSizePolicy(sizePolicy1);
        NetWeightLab->setMinimumSize(QSize(100, 0));
        NetWeightLab->setMaximumSize(QSize(1000, 16777215));
        NetWeightLab->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-color: rgb(170, 255, 255);\n"
"color: rgb(255, 170, 0);\n"
"font: 45pt \"\351\273\221\344\275\223\";"));
        NetWeightLab->setFrameShape(QFrame::Box);
        WorkTimesLab = new QLabel(groupBox_2);
        WorkTimesLab->setObjectName(QString::fromUtf8("WorkTimesLab"));
        WorkTimesLab->setGeometry(QRect(640, 0, 161, 61));
        sizePolicy1.setHeightForWidth(WorkTimesLab->sizePolicy().hasHeightForWidth());
        WorkTimesLab->setSizePolicy(sizePolicy1);
        WorkTimesLab->setMinimumSize(QSize(100, 0));
        WorkTimesLab->setMaximumSize(QSize(1000, 16777215));
        WorkTimesLab->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-color: rgb(170, 255, 255);\n"
"color: rgb(255, 170, 0);\n"
"font: 45pt \"\351\273\221\344\275\223\";"));
        WorkTimesLab->setFrameShape(QFrame::Box);
        groupBox_5 = new QGroupBox(Workwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 370, 801, 61));
        groupBox_5->setMinimumSize(QSize(0, 50));
        groupBox_5->setMaximumSize(QSize(16777215, 100));
        StartWorkBtn = new QPushButton(groupBox_5);
        StartWorkBtn->setObjectName(QString::fromUtf8("StartWorkBtn"));
        StartWorkBtn->setGeometry(QRect(100, 10, 123, 46));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(StartWorkBtn->sizePolicy().hasHeightForWidth());
        StartWorkBtn->setSizePolicy(sizePolicy4);
        StartWorkBtn->setMinimumSize(QSize(0, 0));
        StartWorkBtn->setMaximumSize(QSize(123, 90));
        StartWorkBtn->setStyleSheet(QString::fromUtf8("font: 75 22pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(155, 200, 40);\n"
"color: rgb(0, 0, 255);"));
        FinishWorkBtn = new QPushButton(groupBox_5);
        FinishWorkBtn->setObjectName(QString::fromUtf8("FinishWorkBtn"));
        FinishWorkBtn->setGeometry(QRect(326, 10, 128, 46));
        sizePolicy4.setHeightForWidth(FinishWorkBtn->sizePolicy().hasHeightForWidth());
        FinishWorkBtn->setSizePolicy(sizePolicy4);
        FinishWorkBtn->setMinimumSize(QSize(0, 46));
        FinishWorkBtn->setMaximumSize(QSize(1220, 90));
        FinishWorkBtn->setStyleSheet(QString::fromUtf8("font: 75 22pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(155, 200, 40);\n"
"color: rgb(0, 0, 255);"));
        QuPi = new QPushButton(groupBox_5);
        QuPi->setObjectName(QString::fromUtf8("QuPi"));
        QuPi->setGeometry(QRect(564, 10, 123, 46));
        sizePolicy4.setHeightForWidth(QuPi->sizePolicy().hasHeightForWidth());
        QuPi->setSizePolicy(sizePolicy4);
        QuPi->setMinimumSize(QSize(70, 30));
        QuPi->setMaximumSize(QSize(123, 78));
        QuPi->setStyleSheet(QString::fromUtf8("font: 75 22pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(155, 200, 40);\n"
"color: rgb(0, 0, 255);"));
        FinishWorkBtn->raise();
        QuPi->raise();
        StartWorkBtn->raise();
        groupBox_4 = new QGroupBox(Workwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(-10, 220, 811, 141));
        groupBox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        groupBox1 = new QGroupBox(groupBox_4);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        groupBox1->setGeometry(QRect(10, 10, 211, 131));
        label_32 = new QLabel(groupBox1);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(10, 10, 90, 33));
        label_32->setMinimumSize(QSize(90, 0));
        label_32->setMaximumSize(QSize(140, 16777215));
        label_32->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        label_32->setAlignment(Qt::AlignCenter);
        label_33 = new QLabel(groupBox1);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(10, 50, 90, 33));
        label_33->setMinimumSize(QSize(90, 0));
        label_33->setMaximumSize(QSize(140, 16777215));
        label_33->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        label_33->setAlignment(Qt::AlignCenter);
        label_34 = new QLabel(groupBox1);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(10, 90, 90, 33));
        label_34->setMinimumSize(QSize(90, 0));
        label_34->setMaximumSize(QSize(140, 16777215));
        label_34->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        label_34->setAlignment(Qt::AlignCenter);
        RoughWeightLab = new QLabel(groupBox1);
        RoughWeightLab->setObjectName(QString::fromUtf8("RoughWeightLab"));
        RoughWeightLab->setGeometry(QRect(110, 10, 91, 33));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(RoughWeightLab->sizePolicy().hasHeightForWidth());
        RoughWeightLab->setSizePolicy(sizePolicy5);
        RoughWeightLab->setMinimumSize(QSize(0, 0));
        RoughWeightLab->setMaximumSize(QSize(180, 16777215));
        RoughWeightLab->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 127);\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));
        RoughWeightLab->setFrameShape(QFrame::WinPanel);
        RangeLab = new QLabel(groupBox1);
        RangeLab->setObjectName(QString::fromUtf8("RangeLab"));
        RangeLab->setGeometry(QRect(110, 90, 91, 33));
        sizePolicy5.setHeightForWidth(RangeLab->sizePolicy().hasHeightForWidth());
        RangeLab->setSizePolicy(sizePolicy5);
        RangeLab->setMinimumSize(QSize(0, 0));
        RangeLab->setMaximumSize(QSize(180, 16777215));
        RangeLab->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 127);\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));
        RangeLab->setFrameShape(QFrame::WinPanel);
        RatedWeightLab = new QLabel(groupBox1);
        RatedWeightLab->setObjectName(QString::fromUtf8("RatedWeightLab"));
        RatedWeightLab->setGeometry(QRect(110, 50, 91, 33));
        sizePolicy5.setHeightForWidth(RatedWeightLab->sizePolicy().hasHeightForWidth());
        RatedWeightLab->setSizePolicy(sizePolicy5);
        RatedWeightLab->setMinimumSize(QSize(0, 0));
        RatedWeightLab->setMaximumSize(QSize(180, 16777215));
        RatedWeightLab->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 127);\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));
        RatedWeightLab->setFrameShape(QFrame::WinPanel);
        groupBox2 = new QGroupBox(groupBox_4);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        groupBox2->setGeometry(QRect(250, 10, 211, 131));
        label_47 = new QLabel(groupBox2);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(10, 10, 90, 28));
        label_47->setMinimumSize(QSize(90, 0));
        label_47->setMaximumSize(QSize(140, 16777215));
        label_47->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        label_47->setAlignment(Qt::AlignCenter);
        label_48 = new QLabel(groupBox2);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(10, 90, 90, 27));
        label_48->setMinimumSize(QSize(90, 0));
        label_48->setMaximumSize(QSize(140, 16777215));
        label_48->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        label_48->setAlignment(Qt::AlignCenter);
        label_36 = new QLabel(groupBox2);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(10, 50, 90, 33));
        label_36->setMinimumSize(QSize(90, 0));
        label_36->setMaximumSize(QSize(140, 16777215));
        label_36->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        label_36->setAlignment(Qt::AlignCenter);
        EmptyWeightLab = new QLabel(groupBox2);
        EmptyWeightLab->setObjectName(QString::fromUtf8("EmptyWeightLab"));
        EmptyWeightLab->setGeometry(QRect(110, 10, 91, 33));
        sizePolicy5.setHeightForWidth(EmptyWeightLab->sizePolicy().hasHeightForWidth());
        EmptyWeightLab->setSizePolicy(sizePolicy5);
        EmptyWeightLab->setMinimumSize(QSize(0, 0));
        EmptyWeightLab->setMaximumSize(QSize(180, 16777215));
        EmptyWeightLab->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 127);\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));
        EmptyWeightLab->setFrameShape(QFrame::WinPanel);
        EmptyWeightLab->setFrameShadow(QFrame::Plain);
        HeightLab = new QLabel(groupBox2);
        HeightLab->setObjectName(QString::fromUtf8("HeightLab"));
        HeightLab->setGeometry(QRect(110, 50, 91, 33));
        sizePolicy5.setHeightForWidth(HeightLab->sizePolicy().hasHeightForWidth());
        HeightLab->setSizePolicy(sizePolicy5);
        HeightLab->setMinimumSize(QSize(0, 0));
        HeightLab->setMaximumSize(QSize(180, 16777215));
        HeightLab->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 127);\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));
        HeightLab->setFrameShape(QFrame::WinPanel);
        EnergyLab = new QLabel(groupBox2);
        EnergyLab->setObjectName(QString::fromUtf8("EnergyLab"));
        EnergyLab->setGeometry(QRect(110, 90, 91, 33));
        sizePolicy5.setHeightForWidth(EnergyLab->sizePolicy().hasHeightForWidth());
        EnergyLab->setSizePolicy(sizePolicy5);
        EnergyLab->setMinimumSize(QSize(0, 0));
        EnergyLab->setMaximumSize(QSize(180, 16777215));
        EnergyLab->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 127);\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));
        EnergyLab->setFrameShape(QFrame::WinPanel);
        groupBox3 = new QGroupBox(groupBox_4);
        groupBox3->setObjectName(QString::fromUtf8("groupBox3"));
        groupBox3->setGeometry(QRect(500, 10, 301, 131));
        groupBox3->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);"));
        label_40 = new QLabel(groupBox3);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(10, 90, 91, 27));
        sizePolicy2.setHeightForWidth(label_40->sizePolicy().hasHeightForWidth());
        label_40->setSizePolicy(sizePolicy2);
        label_40->setMinimumSize(QSize(0, 0));
        label_40->setMaximumSize(QSize(140, 16777215));
        label_40->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        label_40->setAlignment(Qt::AlignCenter);
        label_31 = new QLabel(groupBox3);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(10, 10, 91, 27));
        sizePolicy2.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy2);
        label_31->setMinimumSize(QSize(0, 0));
        label_31->setMaximumSize(QSize(140, 16777215));
        label_31->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        label_31->setAlignment(Qt::AlignCenter);
        label_39 = new QLabel(groupBox3);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(10, 50, 91, 27));
        sizePolicy2.setHeightForWidth(label_39->sizePolicy().hasHeightForWidth());
        label_39->setSizePolicy(sizePolicy2);
        label_39->setMinimumSize(QSize(0, 0));
        label_39->setMaximumSize(QSize(140, 16777215));
        label_39->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        label_39->setAlignment(Qt::AlignCenter);
        DriverNameLab = new QLabel(groupBox3);
        DriverNameLab->setObjectName(QString::fromUtf8("DriverNameLab"));
        DriverNameLab->setGeometry(QRect(120, 10, 131, 33));
        sizePolicy5.setHeightForWidth(DriverNameLab->sizePolicy().hasHeightForWidth());
        DriverNameLab->setSizePolicy(sizePolicy5);
        DriverNameLab->setMinimumSize(QSize(0, 0));
        DriverNameLab->setMaximumSize(QSize(180, 16777215));
        DriverNameLab->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 127);\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));
        DriverNameLab->setFrameShape(QFrame::WinPanel);
        DriverNameLab->setFrameShadow(QFrame::Plain);
        ShipName = new QLabel(groupBox3);
        ShipName->setObjectName(QString::fromUtf8("ShipName"));
        ShipName->setGeometry(QRect(120, 50, 131, 33));
        sizePolicy5.setHeightForWidth(ShipName->sizePolicy().hasHeightForWidth());
        ShipName->setSizePolicy(sizePolicy5);
        ShipName->setMinimumSize(QSize(0, 0));
        ShipName->setMaximumSize(QSize(180, 16777215));
        ShipName->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 127);\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));
        ShipName->setFrameShape(QFrame::WinPanel);
        WorkNum = new QLineEdit(groupBox3);
        WorkNum->setObjectName(QString::fromUtf8("WorkNum"));
        WorkNum->setGeometry(QRect(120, 89, 81, 31));
        WorkNum->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"font: 75 24pt \"\351\273\221\344\275\223\";"));
        WorkNum->setEchoMode(QLineEdit::Normal);
        ManInputBtn = new QPushButton(groupBox3);
        ManInputBtn->setObjectName(QString::fromUtf8("ManInputBtn"));
        ManInputBtn->setGeometry(QRect(220, 90, 71, 31));
        ManInputBtn->setStyleSheet(QString::fromUtf8("font: 75 22pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(155, 200, 40);\n"
"color: rgb(0, 0, 255);"));
        groupBox_6 = new QGroupBox(Workwidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(0, 60, 801, 101));
        groupBox_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_35 = new QLabel(groupBox_6);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(260, 10, 91, 27));
        sizePolicy2.setHeightForWidth(label_35->sizePolicy().hasHeightForWidth());
        label_35->setSizePolicy(sizePolicy2);
        label_35->setMinimumSize(QSize(0, 0));
        label_35->setMaximumSize(QSize(140, 16777215));
        label_35->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        label_35->setAlignment(Qt::AlignCenter);
        label_44 = new QLabel(groupBox_6);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(260, 60, 91, 27));
        sizePolicy2.setHeightForWidth(label_44->sizePolicy().hasHeightForWidth());
        label_44->setSizePolicy(sizePolicy2);
        label_44->setMinimumSize(QSize(0, 0));
        label_44->setMaximumSize(QSize(140, 16777215));
        label_44->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        label_44->setAlignment(Qt::AlignCenter);
        ConShipName = new QLabel(groupBox_6);
        ConShipName->setObjectName(QString::fromUtf8("ConShipName"));
        ConShipName->setGeometry(QRect(370, 56, 131, 31));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(ConShipName->sizePolicy().hasHeightForWidth());
        ConShipName->setSizePolicy(sizePolicy6);
        ConShipName->setMinimumSize(QSize(0, 0));
        ConShipName->setMaximumSize(QSize(200, 16777215));
        ConShipName->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(255, 255, 0);\n"
"color: rgb(0, 0, 127);\n"
"border-color: rgb(255, 255, 255);"));
        ConShipName->setFrameShape(QFrame::WinPanel);
        ConShipName->setFrameShadow(QFrame::Plain);
        label_45 = new QLabel(groupBox_6);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(520, 60, 91, 27));
        sizePolicy2.setHeightForWidth(label_45->sizePolicy().hasHeightForWidth());
        label_45->setSizePolicy(sizePolicy2);
        label_45->setMinimumSize(QSize(0, 0));
        label_45->setMaximumSize(QSize(140, 16777215));
        label_45->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        label_45->setAlignment(Qt::AlignCenter);
        ConWorkNum = new QLabel(groupBox_6);
        ConWorkNum->setObjectName(QString::fromUtf8("ConWorkNum"));
        ConWorkNum->setGeometry(QRect(630, 60, 131, 31));
        sizePolicy6.setHeightForWidth(ConWorkNum->sizePolicy().hasHeightForWidth());
        ConWorkNum->setSizePolicy(sizePolicy6);
        ConWorkNum->setMinimumSize(QSize(0, 0));
        ConWorkNum->setMaximumSize(QSize(200, 16777215));
        ConWorkNum->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(255, 255, 0);\n"
"color: rgb(0, 0, 127);\n"
"border-color: rgb(255, 255, 255);"));
        ConWorkNum->setFrameShape(QFrame::WinPanel);
        ConWorkNum->setFrameShadow(QFrame::Plain);
        ConCabinNum = new QLabel(groupBox_6);
        ConCabinNum->setObjectName(QString::fromUtf8("ConCabinNum"));
        ConCabinNum->setGeometry(QRect(630, 10, 131, 31));
        sizePolicy6.setHeightForWidth(ConCabinNum->sizePolicy().hasHeightForWidth());
        ConCabinNum->setSizePolicy(sizePolicy6);
        ConCabinNum->setMinimumSize(QSize(0, 0));
        ConCabinNum->setMaximumSize(QSize(200, 16777215));
        ConCabinNum->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(255, 255, 0);\n"
"color: rgb(0, 0, 127);\n"
"border-color: rgb(255, 255, 255);"));
        ConCabinNum->setFrameShape(QFrame::WinPanel);
        ConCabinNum->setFrameShadow(QFrame::Plain);
        label_46 = new QLabel(groupBox_6);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(520, 10, 91, 27));
        sizePolicy2.setHeightForWidth(label_46->sizePolicy().hasHeightForWidth());
        label_46->setSizePolicy(sizePolicy2);
        label_46->setMinimumSize(QSize(0, 0));
        label_46->setMaximumSize(QSize(140, 16777215));
        label_46->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        label_46->setAlignment(Qt::AlignCenter);
        label_37 = new QLabel(groupBox_6);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(20, 30, 211, 41));
        sizePolicy2.setHeightForWidth(label_37->sizePolicy().hasHeightForWidth());
        label_37->setSizePolicy(sizePolicy2);
        label_37->setMinimumSize(QSize(0, 0));
        label_37->setMaximumSize(QSize(12234, 16777215));
        label_37->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 0);"));
        label_37->setAlignment(Qt::AlignCenter);
        ComDriverName = new QComboBox(groupBox_6);
        ComDriverName->setObjectName(QString::fromUtf8("ComDriverName"));
        ComDriverName->setGeometry(QRect(370, 11, 131, 31));
        ComDriverName->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(255, 255, 0);\n"
"color: rgb(0, 0, 127);\n"
"border-color: rgb(255, 255, 255);"));

        retranslateUi(Workwidget);

        QMetaObject::connectSlotsByName(Workwidget);
    } // setupUi

    void retranslateUi(QWidget *Workwidget)
    {
        Workwidget->setWindowTitle(QApplication::translate("Workwidget", "Form", 0, QApplication::UnicodeUTF8));
        Timelab_work->setText(QString());
        EleLab->setText(QApplication::translate("Workwidget", "\347\224\265\351\207\217", 0, QApplication::UnicodeUTF8));
        PositionLab->setText(QApplication::translate("Workwidget", "\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8));
        ThreeGLab->setText(QApplication::translate("Workwidget", "3G", 0, QApplication::UnicodeUTF8));
        OverloadLabT->setText(QApplication::translate("Workwidget", "\350\266\205\350\275\275", 0, QApplication::UnicodeUTF8));
        OverloadLabN->setText(QString());
        label_43->setText(QApplication::translate("Workwidget", "\344\272\256\345\272\246\350\260\203\350\212\202", 0, QApplication::UnicodeUTF8));
        zengjia->setText(QApplication::translate("Workwidget", "+", 0, QApplication::UnicodeUTF8));
        jianshao->setText(QApplication::translate("Workwidget", "\344\270\200", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("Workwidget", "\345\255\230\345\202\250\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        RecordState->setText(QString());
        label_42->setText(QApplication::translate("Workwidget", "\347\263\273\347\273\237\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        SysInfStatus->setText(QString());
        MenuBtn->setText(QApplication::translate("Workwidget", "\346\211\223\345\274\200\350\217\234\345\215\225|\345\205\263\351\227\255\350\217\234\345\215\225", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        label_24->setText(QApplication::translate("Workwidget", "\345\207\200\351\207\215", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("Workwidget", "\345\275\223\347\217\255\347\264\257\350\256\241", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("Workwidget", "\344\275\234\344\270\232\346\254\241\346\225\260", 0, QApplication::UnicodeUTF8));
        OnDutySumLab->setText(QApplication::translate("Workwidget", "0", 0, QApplication::UnicodeUTF8));
        NetWeightLab->setText(QApplication::translate("Workwidget", "0", 0, QApplication::UnicodeUTF8));
        WorkTimesLab->setText(QApplication::translate("Workwidget", "0", 0, QApplication::UnicodeUTF8));
        StartWorkBtn->setText(QApplication::translate("Workwidget", "\346\255\243\345\234\250\344\275\234\344\270\232", 0, QApplication::UnicodeUTF8));
        FinishWorkBtn->setText(QApplication::translate("Workwidget", "\345\267\245\347\217\255\345\256\214\346\210\220", 0, QApplication::UnicodeUTF8));
        QuPi->setText(QApplication::translate("Workwidget", "\351\231\244\347\232\256\346\223\215\344\275\234", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QString());
        label_32->setText(QApplication::translate("Workwidget", "\346\257\233\351\207\215", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("Workwidget", "\351\242\235\351\207\215", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("Workwidget", "\345\271\205\345\272\246", 0, QApplication::UnicodeUTF8));
        RoughWeightLab->setText(QApplication::translate("Workwidget", "0", 0, QApplication::UnicodeUTF8));
        RangeLab->setText(QApplication::translate("Workwidget", "0", 0, QApplication::UnicodeUTF8));
        RatedWeightLab->setText(QApplication::translate("Workwidget", "0", 0, QApplication::UnicodeUTF8));
        label_47->setText(QApplication::translate("Workwidget", "\347\232\256\351\207\215", 0, QApplication::UnicodeUTF8));
        label_48->setText(QApplication::translate("Workwidget", "\350\203\275\350\200\227", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("Workwidget", "\351\253\230\345\272\246", 0, QApplication::UnicodeUTF8));
        EmptyWeightLab->setText(QApplication::translate("Workwidget", "0", 0, QApplication::UnicodeUTF8));
        HeightLab->setText(QApplication::translate("Workwidget", "0", 0, QApplication::UnicodeUTF8));
        EnergyLab->setText(QApplication::translate("Workwidget", "0", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("Workwidget", "\344\275\234\344\270\232\347\245\250", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("Workwidget", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("Workwidget", "\350\210\271\345\220\215", 0, QApplication::UnicodeUTF8));
        DriverNameLab->setText(QString());
        ShipName->setText(QString());
        ManInputBtn->setText(QApplication::translate("Workwidget", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QString());
        label_35->setText(QApplication::translate("Workwidget", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("Workwidget", "\350\210\271\345\220\215", 0, QApplication::UnicodeUTF8));
        ConShipName->setText(QString());
        label_45->setText(QApplication::translate("Workwidget", "\344\275\234\344\270\232\347\245\250", 0, QApplication::UnicodeUTF8));
        ConWorkNum->setText(QString());
        ConCabinNum->setText(QString());
        label_46->setText(QApplication::translate("Workwidget", "\344\273\223\344\275\215", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("Workwidget", "\344\270\255\346\216\247\346\264\276\345\267\245\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Workwidget: public Ui_Workwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKWIDGET_H
