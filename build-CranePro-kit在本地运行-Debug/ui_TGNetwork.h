/********************************************************************************
** Form generated from reading UI file 'TGNetwork.ui'
**
** Created: Tue Aug 20 14:49:59 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TGNETWORK_H
#define UI_TGNETWORK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TGNetwork
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *IPIput;
    QPushButton *NetBtn;
    QLineEdit *PortIput;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *SendTestDataBtn;
    QLineEdit *SendTestData;
    QLabel *testLab;
    QPushButton *NetBtn_2;
    QLabel *NetState;

    void setupUi(QWidget *TGNetwork)
    {
        if (TGNetwork->objectName().isEmpty())
            TGNetwork->setObjectName(QString::fromUtf8("TGNetwork"));
        TGNetwork->resize(800, 480);
        TGNetwork->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 127);"));
        groupBox = new QGroupBox(TGNetwork);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 10, 451, 131));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 81, 31));
        label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\346\245\267\344\275\223\";"));
        IPIput = new QLineEdit(groupBox);
        IPIput->setObjectName(QString::fromUtf8("IPIput"));
        IPIput->setGeometry(QRect(130, 30, 191, 41));
        IPIput->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        NetBtn = new QPushButton(groupBox);
        NetBtn->setObjectName(QString::fromUtf8("NetBtn"));
        NetBtn->setGeometry(QRect(340, 50, 91, 41));
        NetBtn->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\346\245\267\344\275\223\";\n"
"background-color: rgb(85, 170, 255);"));
        PortIput = new QLineEdit(groupBox);
        PortIput->setObjectName(QString::fromUtf8("PortIput"));
        PortIput->setGeometry(QRect(130, 80, 191, 41));
        PortIput->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 80, 81, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\346\245\267\344\275\223\";"));
        groupBox_2 = new QGroupBox(TGNetwork);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 170, 631, 171));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 90, 81, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\346\245\267\344\275\223\";"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 30, 81, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\346\245\267\344\275\223\";"));
        SendTestDataBtn = new QPushButton(groupBox_2);
        SendTestDataBtn->setObjectName(QString::fromUtf8("SendTestDataBtn"));
        SendTestDataBtn->setGeometry(QRect(340, 30, 91, 41));
        SendTestDataBtn->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\346\245\267\344\275\223\";background-color: rgb(85, 170, 255);"));
        SendTestData = new QLineEdit(groupBox_2);
        SendTestData->setObjectName(QString::fromUtf8("SendTestData"));
        SendTestData->setGeometry(QRect(110, 30, 191, 41));
        SendTestData->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        testLab = new QLabel(groupBox_2);
        testLab->setObjectName(QString::fromUtf8("testLab"));
        testLab->setGeometry(QRect(110, 80, 501, 81));
        testLab->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        testLab->setFrameShape(QFrame::WinPanel);
        NetBtn_2 = new QPushButton(TGNetwork);
        NetBtn_2->setObjectName(QString::fromUtf8("NetBtn_2"));
        NetBtn_2->setGeometry(QRect(660, 380, 91, 41));
        NetBtn_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\346\245\267\344\275\223\";background-color: rgb(85, 170, 255);"));
        NetState = new QLabel(TGNetwork);
        NetState->setObjectName(QString::fromUtf8("NetState"));
        NetState->setGeometry(QRect(550, 30, 111, 81));
        NetState->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);\n"
"font: 18pt \"\345\256\213\344\275\223\";"));

        retranslateUi(TGNetwork);

        QMetaObject::connectSlotsByName(TGNetwork);
    } // setupUi

    void retranslateUi(QWidget *TGNetwork)
    {
        TGNetwork->setWindowTitle(QApplication::translate("TGNetwork", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("TGNetwork", "\347\275\221\347\273\234\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TGNetwork", "\346\234\215\345\212\241\345\231\250IP", 0, QApplication::UnicodeUTF8));
        IPIput->setText(QApplication::translate("TGNetwork", "127.0.0.1", 0, QApplication::UnicodeUTF8));
        NetBtn->setText(QApplication::translate("TGNetwork", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        PortIput->setText(QApplication::translate("TGNetwork", "10000", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TGNetwork", "\347\253\257   \345\217\243", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("TGNetwork", "\347\275\221\347\273\234\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("TGNetwork", "\346\216\245\346\224\266\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("TGNetwork", "\345\217\221\351\200\201\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        SendTestDataBtn->setText(QApplication::translate("TGNetwork", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        SendTestData->setText(QApplication::translate("TGNetwork", "Hello 3G", 0, QApplication::UnicodeUTF8));
        testLab->setText(QString());
        NetBtn_2->setText(QApplication::translate("TGNetwork", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        NetState->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TGNetwork: public Ui_TGNetwork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TGNETWORK_H
