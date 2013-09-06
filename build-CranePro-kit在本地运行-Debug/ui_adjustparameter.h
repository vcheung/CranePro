/********************************************************************************
** Form generated from reading UI file 'adjustparameter.ui'
**
** Created: Tue Aug 20 14:49:58 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADJUSTPARAMETER_H
#define UI_ADJUSTPARAMETER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adjustparameter
{
public:
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *RecordPosLab;
    QLabel *SendPosLab;
    QLabel *OverflowFlagLab;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_8;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *AlarmValue;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_5;
    QLineEdit *ControlValue;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_11;
    QLineEdit *ControlDelay;
    QLabel *label_14;
    QLabel *label_6;
    QLineEdit *InstantValue;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_12;
    QLineEdit *InstantDelay;
    QLabel *label_15;
    QLabel *label_10;
    QLineEdit *SlowValue;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_13;
    QLineEdit *SlowDelay;
    QLabel *label_16;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QPushButton *BackToWorkBtn;
    QPushButton *SureBtn;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_10;

    void setupUi(QWidget *adjustparameter)
    {
        if (adjustparameter->objectName().isEmpty())
            adjustparameter->setObjectName(QString::fromUtf8("adjustparameter"));
        adjustparameter->resize(800, 480);
        gridLayout_4 = new QGridLayout(adjustparameter);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(adjustparameter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"border-color: rgb(85, 170, 255);"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_4);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setStyleSheet(QString::fromUtf8("font: 28pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(255, 0, 0);"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_7);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"background-color: rgb(184, 184, 255);"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"background-color: rgb(184, 184, 255);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"background-color: rgb(184, 184, 255);"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        RecordPosLab = new QLabel(groupBox);
        RecordPosLab->setObjectName(QString::fromUtf8("RecordPosLab"));
        sizePolicy1.setHeightForWidth(RecordPosLab->sizePolicy().hasHeightForWidth());
        RecordPosLab->setSizePolicy(sizePolicy1);
        RecordPosLab->setMaximumSize(QSize(160, 16777215));
        RecordPosLab->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));
        RecordPosLab->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(RecordPosLab, 0, 1, 1, 1);

        SendPosLab = new QLabel(groupBox);
        SendPosLab->setObjectName(QString::fromUtf8("SendPosLab"));
        sizePolicy1.setHeightForWidth(SendPosLab->sizePolicy().hasHeightForWidth());
        SendPosLab->setSizePolicy(sizePolicy1);
        SendPosLab->setMaximumSize(QSize(160, 16777215));
        SendPosLab->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));
        SendPosLab->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(SendPosLab, 1, 1, 1, 1);

        OverflowFlagLab = new QLabel(groupBox);
        OverflowFlagLab->setObjectName(QString::fromUtf8("OverflowFlagLab"));
        sizePolicy1.setHeightForWidth(OverflowFlagLab->sizePolicy().hasHeightForWidth());
        OverflowFlagLab->setSizePolicy(sizePolicy1);
        OverflowFlagLab->setMaximumSize(QSize(160, 16777215));
        OverflowFlagLab->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));
        OverflowFlagLab->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(OverflowFlagLab, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(adjustparameter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy2);
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"border-color: rgb(85, 170, 255);"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("font: 28pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(255, 0, 0);"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_8);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        label_4->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"background-color: rgb(184, 184, 255);"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        AlarmValue = new QLineEdit(groupBox_2);
        AlarmValue->setObjectName(QString::fromUtf8("AlarmValue"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(AlarmValue->sizePolicy().hasHeightForWidth());
        AlarmValue->setSizePolicy(sizePolicy4);
        AlarmValue->setMaximumSize(QSize(140, 16777215));
        AlarmValue->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(250, 255, 175);\n"
"font: 22pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(AlarmValue, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"background-color: rgb(184, 184, 255);"));

        gridLayout->addWidget(label_9, 0, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 3, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy5);
        label_5->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"background-color: rgb(184, 184, 255);"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        ControlValue = new QLineEdit(groupBox_2);
        ControlValue->setObjectName(QString::fromUtf8("ControlValue"));
        sizePolicy4.setHeightForWidth(ControlValue->sizePolicy().hasHeightForWidth());
        ControlValue->setSizePolicy(sizePolicy4);
        ControlValue->setMaximumSize(QSize(140, 16777215));
        ControlValue->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(250, 255, 175);\n"
"font: 22pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(ControlValue, 1, 1, 1, 1);

        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"background-color: rgb(184, 184, 255);"));

        gridLayout->addWidget(label_17, 1, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 1, 3, 1, 1);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy6);
        label_11->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"background-color: rgb(184, 184, 255);"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_11, 1, 4, 1, 1);

        ControlDelay = new QLineEdit(groupBox_2);
        ControlDelay->setObjectName(QString::fromUtf8("ControlDelay"));
        sizePolicy4.setHeightForWidth(ControlDelay->sizePolicy().hasHeightForWidth());
        ControlDelay->setSizePolicy(sizePolicy4);
        ControlDelay->setMaximumSize(QSize(140, 16777215));
        ControlDelay->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(250, 255, 175);\n"
"font: 22pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(ControlDelay, 1, 5, 1, 1);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy5.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy5);
        label_14->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);"));
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_14, 1, 6, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy5.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy5);
        label_6->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"background-color: rgb(184, 184, 255);"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        InstantValue = new QLineEdit(groupBox_2);
        InstantValue->setObjectName(QString::fromUtf8("InstantValue"));
        sizePolicy4.setHeightForWidth(InstantValue->sizePolicy().hasHeightForWidth());
        InstantValue->setSizePolicy(sizePolicy4);
        InstantValue->setMaximumSize(QSize(140, 16777215));
        InstantValue->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(250, 255, 175);\n"
"font: 22pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(InstantValue, 2, 1, 1, 1);

        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"background-color: rgb(184, 184, 255);"));

        gridLayout->addWidget(label_18, 2, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 2, 3, 1, 1);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy6.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy6);
        label_12->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"background-color: rgb(184, 184, 255);"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_12, 2, 4, 1, 1);

        InstantDelay = new QLineEdit(groupBox_2);
        InstantDelay->setObjectName(QString::fromUtf8("InstantDelay"));
        sizePolicy4.setHeightForWidth(InstantDelay->sizePolicy().hasHeightForWidth());
        InstantDelay->setSizePolicy(sizePolicy4);
        InstantDelay->setMaximumSize(QSize(140, 16777215));
        InstantDelay->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(250, 255, 175);\n"
"font: 22pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(InstantDelay, 2, 5, 1, 1);

        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy5.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy5);
        label_15->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);"));
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_15, 2, 6, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy5.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy5);
        label_10->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"background-color: rgb(184, 184, 255);"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 3, 0, 1, 1);

        SlowValue = new QLineEdit(groupBox_2);
        SlowValue->setObjectName(QString::fromUtf8("SlowValue"));
        sizePolicy4.setHeightForWidth(SlowValue->sizePolicy().hasHeightForWidth());
        SlowValue->setSizePolicy(sizePolicy4);
        SlowValue->setMaximumSize(QSize(140, 16777215));
        SlowValue->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(250, 255, 175);\n"
"font: 22pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(SlowValue, 3, 1, 1, 1);

        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"background-color: rgb(184, 184, 255);"));

        gridLayout->addWidget(label_19, 3, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 3, 3, 1, 1);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy6.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy6);
        label_13->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"background-color: rgb(184, 184, 255);"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_13, 3, 4, 1, 1);

        SlowDelay = new QLineEdit(groupBox_2);
        SlowDelay->setObjectName(QString::fromUtf8("SlowDelay"));
        sizePolicy4.setHeightForWidth(SlowDelay->sizePolicy().hasHeightForWidth());
        SlowDelay->setSizePolicy(sizePolicy4);
        SlowDelay->setMaximumSize(QSize(140, 16777215));
        SlowDelay->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(250, 255, 175);\n"
"font: 22pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(SlowDelay, 3, 5, 1, 1);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy5.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy5);
        label_16->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);"));
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_16, 3, 6, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        horizontalLayout->addWidget(groupBox_2);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_3->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 3, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 3, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_3->addItem(verticalSpacer, 4, 1, 1, 1);

        BackToWorkBtn = new QPushButton(adjustparameter);
        BackToWorkBtn->setObjectName(QString::fromUtf8("BackToWorkBtn"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(BackToWorkBtn->sizePolicy().hasHeightForWidth());
        BackToWorkBtn->setSizePolicy(sizePolicy7);
        BackToWorkBtn->setMaximumSize(QSize(100, 16777215));
        BackToWorkBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(155, 200, 40);\n"
"color: rgb(0, 0, 255);\n"
"font: 28pt \"\351\273\221\344\275\223\";"));

        gridLayout_3->addWidget(BackToWorkBtn, 4, 4, 1, 1);

        SureBtn = new QPushButton(adjustparameter);
        SureBtn->setObjectName(QString::fromUtf8("SureBtn"));
        QSizePolicy sizePolicy8(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(SureBtn->sizePolicy().hasHeightForWidth());
        SureBtn->setSizePolicy(sizePolicy8);
        SureBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(155, 200, 40);\n"
"color: rgb(0, 0, 255);\n"
"font: 28pt \"\351\273\221\344\275\223\";"));

        gridLayout_3->addWidget(SureBtn, 1, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_9, 1, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_10, 4, 3, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 1, 0, 1, 1);


        retranslateUi(adjustparameter);

        QMetaObject::connectSlotsByName(adjustparameter);
    } // setupUi

    void retranslateUi(QWidget *adjustparameter)
    {
        adjustparameter->setWindowTitle(QApplication::translate("adjustparameter", "Form", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("adjustparameter", "\346\225\260\346\215\256\344\274\240\350\276\223\345\217\202\346\225\260", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("adjustparameter", "\350\256\260\345\275\225\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("adjustparameter", "\345\217\221\351\200\201\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("adjustparameter", "\346\272\242\345\207\272\346\240\207\350\256\260", 0, QApplication::UnicodeUTF8));
        RecordPosLab->setText(QString());
        SendPosLab->setText(QString());
        OverflowFlagLab->setText(QString());
        label_8->setText(QApplication::translate("adjustparameter", "\350\276\223\345\207\272\346\216\247\345\210\266\345\217\202\346\225\260", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("adjustparameter", "\346\212\245\350\255\246\345\200\274", 0, QApplication::UnicodeUTF8));
        AlarmValue->setText(QString());
        label_9->setText(QApplication::translate("adjustparameter", "%", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("adjustparameter", "\346\216\247\345\210\266\345\200\274", 0, QApplication::UnicodeUTF8));
        ControlValue->setText(QString());
        label_17->setText(QApplication::translate("adjustparameter", "%", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("adjustparameter", "\345\273\266\346\227\266", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("adjustparameter", "\347\247\222", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("adjustparameter", "\347\236\254\346\227\266\345\200\274", 0, QApplication::UnicodeUTF8));
        InstantValue->setText(QString());
        label_18->setText(QApplication::translate("adjustparameter", "%", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("adjustparameter", "\345\273\266\346\227\266", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("adjustparameter", "\347\247\222", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("adjustparameter", "\345\207\217\351\200\237\345\200\274", 0, QApplication::UnicodeUTF8));
        SlowValue->setText(QString());
        label_19->setText(QApplication::translate("adjustparameter", "t", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("adjustparameter", "\345\273\266\346\227\266", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("adjustparameter", "\347\247\222", 0, QApplication::UnicodeUTF8));
        BackToWorkBtn->setText(QApplication::translate("adjustparameter", " \351\200\200 \345\207\272 ", 0, QApplication::UnicodeUTF8));
        SureBtn->setText(QApplication::translate("adjustparameter", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class adjustparameter: public Ui_adjustparameter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADJUSTPARAMETER_H
