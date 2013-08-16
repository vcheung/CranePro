/********************************************************************************
** Form generated from reading UI file 'secretinput.ui'
**
** Created: Thu Apr 25 18:05:10 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECRETINPUT_H
#define UI_SECRETINPUT_H

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

class Ui_Secretinput
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer;
    QLineEdit *inputLine;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *SecretSureBtn;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *SecretQuitBtn;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *Secretinput)
    {
        if (Secretinput->objectName().isEmpty())
            Secretinput->setObjectName(QString::fromUtf8("Secretinput"));
        Secretinput->resize(800, 480);
        gridLayout_2 = new QGridLayout(Secretinput);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(Secretinput);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer_6, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        inputLine = new QLineEdit(groupBox);
        inputLine->setObjectName(QString::fromUtf8("inputLine"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(inputLine->sizePolicy().hasHeightForWidth());
        inputLine->setSizePolicy(sizePolicy1);
        inputLine->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 85, 0);\n"
"background-color: rgb(250, 255, 175);\n"
"font: 24pt \"\351\273\221\344\275\223\";"));
        inputLine->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(inputLine, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 255, 155);\n"
"border-color: rgb(170, 255, 255);\n"
"color: rgb(255, 0, 0);\n"
"font: 28pt \"\351\273\221\344\275\223\";"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_3, 0, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_7, 5, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_4, 7, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        SecretSureBtn = new QPushButton(groupBox);
        SecretSureBtn->setObjectName(QString::fromUtf8("SecretSureBtn"));
        sizePolicy.setHeightForWidth(SecretSureBtn->sizePolicy().hasHeightForWidth());
        SecretSureBtn->setSizePolicy(sizePolicy);
        SecretSureBtn->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 127);\n"
"font: 26pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(155, 200, 40);\n"
"border-color: rgb(85, 170, 0);"));

        horizontalLayout_2->addWidget(SecretSureBtn);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        SecretQuitBtn = new QPushButton(groupBox);
        SecretQuitBtn->setObjectName(QString::fromUtf8("SecretQuitBtn"));
        sizePolicy.setHeightForWidth(SecretQuitBtn->sizePolicy().hasHeightForWidth());
        SecretQuitBtn->setSizePolicy(sizePolicy);
        SecretQuitBtn->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 127);\n"
"font: 26pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(155, 200, 40);\n"
"border-color: rgb(85, 170, 0);"));

        horizontalLayout_2->addWidget(SecretQuitBtn);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_2, 5, 0, 2, 3);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(Secretinput);

        QMetaObject::connectSlotsByName(Secretinput);
    } // setupUi

    void retranslateUi(QWidget *Secretinput)
    {
        Secretinput->setWindowTitle(QApplication::translate("Secretinput", "Form", 0, QApplication::UnicodeUTF8));
        inputLine->setText(QString());
        label->setText(QApplication::translate("Secretinput", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        SecretSureBtn->setText(QApplication::translate("Secretinput", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        SecretQuitBtn->setText(QApplication::translate("Secretinput", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Secretinput: public Ui_Secretinput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECRETINPUT_H
