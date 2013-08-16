/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created: Mon Dec 31 15:20:21 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QPushButton *SelectworkBtn;
    QLabel *Timelab;
    QLabel *BreakdownLLab;
    QGroupBox *horizontalGroupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_8;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *InputNum;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *NameLab;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(800, 480);
        Login->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127);"));
        SelectworkBtn = new QPushButton(Login);
        SelectworkBtn->setObjectName(QString::fromUtf8("SelectworkBtn"));
        SelectworkBtn->setGeometry(QRect(310, 350, 181, 41));
        SelectworkBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);\n"
"font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        Timelab = new QLabel(Login);
        Timelab->setObjectName(QString::fromUtf8("Timelab"));
        Timelab->setGeometry(QRect(0, 0, 801, 61));
        Timelab->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 127);\n"
"font: 22pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";"));
        BreakdownLLab = new QLabel(Login);
        BreakdownLLab->setObjectName(QString::fromUtf8("BreakdownLLab"));
        BreakdownLLab->setGeometry(QRect(310, 430, 181, 31));
        BreakdownLLab->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 75 20pt \"\351\273\221\344\275\223\";"));
        horizontalGroupBox = new QGroupBox(Login);
        horizontalGroupBox->setObjectName(QString::fromUtf8("horizontalGroupBox"));
        horizontalGroupBox->setGeometry(QRect(0, 60, 801, 131));
        horizontalGroupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        horizontalLayout = new QHBoxLayout(horizontalGroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(horizontalGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 33pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(label_3);

        label_7 = new QLabel(horizontalGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 33pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(label_7);

        label_5 = new QLabel(horizontalGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 33pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(label_5);

        label_6 = new QLabel(horizontalGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 33pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(label_6);

        label_4 = new QLabel(horizontalGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 33pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(label_4);

        label_8 = new QLabel(horizontalGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("font: 75 33pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(label_8);

        groupBox = new QGroupBox(Login);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 180, 801, 141));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);"));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(170, 20, 122, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(120, 35));
        label->setMaximumSize(QSize(120, 35));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout->addWidget(label);

        InputNum = new QLineEdit(verticalLayoutWidget);
        InputNum->setObjectName(QString::fromUtf8("InputNum"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InputNum->sizePolicy().hasHeightForWidth());
        InputNum->setSizePolicy(sizePolicy);
        InputNum->setMinimumSize(QSize(120, 35));
        InputNum->setMaximumSize(QSize(120, 35));
        InputNum->setLayoutDirection(Qt::LeftToRight);
        InputNum->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(255, 255, 127);"));

        verticalLayout->addWidget(InputNum);

        verticalLayoutWidget_2 = new QWidget(groupBox);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(510, 20, 122, 91));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(120, 35));
        label_2->setMaximumSize(QSize(120, 35));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout_2->addWidget(label_2);

        NameLab = new QLabel(verticalLayoutWidget_2);
        NameLab->setObjectName(QString::fromUtf8("NameLab"));
        NameLab->setMinimumSize(QSize(120, 35));
        NameLab->setMaximumSize(QSize(120, 35));
        NameLab->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 127);"));

        verticalLayout_2->addWidget(NameLab);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Form", 0, QApplication::UnicodeUTF8));
        SelectworkBtn->setText(QApplication::translate("Login", "\351\200\211\346\213\251\346\264\276\345\267\245", 0, QApplication::UnicodeUTF8));
        Timelab->setText(QString());
        BreakdownLLab->setText(QApplication::translate("Login", "\347\224\265\351\207\217\351\207\207\351\233\206\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Login", "\346\257\233\351\207\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Login", "10", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Login", "\345\220\250", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Login", "\345\271\205\345\272\246\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Login", "123", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Login", "\347\261\263", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("Login", " \345\267\245\345\217\267\350\276\223\345\205\245", 0, QApplication::UnicodeUTF8));
        InputNum->setText(QString());
        label_2->setText(QApplication::translate("Login", " \345\217\270\346\234\272\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        NameLab->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
