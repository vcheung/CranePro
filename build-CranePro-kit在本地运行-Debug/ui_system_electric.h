/********************************************************************************
** Form generated from reading UI file 'system_electric.ui'
**
** Created: Tue Aug 20 14:49:58 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEM_ELECTRIC_H
#define UI_SYSTEM_ELECTRIC_H

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

class Ui_System_electric
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_41;
    QSpacerItem *horizontalSpacer_7;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_12;
    QLabel *SupportEnergyLab;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_15;
    QLabel *OnOffEnergyLab;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_29;
    QLabel *SumEnergyLab;
    QLabel *label_30;
    QSpacerItem *horizontalSpacer_19;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_52;
    QSpacerItem *horizontalSpacer_8;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_45;
    QLabel *EffectiveNumLab;
    QLabel *label_46;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_47;
    QLineEdit *ZeroPoint;
    QLabel *label_49;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_50;
    QLineEdit *CoefficientModify;
    QLabel *label_51;
    QSpacerItem *horizontalSpacer_18;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *sureBtn;
    QSpacerItem *horizontalSpacer_21;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *BackToWorkBtn;

    void setupUi(QWidget *System_electric)
    {
        if (System_electric->objectName().isEmpty())
            System_electric->setObjectName(QString::fromUtf8("System_electric"));
        System_electric->resize(800, 501);
        gridLayout_2 = new QGridLayout(System_electric);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_4 = new QGroupBox(System_electric);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setMaximumSize(QSize(16777215, 60));
        groupBox_4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_41 = new QLabel(groupBox_4);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setStyleSheet(QString::fromUtf8("font: 75 26pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(170, 255, 255);\n"
"color: rgb(255, 0, 0);"));

        horizontalLayout_3->addWidget(label_41);

        horizontalSpacer_7 = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        gridLayout_2->addWidget(groupBox_4, 0, 0, 1, 1);

        groupBox = new QGroupBox(System_electric);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMaximumSize(QSize(16777215, 140));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_9 = new QSpacerItem(53, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);\n"
"background-color: rgb(184, 184, 255);"));

        gridLayout->addWidget(label_12, 0, 1, 1, 1);

        SupportEnergyLab = new QLabel(groupBox);
        SupportEnergyLab->setObjectName(QString::fromUtf8("SupportEnergyLab"));
        SupportEnergyLab->setMinimumSize(QSize(80, 0));
        SupportEnergyLab->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);"));

        gridLayout->addWidget(SupportEnergyLab, 0, 2, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);"));

        gridLayout->addWidget(label_13, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(54, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(53, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 0, 5, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(53, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_11, 1, 0, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);\n"
"background-color: rgb(184, 184, 255);"));

        gridLayout->addWidget(label_15, 1, 1, 1, 1);

        OnOffEnergyLab = new QLabel(groupBox);
        OnOffEnergyLab->setObjectName(QString::fromUtf8("OnOffEnergyLab"));
        OnOffEnergyLab->setMinimumSize(QSize(80, 0));
        OnOffEnergyLab->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);"));

        gridLayout->addWidget(OnOffEnergyLab, 1, 2, 1, 1);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);"));

        gridLayout->addWidget(label_16, 1, 3, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_17, 1, 4, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(53, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_12, 2, 0, 1, 1);

        label_29 = new QLabel(groupBox);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);\n"
"background-color: rgb(184, 184, 255);"));
        label_29->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_29, 2, 1, 1, 1);

        SumEnergyLab = new QLabel(groupBox);
        SumEnergyLab->setObjectName(QString::fromUtf8("SumEnergyLab"));
        SumEnergyLab->setMinimumSize(QSize(80, 0));
        SumEnergyLab->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);"));

        gridLayout->addWidget(SumEnergyLab, 2, 2, 1, 1);

        label_30 = new QLabel(groupBox);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);"));

        gridLayout->addWidget(label_30, 2, 3, 1, 1);

        horizontalSpacer_19 = new QSpacerItem(173, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_19, 2, 4, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_6 = new QGroupBox(System_electric);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        label_52 = new QLabel(groupBox_6);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setStyleSheet(QString::fromUtf8("font: 75 26pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(170, 255, 255);\n"
"color: rgb(255, 0, 0);"));

        horizontalLayout_5->addWidget(label_52);

        horizontalSpacer_8 = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        gridLayout_2->addWidget(groupBox_6, 2, 0, 1, 1);

        groupBox_5 = new QGroupBox(System_electric);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy1);
        groupBox_5->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"border-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);"));
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        label_45 = new QLabel(groupBox_5);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);\n"
"background-color: rgb(184, 184, 255);"));

        gridLayout_6->addWidget(label_45, 0, 1, 1, 1);

        EffectiveNumLab = new QLabel(groupBox_5);
        EffectiveNumLab->setObjectName(QString::fromUtf8("EffectiveNumLab"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(EffectiveNumLab->sizePolicy().hasHeightForWidth());
        EffectiveNumLab->setSizePolicy(sizePolicy2);
        EffectiveNumLab->setMinimumSize(QSize(180, 0));
        EffectiveNumLab->setMaximumSize(QSize(180, 16777215));
        EffectiveNumLab->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"border-color: rgb(255, 255, 255);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_6->addWidget(EffectiveNumLab, 0, 2, 1, 1);

        label_46 = new QLabel(groupBox_5);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_6->addWidget(label_46, 0, 3, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_15, 0, 4, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_13, 1, 0, 1, 1);

        label_47 = new QLabel(groupBox_5);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);\n"
"background-color: rgb(184, 184, 255);"));

        gridLayout_6->addWidget(label_47, 1, 1, 1, 1);

        ZeroPoint = new QLineEdit(groupBox_5);
        ZeroPoint->setObjectName(QString::fromUtf8("ZeroPoint"));
        ZeroPoint->setMaximumSize(QSize(180, 16777215));
        ZeroPoint->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(250, 255, 175);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_6->addWidget(ZeroPoint, 1, 2, 1, 1);

        label_49 = new QLabel(groupBox_5);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_6->addWidget(label_49, 1, 3, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_16, 1, 4, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_14, 2, 0, 1, 1);

        label_50 = new QLabel(groupBox_5);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 125);\n"
"background-color: rgb(184, 184, 255);"));

        gridLayout_6->addWidget(label_50, 2, 1, 1, 1);

        CoefficientModify = new QLineEdit(groupBox_5);
        CoefficientModify->setObjectName(QString::fromUtf8("CoefficientModify"));
        CoefficientModify->setMaximumSize(QSize(180, 16777215));
        CoefficientModify->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"background-color: rgb(250, 255, 175);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_6->addWidget(CoefficientModify, 2, 2, 1, 1);

        label_51 = new QLabel(groupBox_5);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 125);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));

        gridLayout_6->addWidget(label_51, 2, 3, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_18, 2, 4, 1, 1);


        gridLayout_2->addWidget(groupBox_5, 3, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_20 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_20);

        sureBtn = new QPushButton(System_electric);
        sureBtn->setObjectName(QString::fromUtf8("sureBtn"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sureBtn->sizePolicy().hasHeightForWidth());
        sureBtn->setSizePolicy(sizePolicy3);
        sureBtn->setMinimumSize(QSize(60, 0));
        sureBtn->setMaximumSize(QSize(80, 16777215));
        sureBtn->setStyleSheet(QString::fromUtf8("font: 75 22pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 255);\n"
"background-color: rgb(155, 200, 40);"));

        horizontalLayout_6->addWidget(sureBtn);

        horizontalSpacer_21 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_21);


        gridLayout_2->addLayout(horizontalLayout_6, 4, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        horizontalSpacer_6 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        BackToWorkBtn = new QPushButton(System_electric);
        BackToWorkBtn->setObjectName(QString::fromUtf8("BackToWorkBtn"));
        sizePolicy3.setHeightForWidth(BackToWorkBtn->sizePolicy().hasHeightForWidth());
        BackToWorkBtn->setSizePolicy(sizePolicy3);
        BackToWorkBtn->setMinimumSize(QSize(60, 0));
        BackToWorkBtn->setMaximumSize(QSize(100, 80));
        BackToWorkBtn->setStyleSheet(QString::fromUtf8("font: 75 22pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 255);\n"
"background-color: rgb(155, 200, 40);"));

        horizontalLayout_4->addWidget(BackToWorkBtn);


        gridLayout_2->addLayout(horizontalLayout_4, 5, 0, 1, 1);


        retranslateUi(System_electric);

        QMetaObject::connectSlotsByName(System_electric);
    } // setupUi

    void retranslateUi(QWidget *System_electric)
    {
        System_electric->setWindowTitle(QApplication::translate("System_electric", "Form", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("System_electric", "\347\263\273\347\273\237\347\224\265\351\207\217\351\207\207\351\233\206\345\217\202\346\225\260", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("System_electric", "\346\224\257\346\214\201\350\203\275\350\200\227", 0, QApplication::UnicodeUTF8));
        SupportEnergyLab->setText(QString());
        label_13->setText(QApplication::translate("System_electric", "W", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("System_electric", "\345\274\200\351\227\255\350\203\275\350\200\227", 0, QApplication::UnicodeUTF8));
        OnOffEnergyLab->setText(QString());
        label_16->setText(QApplication::translate("System_electric", "W", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("System_electric", "\346\200\273\350\203\275\350\200\227", 0, QApplication::UnicodeUTF8));
        SumEnergyLab->setText(QString());
        label_30->setText(QApplication::translate("System_electric", "W", 0, QApplication::UnicodeUTF8));
        label_52->setText(QApplication::translate("System_electric", "\347\263\273\347\273\237\347\224\265\351\207\217\350\256\241\347\256\227\345\217\202\346\225\260", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("System_electric", "\346\234\211\346\225\210\344\270\252\346\225\260", 0, QApplication::UnicodeUTF8));
        EffectiveNumLab->setText(QString());
        label_46->setText(QApplication::translate("System_electric", "\344\270\252", 0, QApplication::UnicodeUTF8));
        label_47->setText(QApplication::translate("System_electric", "\351\233\266\347\202\271\345\201\217\347\246\273", 0, QApplication::UnicodeUTF8));
        label_49->setText(QApplication::translate("System_electric", "\345\220\250", 0, QApplication::UnicodeUTF8));
        label_50->setText(QApplication::translate("System_electric", "\347\263\273\346\225\260\344\277\256\346\255\243", 0, QApplication::UnicodeUTF8));
        label_51->setText(QApplication::translate("System_electric", "%", 0, QApplication::UnicodeUTF8));
        sureBtn->setText(QApplication::translate("System_electric", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        BackToWorkBtn->setText(QApplication::translate("System_electric", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class System_electric: public Ui_System_electric {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEM_ELECTRIC_H
