/********************************************************************************
** Form generated from reading UI file 'adjusttimewidget.ui'
**
** Created: Wed May 8 09:22:56 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADJUSTTIMEWIDGET_H
#define UI_ADJUSTTIMEWIDGET_H

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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adjusttimewidget
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *YearLineE;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_11;
    QLineEdit *HourLineE;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *MonLineE;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_12;
    QLineEdit *MinLineE;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *DayLineE;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_13;
    QLineEdit *SecLineE;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *ModifyTime;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_12;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_22;
    QLineEdit *OldPasswordLineE;
    QPushButton *GetWord;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_23;
    QLineEdit *NewPassordLineE;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_24;
    QLineEdit *NewPassword2LineE;
    QPushButton *SureModifyWord;
    QGroupBox *groupBox_3;
    QPushButton *SysParSureBtn;
    QLineEdit *MachID;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *BackToWorkBtn;

    void setupUi(QWidget *adjusttimewidget)
    {
        if (adjusttimewidget->objectName().isEmpty())
            adjusttimewidget->setObjectName(QString::fromUtf8("adjusttimewidget"));
        adjusttimewidget->resize(800, 480);
        gridLayout_3 = new QGridLayout(adjusttimewidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(adjusttimewidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(24);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("border-color: rgb(85, 170, 255);\n"
"color: rgb(255, 0, 0);\n"
"font: 24pt \"\351\273\221\344\275\223\";"));

        gridLayout_2->addWidget(label_13, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        YearLineE = new QLineEdit(groupBox);
        YearLineE->setObjectName(QString::fromUtf8("YearLineE"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(YearLineE->sizePolicy().hasHeightForWidth());
        YearLineE->setSizePolicy(sizePolicy1);
        YearLineE->setMinimumSize(QSize(0, 40));
        YearLineE->setMaximumSize(QSize(200, 16777215));
        YearLineE->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 255, 175);\n"
"font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);\n"
"border-color: rgb(0, 85, 0);"));

        horizontalLayout_5->addWidget(YearLineE);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QString::fromUtf8("border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_5->addWidget(label_2);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);

        HourLineE = new QLineEdit(groupBox);
        HourLineE->setObjectName(QString::fromUtf8("HourLineE"));
        sizePolicy1.setHeightForWidth(HourLineE->sizePolicy().hasHeightForWidth());
        HourLineE->setSizePolicy(sizePolicy1);
        HourLineE->setMinimumSize(QSize(0, 40));
        HourLineE->setMaximumSize(QSize(200, 16777215));
        HourLineE->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 255, 175);\n"
"font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);\n"
"border-color: rgb(0, 85, 0);"));

        horizontalLayout_5->addWidget(HourLineE);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setStyleSheet(QString::fromUtf8("border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        gridLayout_2->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        MonLineE = new QLineEdit(groupBox);
        MonLineE->setObjectName(QString::fromUtf8("MonLineE"));
        sizePolicy1.setHeightForWidth(MonLineE->sizePolicy().hasHeightForWidth());
        MonLineE->setSizePolicy(sizePolicy1);
        MonLineE->setMinimumSize(QSize(0, 40));
        MonLineE->setMaximumSize(QSize(200, 16777215));
        MonLineE->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 255, 175);\n"
"font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);\n"
"border-color: rgb(0, 85, 0);"));

        horizontalLayout_6->addWidget(MonLineE);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QString::fromUtf8("border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_6->addWidget(label_3);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);

        MinLineE = new QLineEdit(groupBox);
        MinLineE->setObjectName(QString::fromUtf8("MinLineE"));
        sizePolicy1.setHeightForWidth(MinLineE->sizePolicy().hasHeightForWidth());
        MinLineE->setSizePolicy(sizePolicy1);
        MinLineE->setMinimumSize(QSize(0, 40));
        MinLineE->setMaximumSize(QSize(200, 16777215));
        MinLineE->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 255, 175);\n"
"font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);\n"
"border-color: rgb(0, 85, 0);"));

        horizontalLayout_6->addWidget(MinLineE);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setStyleSheet(QString::fromUtf8("border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_6->addWidget(label_6);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);


        gridLayout_2->addLayout(horizontalLayout_6, 2, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        DayLineE = new QLineEdit(groupBox);
        DayLineE->setObjectName(QString::fromUtf8("DayLineE"));
        sizePolicy1.setHeightForWidth(DayLineE->sizePolicy().hasHeightForWidth());
        DayLineE->setSizePolicy(sizePolicy1);
        DayLineE->setMinimumSize(QSize(0, 40));
        DayLineE->setMaximumSize(QSize(200, 16777215));
        DayLineE->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 255, 175);\n"
"font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);\n"
"border-color: rgb(0, 85, 0);"));

        horizontalLayout_7->addWidget(DayLineE);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setStyleSheet(QString::fromUtf8("border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_7->addWidget(label_4);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);

        SecLineE = new QLineEdit(groupBox);
        SecLineE->setObjectName(QString::fromUtf8("SecLineE"));
        sizePolicy1.setHeightForWidth(SecLineE->sizePolicy().hasHeightForWidth());
        SecLineE->setSizePolicy(sizePolicy1);
        SecLineE->setMinimumSize(QSize(0, 40));
        SecLineE->setMaximumSize(QSize(200, 16777215));
        SecLineE->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 255, 175);\n"
"font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);\n"
"border-color: rgb(0, 85, 0);"));

        horizontalLayout_7->addWidget(SecLineE);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setStyleSheet(QString::fromUtf8("border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_7->addWidget(label_7);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);


        gridLayout_2->addLayout(horizontalLayout_7, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ModifyTime = new QPushButton(groupBox);
        ModifyTime->setObjectName(QString::fromUtf8("ModifyTime"));
        ModifyTime->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"background-color: rgb(155, 200, 40);\n"
"font: 21pt \"\351\273\221\344\275\223\";"));

        horizontalLayout->addWidget(ModifyTime);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout, 4, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox_2 = new QGroupBox(adjusttimewidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy2);
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("border-color: rgb(85, 170, 255);\n"
"color: rgb(255, 0, 0);\n"
"font: 24pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(label_12, 0, 0, 1, 3);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        horizontalSpacer_22 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_22, 1, 1, 1, 1);

        OldPasswordLineE = new QLineEdit(groupBox_2);
        OldPasswordLineE->setObjectName(QString::fromUtf8("OldPasswordLineE"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(OldPasswordLineE->sizePolicy().hasHeightForWidth());
        OldPasswordLineE->setSizePolicy(sizePolicy3);
        OldPasswordLineE->setMinimumSize(QSize(200, 40));
        OldPasswordLineE->setMaximumSize(QSize(200, 40));
        OldPasswordLineE->setFont(font1);
        OldPasswordLineE->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 255, 175);\n"
"font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);\n"
"border-color: rgb(0, 85, 0);"));
        OldPasswordLineE->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(OldPasswordLineE, 1, 2, 1, 1);

        GetWord = new QPushButton(groupBox_2);
        GetWord->setObjectName(QString::fromUtf8("GetWord"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(GetWord->sizePolicy().hasHeightForWidth());
        GetWord->setSizePolicy(sizePolicy4);
        GetWord->setMaximumSize(QSize(16777215, 40));
        GetWord->setFont(font1);
        GetWord->setFocusPolicy(Qt::NoFocus);
        GetWord->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"background-color: rgb(155, 200, 40);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(GetWord, 1, 3, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(label_10, 2, 0, 1, 1);

        horizontalSpacer_23 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_23, 2, 1, 1, 1);

        NewPassordLineE = new QLineEdit(groupBox_2);
        NewPassordLineE->setObjectName(QString::fromUtf8("NewPassordLineE"));
        sizePolicy3.setHeightForWidth(NewPassordLineE->sizePolicy().hasHeightForWidth());
        NewPassordLineE->setSizePolicy(sizePolicy3);
        NewPassordLineE->setMinimumSize(QSize(200, 40));
        NewPassordLineE->setMaximumSize(QSize(200, 40));
        NewPassordLineE->setFont(font1);
        NewPassordLineE->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 255, 175);\n"
"font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);\n"
"border-color: rgb(0, 85, 0);"));
        NewPassordLineE->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(NewPassordLineE, 2, 2, 1, 1);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy5);
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(label_11, 3, 0, 1, 1);

        horizontalSpacer_24 = new QSpacerItem(13, 24, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_24, 3, 1, 1, 1);

        NewPassword2LineE = new QLineEdit(groupBox_2);
        NewPassword2LineE->setObjectName(QString::fromUtf8("NewPassword2LineE"));
        sizePolicy2.setHeightForWidth(NewPassword2LineE->sizePolicy().hasHeightForWidth());
        NewPassword2LineE->setSizePolicy(sizePolicy2);
        NewPassword2LineE->setMinimumSize(QSize(200, 40));
        NewPassword2LineE->setMaximumSize(QSize(200, 40));
        NewPassword2LineE->setFont(font1);
        NewPassword2LineE->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 255, 175);\n"
"font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);\n"
"border-color: rgb(0, 85, 0);"));
        NewPassword2LineE->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(NewPassword2LineE, 3, 2, 1, 1);

        SureModifyWord = new QPushButton(groupBox_2);
        SureModifyWord->setObjectName(QString::fromUtf8("SureModifyWord"));
        QSizePolicy sizePolicy6(QSizePolicy::Ignored, QSizePolicy::MinimumExpanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(SureModifyWord->sizePolicy().hasHeightForWidth());
        SureModifyWord->setSizePolicy(sizePolicy6);
        SureModifyWord->setMaximumSize(QSize(16777215, 40));
        SureModifyWord->setFont(font1);
        SureModifyWord->setFocusPolicy(Qt::NoFocus);
        SureModifyWord->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"background-color: rgb(155, 200, 40);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(SureModifyWord, 3, 3, 1, 1);


        horizontalLayout_3->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(adjusttimewidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy2.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy2);
        groupBox_3->setMinimumSize(QSize(280, 190));
        groupBox_3->setMaximumSize(QSize(320, 190));
        QFont font2;
        font2.setPointSize(20);
        groupBox_3->setFont(font2);
        groupBox_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"color: rgb(255, 0, 0);"));
        SysParSureBtn = new QPushButton(groupBox_3);
        SysParSureBtn->setObjectName(QString::fromUtf8("SysParSureBtn"));
        SysParSureBtn->setGeometry(QRect(200, 130, 75, 31));
        SysParSureBtn->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"background-color: rgb(155, 200, 40);\n"
"font: 21pt \"\351\273\221\344\275\223\";"));
        MachID = new QLineEdit(groupBox_3);
        MachID->setObjectName(QString::fromUtf8("MachID"));
        MachID->setGeometry(QRect(130, 40, 113, 41));
        MachID->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 255, 175);\n"
"font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);\n"
"border-color: rgb(0, 85, 0);"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(13, 50, 81, 21));
        label->setStyleSheet(QString::fromUtf8("border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_3->addWidget(groupBox_3);


        gridLayout_3->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_14 = new QSpacerItem(598, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_14);

        BackToWorkBtn = new QPushButton(adjusttimewidget);
        BackToWorkBtn->setObjectName(QString::fromUtf8("BackToWorkBtn"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(BackToWorkBtn->sizePolicy().hasHeightForWidth());
        BackToWorkBtn->setSizePolicy(sizePolicy7);
        BackToWorkBtn->setMaximumSize(QSize(140, 32));
        BackToWorkBtn->setFocusPolicy(Qt::NoFocus);
        BackToWorkBtn->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"background-color: rgb(155, 200, 40);\n"
"font: 21pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_2->addWidget(BackToWorkBtn);


        gridLayout_3->addLayout(horizontalLayout_2, 2, 0, 1, 1);


        retranslateUi(adjusttimewidget);

        QMetaObject::connectSlotsByName(adjusttimewidget);
    } // setupUi

    void retranslateUi(QWidget *adjusttimewidget)
    {
        adjusttimewidget->setWindowTitle(QApplication::translate("adjusttimewidget", "Form", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("adjusttimewidget", "\347\263\273\347\273\237\346\227\266\351\227\264\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("adjusttimewidget", "\345\271\264", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("adjusttimewidget", "\346\227\266", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("adjusttimewidget", "\346\234\210", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("adjusttimewidget", "\345\210\206", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("adjusttimewidget", "\346\227\245", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("adjusttimewidget", "\347\247\222", 0, QApplication::UnicodeUTF8));
        ModifyTime->setText(QApplication::translate("adjusttimewidget", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("adjusttimewidget", "\347\263\273\347\273\237\345\257\206\347\240\201\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("adjusttimewidget", "\346\227\247\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        GetWord->setText(QApplication::translate("adjusttimewidget", "\346\217\220 \345\217\226", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("adjusttimewidget", "\346\226\260\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("adjusttimewidget", "\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        SureModifyWord->setText(QApplication::translate("adjusttimewidget", "\346\217\220 \344\272\244", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("adjusttimewidget", " \347\263\273\347\273\237\345\217\202\346\225\260", 0, QApplication::UnicodeUTF8));
        SysParSureBtn->setText(QApplication::translate("adjusttimewidget", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("adjusttimewidget", "\346\234\254\346\234\272ID", 0, QApplication::UnicodeUTF8));
        BackToWorkBtn->setText(QApplication::translate("adjusttimewidget", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class adjusttimewidget: public Ui_adjusttimewidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADJUSTTIMEWIDGET_H
