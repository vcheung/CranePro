/********************************************************************************
** Form generated from reading UI file 'instr_driver.ui'
**
** Created: Mon Dec 31 15:20:21 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTR_DRIVER_H
#define UI_INSTR_DRIVER_H

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
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Instr_Driver
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QLabel *label_11;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_10;
    QLabel *label_9;
    QTextBrowser *textBrowser;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *BackToWorkBtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Instr_Driver)
    {
        if (Instr_Driver->objectName().isEmpty())
            Instr_Driver->setObjectName(QString::fromUtf8("Instr_Driver"));
        Instr_Driver->resize(824, 480);
        gridLayout = new QGridLayout(Instr_Driver);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(Instr_Driver);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMaximumSize(QSize(806, 16777215));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setStyleSheet(QString::fromUtf8("font: 75 22pt \"\351\273\221\344\275\223\";\n"
"\n"
""));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(40, 16));
        tabWidget->setElideMode(Qt::ElideNone);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(false);
        label->setMinimumSize(QSize(0, 30));
        label->setMaximumSize(QSize(16777215, 30));
        label->setStyleSheet(QString::fromUtf8("font: 18pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 0, 0);\n"
"background-color: rgb(85, 170, 255);"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(false);
        label_2->setMinimumSize(QSize(0, 30));
        label_2->setMaximumSize(QSize(16777215, 30));
        label_2->setStyleSheet(QString::fromUtf8("font: 18pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(85, 170, 255);\n"
"color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(label_2);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(387, 150));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/images/login.png);"));

        horizontalLayout_2->addWidget(label_5);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setEnabled(false);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(387, 150));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/images/paigong.png);"));

        horizontalLayout_2->addWidget(label_6);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(false);
        label_3->setMinimumSize(QSize(0, 30));
        label_3->setMaximumSize(QSize(16777215, 30));
        label_3->setStyleSheet(QString::fromUtf8("font: 18pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 0, 0);\n"
"background-color: rgb(85, 170, 255);"));

        horizontalLayout_3->addWidget(label_3);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setEnabled(false);
        label_4->setMinimumSize(QSize(0, 30));
        label_4->setMaximumSize(QSize(16777215, 30));
        label_4->setStyleSheet(QString::fromUtf8("font: 18pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 0, 0);\n"
"background-color: rgb(85, 170, 255);"));

        horizontalLayout_3->addWidget(label_4);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setEnabled(false);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(387, 150));
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(:/images/work.png);"));

        horizontalLayout_4->addWidget(label_7);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setEnabled(false);
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setMinimumSize(QSize(387, 150));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(:/images/tishi.png);"));

        horizontalLayout_4->addWidget(label_8);


        gridLayout_2->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("border-image: url(:/images/work.png);"));

        gridLayout_4->addWidget(label_11, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalSpacer_4 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_3->addItem(verticalSpacer_4, 0, 1, 1, 1);

        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setMinimumSize(QSize(0, 80));
        label_10->setStyleSheet(QString::fromUtf8("font: 28pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 0, 0);\n"
"background-color: rgb(170, 255, 255);"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_10, 1, 0, 1, 2);

        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setMinimumSize(QSize(0, 50));
        label_9->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"color: rgb(0, 0, 127);\n"
"background-color: rgb(85, 170, 255);"));

        gridLayout_3->addWidget(label_9, 2, 0, 1, 2);

        textBrowser = new QTextBrowser(tab_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setEnabled(false);
        textBrowser->setMinimumSize(QSize(0, 200));
        textBrowser->setMaximumSize(QSize(16777215, 260));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(15);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        textBrowser->setFont(font);
        textBrowser->setFocusPolicy(Qt::NoFocus);
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"color: rgb(0, 0, 127);\n"
"font: 15pt \"\351\273\221\344\275\223\";"));

        gridLayout_3->addWidget(textBrowser, 3, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_3->addItem(verticalSpacer_3, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        BackToWorkBtn = new QPushButton(tab_2);
        BackToWorkBtn->setObjectName(QString::fromUtf8("BackToWorkBtn"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(BackToWorkBtn->sizePolicy().hasHeightForWidth());
        BackToWorkBtn->setSizePolicy(sizePolicy3);
        BackToWorkBtn->setMinimumSize(QSize(160, 0));
        BackToWorkBtn->setMaximumSize(QSize(180, 16777215));
        BackToWorkBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(155, 200, 40);\n"
"color: rgb(0, 0, 255);\n"
"font: 22pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_5->addWidget(BackToWorkBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        gridLayout_3->addLayout(horizontalLayout_5, 5, 0, 1, 2);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(Instr_Driver);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Instr_Driver);
    } // setupUi

    void retranslateUi(QWidget *Instr_Driver)
    {
        Instr_Driver->setWindowTitle(QApplication::translate("Instr_Driver", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Instr_Driver", "\347\254\254\344\270\200\346\255\245\357\274\232\345\274\200\346\234\272\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Instr_Driver", "\347\254\254\344\272\214\346\255\245\357\274\232\346\264\276\345\267\245\344\275\234\344\270\232\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
        label_6->setText(QString());
        label_3->setText(QApplication::translate("Instr_Driver", "\347\254\254\344\270\211\346\255\245\357\274\232\345\267\245\344\275\234\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Instr_Driver", "\346\226\255\347\224\265\351\207\215\345\220\257\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
        label_7->setText(QString());
        label_8->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Instr_Driver", "\347\254\254\344\270\200\351\241\265", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Instr_Driver", "\347\254\254\344\272\214\351\241\265", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Instr_Driver", "\346\214\211\351\222\256\345\212\237\350\203\275\350\257\264\346\230\216", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Instr_Driver", "\345\267\245\350\211\272\357\274\232\344\270\211\347\247\215\345\267\245\350\211\272----(1)\345\215\270\350\210\271\344\275\234\344\270\232(2)\350\243\205\350\210\271\344\275\234\344\270\232(3)\350\210\271\345\210\260\350\210\271\344\275\234\344\270\232", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("Instr_Driver", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\351\273\221\344\275\223'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:16pt; font-weight:600;\">\346\212\245\350\255\246\346\217\220\347\244\272\357\274\232\350\256\276\345\244\207\346\225\205\351\232\234\343\200\202\345\217\270\346\234\272\347\202\271\345\207\273\350\257\245\351\224\256\357\274\214\346\217\220\347\244\272\345\220\216\345\217\260\347\256\241\347\220\206\344\272\272\345\221\230\350\256\276\345\244\207\346\225\205\351\232\234\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0p"
                        "x; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:16pt; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:16pt; font-weight:600;\">\347\247\260\351\207\215\345\257\271\346\257\224\357\274\232\347\247\260\351\207\215\350\260\203\350\257\225\346\227\266\347\202\271\345\207\273\350\257\245\351\224\256\357\274\214\347\263\273\347\273\237\350\207\252\345\212\250\350\256\260\345\275\225\346\234\200\346\226\260\347\232\2045\346\254\241\344\275\234\344\270\232\346\225\260\346\215\256\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:16pt; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" fon"
                        "t-family:'SimSun'; font-size:16pt; font-weight:600;\">\350\207\252\345\212\250\351\231\244\347\232\256\357\274\232\344\275\277\347\224\250\346\212\223\346\226\227\350\243\205\350\264\247\346\227\266\357\274\214\345\217\270\346\234\272\345\274\200\345\220\257\350\257\245\351\224\256\357\274\214\350\207\252\345\212\250\351\231\244\347\232\256\345\212\237\350\203\275\345\274\200\345\220\257\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:16pt; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:16pt; font-weight:600;\">\345\220\212\345\205\267\345\257\271\346\257\224\357\274\232\347\247\260\351\207\217\347\232\256\351\207\215\344\270\216\345\256\236\351\231\205\347\232\256\351\207\215\350\257\257\345\267\256\345\244\247"
                        "\344\272\2163%\346\227\266\357\274\214\346\212\245\350\255\246\345\212\237\350\203\275\345\274\200\345\220\257\343\200\202</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        BackToWorkBtn->setText(QApplication::translate("Instr_Driver", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Instr_Driver", "\347\254\254\344\270\211\351\241\265", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Instr_Driver: public Ui_Instr_Driver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTR_DRIVER_H
