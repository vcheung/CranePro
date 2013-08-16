/********************************************************************************
** Form generated from reading UI file 'instr_safeguard.ui'
**
** Created: Mon Dec 31 15:20:21 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTR_SAFEGUARD_H
#define UI_INSTR_SAFEGUARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Instr_Safeguard
{
public:
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_17;
    QLabel *label;
    QWidget *tab_2;
    QGridLayout *gridLayout_16;
    QLabel *label_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_15;
    QLabel *label_3;
    QWidget *tab_4;
    QGridLayout *gridLayout_14;
    QLabel *label_4;
    QWidget *tab_5;
    QGridLayout *gridLayout_13;
    QLabel *label_5;
    QWidget *tab_6;
    QGridLayout *gridLayout_12;
    QLabel *label_6;
    QWidget *tab_7;
    QGridLayout *gridLayout_11;
    QLabel *label_7;
    QWidget *tab_8;
    QGridLayout *gridLayout_10;
    QLabel *label_8;
    QWidget *tab_9;
    QGridLayout *gridLayout_9;
    QLabel *label_9;
    QWidget *tab_10;
    QGridLayout *gridLayout_8;
    QLabel *label_10;
    QWidget *tab_11;
    QGridLayout *gridLayout_7;
    QLabel *label_11;
    QWidget *tab_12;
    QGridLayout *gridLayout_6;
    QLabel *label_12;
    QWidget *tab_13;
    QGridLayout *gridLayout_5;
    QLabel *label_13;
    QWidget *tab_14;
    QGridLayout *gridLayout_4;
    QLabel *label_14;
    QWidget *tab_15;
    QWidget *tab_16;
    QGridLayout *gridLayout_2;
    QLabel *label_16;
    QWidget *tab_17;
    QGridLayout *gridLayout;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *BackToWorkBtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Instr_Safeguard)
    {
        if (Instr_Safeguard->objectName().isEmpty())
            Instr_Safeguard->setObjectName(QString::fromUtf8("Instr_Safeguard"));
        Instr_Safeguard->resize(818, 480);
        gridLayout_3 = new QGridLayout(Instr_Safeguard);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tabWidget = new QTabWidget(Instr_Safeguard);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(800, 0));
        tabWidget->setMaximumSize(QSize(800, 400));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(30, 30));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_17 = new QGridLayout(tab);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);\n"
"image: url(:/images/newpictures/sch1.PNG);"));

        gridLayout_17->addWidget(label, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tab_2->sizePolicy().hasHeightForWidth());
        tab_2->setSizePolicy(sizePolicy);
        gridLayout_16 = new QGridLayout(tab_2);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-color:rgb(85, 255, 255);\n"
"image: url(:/images/newpictures/sch2.PNG);"));

        gridLayout_16->addWidget(label_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_15 = new QGridLayout(tab_3);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-color:rgb(85, 255, 255);\n"
"image: url(:/images/newpictures/sch3.PNG);"));

        gridLayout_15->addWidget(label_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_14 = new QGridLayout(tab_4);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background-color:rgb(85, 255, 255);\n"
"image: url(:/images/newpictures/sch4.PNG);"));

        gridLayout_14->addWidget(label_4, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_13 = new QGridLayout(tab_5);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        label_5 = new QLabel(tab_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("background-color:rgb(85, 255, 255);\n"
"image: url(:/images/newpictures/sch5.PNG);"));

        gridLayout_13->addWidget(label_5, 0, 0, 1, 1);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        gridLayout_12 = new QGridLayout(tab_6);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        label_6 = new QLabel(tab_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("background-color:rgb(85, 255, 255);\n"
"image: url(:/images/newpictures/sch6.PNG);"));

        gridLayout_12->addWidget(label_6, 0, 0, 1, 1);

        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        gridLayout_11 = new QGridLayout(tab_7);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_7 = new QLabel(tab_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("background-color:rgb(85, 255, 255);\n"
"image: url(:/images/newpictures/sch7.PNG);"));

        gridLayout_11->addWidget(label_7, 0, 0, 1, 1);

        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        gridLayout_10 = new QGridLayout(tab_8);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_8 = new QLabel(tab_8);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(700, 500));
        label_8->setStyleSheet(QString::fromUtf8("background-color:rgb(85, 255, 255);\n"
"image: url(:/images/newpictures/sch8.PNG);"));

        gridLayout_10->addWidget(label_8, 0, 0, 1, 1);

        tabWidget->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        gridLayout_9 = new QGridLayout(tab_9);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_9 = new QLabel(tab_9);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("background-color:rgb(85, 255, 255);\n"
"image: url(:/images/newpictures/sch9.PNG);"));

        gridLayout_9->addWidget(label_9, 0, 0, 1, 1);

        tabWidget->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        gridLayout_8 = new QGridLayout(tab_10);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_10 = new QLabel(tab_10);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("background-color:rgb(85, 255, 255);\n"
"image: url(:/images/newpictures/sch10.PNG);"));

        gridLayout_8->addWidget(label_10, 0, 0, 1, 1);

        tabWidget->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QString::fromUtf8("tab_11"));
        gridLayout_7 = new QGridLayout(tab_11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_11 = new QLabel(tab_11);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("background-color:rgb(85, 255, 255);\n"
"image: url(:/images/newpictures/sch11.PNG);"));

        gridLayout_7->addWidget(label_11, 0, 0, 1, 1);

        tabWidget->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QString::fromUtf8("tab_12"));
        gridLayout_6 = new QGridLayout(tab_12);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_12 = new QLabel(tab_12);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setStyleSheet(QString::fromUtf8("background-color:rgb(85, 255, 255);\n"
"image: url(:/images/newpictures/sch12.PNG);"));

        gridLayout_6->addWidget(label_12, 0, 0, 1, 1);

        tabWidget->addTab(tab_12, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QString::fromUtf8("tab_13"));
        gridLayout_5 = new QGridLayout(tab_13);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_13 = new QLabel(tab_13);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setStyleSheet(QString::fromUtf8("background-color:rgb(85, 255, 255);\n"
"image: url(:/images/newpictures/sch13.PNG);"));

        gridLayout_5->addWidget(label_13, 0, 0, 1, 1);

        tabWidget->addTab(tab_13, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QString::fromUtf8("tab_14"));
        gridLayout_4 = new QGridLayout(tab_14);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_14 = new QLabel(tab_14);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setStyleSheet(QString::fromUtf8("background-color:rgb(85, 255, 255);\n"
"image: url(:/images/newpictures/sch14.PNG);"));

        gridLayout_4->addWidget(label_14, 0, 0, 1, 1);

        tabWidget->addTab(tab_14, QString());
        tab_15 = new QWidget();
        tab_15->setObjectName(QString::fromUtf8("tab_15"));
        tabWidget->addTab(tab_15, QString());
        tab_16 = new QWidget();
        tab_16->setObjectName(QString::fromUtf8("tab_16"));
        gridLayout_2 = new QGridLayout(tab_16);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_16 = new QLabel(tab_16);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setStyleSheet(QString::fromUtf8("background-color:rgb(85, 255, 255);\n"
"image: url(:/images/newpictures/sch16.PNG);"));

        gridLayout_2->addWidget(label_16, 0, 0, 1, 1);

        tabWidget->addTab(tab_16, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_16), QString::fromUtf8("16"));
        tab_17 = new QWidget();
        tab_17->setObjectName(QString::fromUtf8("tab_17"));
        gridLayout = new QGridLayout(tab_17);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_17 = new QLabel(tab_17);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(700, 500));
        label_17->setMaximumSize(QSize(700, 500));
        label_17->setStyleSheet(QString::fromUtf8("background-color:rgb(85, 255, 255);\n"
"image: url(:/images/newpictures/sch17.PNG);"));

        gridLayout->addWidget(label_17, 0, 0, 1, 1);

        tabWidget->addTab(tab_17, QString());

        gridLayout_3->addWidget(tabWidget, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        BackToWorkBtn = new QPushButton(Instr_Safeguard);
        BackToWorkBtn->setObjectName(QString::fromUtf8("BackToWorkBtn"));
        BackToWorkBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 255);\n"
"font: 18pt \"\351\273\221\344\275\223\";"));

        horizontalLayout->addWidget(BackToWorkBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(Instr_Safeguard);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Instr_Safeguard);
    } // setupUi

    void retranslateUi(QWidget *Instr_Safeguard)
    {
        Instr_Safeguard->setWindowTitle(QApplication::translate("Instr_Safeguard", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Instr_Safeguard", " 1", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Instr_Safeguard", " 2", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Instr_Safeguard", " 3", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Instr_Safeguard", " 4", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Instr_Safeguard", " 5", 0, QApplication::UnicodeUTF8));
        label_6->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("Instr_Safeguard", " 6", 0, QApplication::UnicodeUTF8));
        label_7->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("Instr_Safeguard", " 7", 0, QApplication::UnicodeUTF8));
        label_8->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("Instr_Safeguard", " 8", 0, QApplication::UnicodeUTF8));
        label_9->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("Instr_Safeguard", " 9", 0, QApplication::UnicodeUTF8));
        label_10->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QApplication::translate("Instr_Safeguard", " 10", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_11), QApplication::translate("Instr_Safeguard", "11", 0, QApplication::UnicodeUTF8));
        label_12->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_12), QApplication::translate("Instr_Safeguard", "12", 0, QApplication::UnicodeUTF8));
        label_13->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_13), QApplication::translate("Instr_Safeguard", "13", 0, QApplication::UnicodeUTF8));
        label_14->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_14), QApplication::translate("Instr_Safeguard", "14", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_15), QApplication::translate("Instr_Safeguard", "15", 0, QApplication::UnicodeUTF8));
        label_16->setText(QString());
        label_17->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_17), QApplication::translate("Instr_Safeguard", "17", 0, QApplication::UnicodeUTF8));
        BackToWorkBtn->setText(QApplication::translate("Instr_Safeguard", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Instr_Safeguard: public Ui_Instr_Safeguard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTR_SAFEGUARD_H
