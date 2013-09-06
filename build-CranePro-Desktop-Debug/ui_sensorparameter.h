/********************************************************************************
** Form generated from reading UI file 'sensorparameter.ui'
**
** Created: Fri Sep 6 10:29:31 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSORPARAMETER_H
#define UI_SENSORPARAMETER_H

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

class Ui_SensorParameter
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *OnOffSenLab;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *AngleLab;
    QLabel *label_9;
    QLabel *SupportLab;
    QLabel *AngleSenLab;
    QLabel *HeightSenLab;
    QLabel *HeightLab;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QLineEdit *HeightZeroInputLine;
    QLabel *label_24;
    QLabel *label_11;
    QLineEdit *HeightCoefficientInput;
    QLabel *label_25;
    QLabel *label_2;
    QLineEdit *DataNum;
    QLabel *label_8;
    QPushButton *ModifyCoeH;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_26;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_3;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_31;
    QLabel *label_32;
    QLineEdit *OnOffZeroInput;
    QLineEdit *SupportZeroInput;
    QPushButton *ModifyOFSZero;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_33;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_4;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_48;
    QLineEdit *OnOffCoefficientInput;
    QLineEdit *OFDemarcateWeightInput;
    QLineEdit *SupportCoefficientInput;
    QLineEdit *SDemarcateWeightInput;
    QLineEdit *DynamicCoefficientInput;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_8;
    QPushButton *ModifyCoeOn;
    QSpacerItem *verticalSpacer_7;
    QPushButton *ModifyCoeSu;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *BackToWorkBtn;

    void setupUi(QWidget *SensorParameter)
    {
        if (SensorParameter->objectName().isEmpty())
            SensorParameter->setObjectName(QString::fromUtf8("SensorParameter"));
        SensorParameter->resize(800, 514);
        gridLayout_5 = new QGridLayout(SensorParameter);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox = new QGroupBox(SensorParameter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"border-color: rgb(85, 170, 255);"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 75 28pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        OnOffSenLab = new QLabel(groupBox);
        OnOffSenLab->setObjectName(QString::fromUtf8("OnOffSenLab"));
        OnOffSenLab->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        OnOffSenLab->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(OnOffSenLab, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(184, 184, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(184, 184, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(184, 184, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(184, 184, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(184, 184, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        AngleLab = new QLabel(groupBox);
        AngleLab->setObjectName(QString::fromUtf8("AngleLab"));
        AngleLab->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        AngleLab->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(AngleLab, 4, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(184, 184, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 5, 0, 1, 1);

        SupportLab = new QLabel(groupBox);
        SupportLab->setObjectName(QString::fromUtf8("SupportLab"));
        SupportLab->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        SupportLab->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(SupportLab, 1, 1, 1, 1);

        AngleSenLab = new QLabel(groupBox);
        AngleSenLab->setObjectName(QString::fromUtf8("AngleSenLab"));
        AngleSenLab->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        AngleSenLab->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(AngleSenLab, 2, 1, 1, 1);

        HeightSenLab = new QLabel(groupBox);
        HeightSenLab->setObjectName(QString::fromUtf8("HeightSenLab"));
        HeightSenLab->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        HeightSenLab->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(HeightSenLab, 3, 1, 1, 1);

        HeightLab = new QLabel(groupBox);
        HeightLab->setObjectName(QString::fromUtf8("HeightLab"));
        HeightLab->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        HeightLab->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(HeightLab, 5, 1, 1, 1);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(label_18, 0, 2, 1, 1);

        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(label_19, 1, 2, 1, 1);

        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(label_20, 2, 2, 1, 1);

        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(label_21, 3, 2, 1, 1);

        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(label_22, 4, 2, 1, 1);

        label_23 = new QLabel(groupBox);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(label_23, 5, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(184, 184, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        HeightZeroInputLine = new QLineEdit(groupBox);
        HeightZeroInputLine->setObjectName(QString::fromUtf8("HeightZeroInputLine"));
        HeightZeroInputLine->setMaximumSize(QSize(140, 16777215));
        HeightZeroInputLine->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(250, 255, 175);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_2->addWidget(HeightZeroInputLine, 0, 1, 1, 1);

        label_24 = new QLabel(groupBox);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_2->addWidget(label_24, 0, 2, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(184, 184, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_11, 1, 0, 1, 1);

        HeightCoefficientInput = new QLineEdit(groupBox);
        HeightCoefficientInput->setObjectName(QString::fromUtf8("HeightCoefficientInput"));
        HeightCoefficientInput->setMaximumSize(QSize(140, 16777215));
        HeightCoefficientInput->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(250, 255, 175);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_2->addWidget(HeightCoefficientInput, 1, 1, 1, 1);

        label_25 = new QLabel(groupBox);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_2->addWidget(label_25, 1, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(184, 184, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        DataNum = new QLineEdit(groupBox);
        DataNum->setObjectName(QString::fromUtf8("DataNum"));
        DataNum->setMaximumSize(QSize(140, 16777215));
        DataNum->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(250, 255, 175);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_2->addWidget(DataNum, 2, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_2->addWidget(label_8, 2, 2, 1, 1);

        ModifyCoeH = new QPushButton(groupBox);
        ModifyCoeH->setObjectName(QString::fromUtf8("ModifyCoeH"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ModifyCoeH->sizePolicy().hasHeightForWidth());
        ModifyCoeH->setSizePolicy(sizePolicy);
        ModifyCoeH->setMaximumSize(QSize(200, 16777215));
        ModifyCoeH->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(155, 200, 40);"));

        gridLayout_2->addWidget(ModifyCoeH, 4, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);


        gridLayout_5->addWidget(groupBox, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox_2 = new QGroupBox(SensorParameter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"border-color: rgb(85, 170, 255);"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_26 = new QLabel(groupBox_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setStyleSheet(QString::fromUtf8("font: 75 28pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 0, 0);"));
        label_26->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_26);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(184, 184, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        label_27->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_27, 0, 0, 1, 1);

        label_28 = new QLabel(groupBox_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(184, 184, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        label_28->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_28, 1, 0, 1, 1);

        label_31 = new QLabel(groupBox_2);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_3->addWidget(label_31, 0, 2, 1, 1);

        label_32 = new QLabel(groupBox_2);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_3->addWidget(label_32, 1, 2, 1, 1);

        OnOffZeroInput = new QLineEdit(groupBox_2);
        OnOffZeroInput->setObjectName(QString::fromUtf8("OnOffZeroInput"));
        OnOffZeroInput->setMaximumSize(QSize(140, 16777215));
        OnOffZeroInput->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(250, 255, 175);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_3->addWidget(OnOffZeroInput, 0, 1, 1, 1);

        SupportZeroInput = new QLineEdit(groupBox_2);
        SupportZeroInput->setObjectName(QString::fromUtf8("SupportZeroInput"));
        SupportZeroInput->setMaximumSize(QSize(140, 16777215));
        SupportZeroInput->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(250, 255, 175);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_3->addWidget(SupportZeroInput, 1, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_3);

        ModifyOFSZero = new QPushButton(groupBox_2);
        ModifyOFSZero->setObjectName(QString::fromUtf8("ModifyOFSZero"));
        ModifyOFSZero->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(155, 200, 40);"));

        horizontalLayout_2->addWidget(ModifyOFSZero);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_5->addWidget(groupBox_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_5->addItem(verticalSpacer_2);

        groupBox_3 = new QGroupBox(SensorParameter);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"border-color: rgb(85, 170, 255);"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_33 = new QLabel(groupBox_3);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setStyleSheet(QString::fromUtf8("font: 75 28pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 0, 0);"));
        label_33->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_33);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_35 = new QLabel(groupBox_3);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(184, 184, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        label_35->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_35, 0, 0, 1, 1);

        label_36 = new QLabel(groupBox_3);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_4->addWidget(label_36, 0, 2, 1, 1);

        label_37 = new QLabel(groupBox_3);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(184, 184, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        label_37->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_37, 1, 0, 1, 1);

        label_38 = new QLabel(groupBox_3);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(184, 184, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        label_38->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_38, 3, 0, 1, 1);

        label_39 = new QLabel(groupBox_3);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(184, 184, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        label_39->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_39, 4, 0, 1, 1);

        label_40 = new QLabel(groupBox_3);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(184, 184, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        label_40->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_40, 6, 0, 1, 1);

        label_42 = new QLabel(groupBox_3);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_4->addWidget(label_42, 1, 2, 1, 1);

        label_43 = new QLabel(groupBox_3);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_4->addWidget(label_43, 3, 2, 1, 1);

        label_44 = new QLabel(groupBox_3);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_4->addWidget(label_44, 4, 2, 1, 1);

        label_48 = new QLabel(groupBox_3);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_4->addWidget(label_48, 6, 2, 1, 1);

        OnOffCoefficientInput = new QLineEdit(groupBox_3);
        OnOffCoefficientInput->setObjectName(QString::fromUtf8("OnOffCoefficientInput"));
        OnOffCoefficientInput->setMaximumSize(QSize(140, 16777215));
        OnOffCoefficientInput->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(250, 255, 175);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_4->addWidget(OnOffCoefficientInput, 0, 1, 1, 1);

        OFDemarcateWeightInput = new QLineEdit(groupBox_3);
        OFDemarcateWeightInput->setObjectName(QString::fromUtf8("OFDemarcateWeightInput"));
        OFDemarcateWeightInput->setMaximumSize(QSize(140, 16777215));
        OFDemarcateWeightInput->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(250, 255, 175);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_4->addWidget(OFDemarcateWeightInput, 1, 1, 1, 1);

        SupportCoefficientInput = new QLineEdit(groupBox_3);
        SupportCoefficientInput->setObjectName(QString::fromUtf8("SupportCoefficientInput"));
        SupportCoefficientInput->setMaximumSize(QSize(140, 16777215));
        SupportCoefficientInput->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(250, 255, 175);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_4->addWidget(SupportCoefficientInput, 3, 1, 1, 1);

        SDemarcateWeightInput = new QLineEdit(groupBox_3);
        SDemarcateWeightInput->setObjectName(QString::fromUtf8("SDemarcateWeightInput"));
        SDemarcateWeightInput->setMaximumSize(QSize(140, 16777215));
        SDemarcateWeightInput->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(250, 255, 175);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_4->addWidget(SDemarcateWeightInput, 4, 1, 1, 1);

        DynamicCoefficientInput = new QLineEdit(groupBox_3);
        DynamicCoefficientInput->setObjectName(QString::fromUtf8("DynamicCoefficientInput"));
        DynamicCoefficientInput->setMaximumSize(QSize(140, 16777215));
        DynamicCoefficientInput->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(250, 255, 175);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_4->addWidget(DynamicCoefficientInput, 6, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 7, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 2, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_5, 5, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_8);

        ModifyCoeOn = new QPushButton(groupBox_3);
        ModifyCoeOn->setObjectName(QString::fromUtf8("ModifyCoeOn"));
        ModifyCoeOn->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(155, 200, 40);"));

        verticalLayout->addWidget(ModifyCoeOn);

        verticalSpacer_7 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_7);

        ModifyCoeSu = new QPushButton(groupBox_3);
        ModifyCoeSu->setObjectName(QString::fromUtf8("ModifyCoeSu"));
        ModifyCoeSu->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(155, 200, 40);"));

        verticalLayout->addWidget(ModifyCoeSu);

        verticalSpacer_6 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_5->addWidget(groupBox_3);


        gridLayout_5->addLayout(verticalLayout_5, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(258, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        BackToWorkBtn = new QPushButton(SensorParameter);
        BackToWorkBtn->setObjectName(QString::fromUtf8("BackToWorkBtn"));
        sizePolicy.setHeightForWidth(BackToWorkBtn->sizePolicy().hasHeightForWidth());
        BackToWorkBtn->setSizePolicy(sizePolicy);
        BackToWorkBtn->setMinimumSize(QSize(100, 0));
        BackToWorkBtn->setMaximumSize(QSize(300, 16777215));
        BackToWorkBtn->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(155, 200, 40);"));

        horizontalLayout_3->addWidget(BackToWorkBtn);


        gridLayout_5->addLayout(horizontalLayout_3, 1, 0, 1, 2);


        retranslateUi(SensorParameter);

        QMetaObject::connectSlotsByName(SensorParameter);
    } // setupUi

    void retranslateUi(QWidget *SensorParameter)
    {
        SensorParameter->setWindowTitle(QApplication::translate("SensorParameter", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SensorParameter", "\344\274\240\346\204\237\345\231\250\344\277\241\345\217\267", 0, QApplication::UnicodeUTF8));
        OnOffSenLab->setText(QString());
        label_3->setText(QApplication::translate("SensorParameter", "\345\274\200\351\227\255\344\274\240\346\204\237\345\231\250", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SensorParameter", "\346\224\257\346\214\201\344\274\240\346\204\237\345\231\250", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SensorParameter", "\350\247\222\345\272\246\344\274\240\346\204\237\345\231\250", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SensorParameter", "\351\253\230\345\272\246\344\274\240\346\204\237\345\231\250", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SensorParameter", "\350\247\222\345\272\246", 0, QApplication::UnicodeUTF8));
        AngleLab->setText(QString());
        label_9->setText(QApplication::translate("SensorParameter", "\351\253\230\345\272\246", 0, QApplication::UnicodeUTF8));
        SupportLab->setText(QString());
        AngleSenLab->setText(QString());
        HeightSenLab->setText(QString());
        HeightLab->setText(QString());
        label_18->setText(QApplication::translate("SensorParameter", "Ma", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("SensorParameter", "Ma", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("SensorParameter", "Ma", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("SensorParameter", "Ma", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("SensorParameter", "\345\272\246", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("SensorParameter", "\347\261\263", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("SensorParameter", "\351\253\230\345\272\246\351\233\266\347\202\271", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("SensorParameter", "Ma", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("SensorParameter", "\351\253\230\345\272\246\347\263\273\346\225\260", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("SensorParameter", "Ma/M", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SensorParameter", "\346\225\260\346\215\256\351\207\207\351\233\206", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("SensorParameter", "\344\270\252", 0, QApplication::UnicodeUTF8));
        ModifyCoeH->setText(QApplication::translate("SensorParameter", "\350\260\203\347\263\273\346\225\260", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("SensorParameter", "\344\274\240\346\204\237\345\231\250\350\260\203\351\233\266", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("SensorParameter", "\345\274\200\351\227\255\351\233\266\347\202\271", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("SensorParameter", "\346\224\257\346\214\201\351\233\266\347\202\271", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("SensorParameter", "Ma", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("SensorParameter", "Ma", 0, QApplication::UnicodeUTF8));
        ModifyOFSZero->setText(QApplication::translate("SensorParameter", "\350\260\203\351\233\266", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("SensorParameter", "\344\274\240\346\204\237\345\231\250\347\263\273\346\225\260", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("SensorParameter", "\345\274\200\351\227\255\347\263\273\346\225\260", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("SensorParameter", "Ma/T", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("SensorParameter", "\346\240\207\345\256\232\351\207\215\351\207\217", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("SensorParameter", "\346\224\257\346\214\201\347\263\273\346\225\260", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("SensorParameter", "\346\240\207\345\256\232\351\207\215\351\207\217", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("SensorParameter", "\345\212\250\346\200\201\347\263\273\346\225\260", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("SensorParameter", "T", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("SensorParameter", "Ma/T", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("SensorParameter", "T", 0, QApplication::UnicodeUTF8));
        label_48->setText(QApplication::translate("SensorParameter", "%", 0, QApplication::UnicodeUTF8));
        ModifyCoeOn->setText(QApplication::translate("SensorParameter", "\350\260\203\347\263\273\346\225\260", 0, QApplication::UnicodeUTF8));
        ModifyCoeSu->setText(QApplication::translate("SensorParameter", "\350\260\203\347\263\273\346\225\260", 0, QApplication::UnicodeUTF8));
        BackToWorkBtn->setText(QApplication::translate("SensorParameter", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SensorParameter: public Ui_SensorParameter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSORPARAMETER_H
