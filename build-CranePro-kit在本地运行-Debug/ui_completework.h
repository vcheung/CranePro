/********************************************************************************
** Form generated from reading UI file 'completework.ui'
**
** Created: Tue Aug 20 14:49:58 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPLETEWORK_H
#define UI_COMPLETEWORK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CompleteWork
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_5;
    QLabel *label;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *SureBtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *BackToWorkBtn_Co;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_8;

    void setupUi(QWidget *CompleteWork)
    {
        if (CompleteWork->objectName().isEmpty())
            CompleteWork->setObjectName(QString::fromUtf8("CompleteWork"));
        CompleteWork->resize(800, 480);
        gridLayout = new QGridLayout(CompleteWork);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(CompleteWork);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"border-color: rgb(170, 255, 255);"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_5);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("border-color: rgb(170, 255, 255);\n"
"color: rgb(255, 0, 0);\n"
"background-color: rgb(170, 255, 255);\n"
"font: 75 38pt \"\351\273\221\344\275\223\";"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_6);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 85, 0);\n"
"font: 75 25pt \"\346\245\267\344\275\223_GB2312\";"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 85, 0);\n"
"font: 75 25pt \"\346\245\267\344\275\223_GB2312\";"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 85, 0);\n"
"font: 75 25pt \"\346\245\267\344\275\223_GB2312\";"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        verticalSpacer_9 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        horizontalLayout->addItem(verticalSpacer_7);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        SureBtn = new QPushButton(groupBox);
        SureBtn->setObjectName(QString::fromUtf8("SureBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SureBtn->sizePolicy().hasHeightForWidth());
        SureBtn->setSizePolicy(sizePolicy1);
        SureBtn->setFocusPolicy(Qt::NoFocus);
        SureBtn->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"background-color: rgb(155, 200, 40);\n"
"font: 28pt \"\351\273\221\344\275\223\";"));

        horizontalLayout->addWidget(SureBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        BackToWorkBtn_Co = new QPushButton(groupBox);
        BackToWorkBtn_Co->setObjectName(QString::fromUtf8("BackToWorkBtn_Co"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(BackToWorkBtn_Co->sizePolicy().hasHeightForWidth());
        BackToWorkBtn_Co->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(28);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        BackToWorkBtn_Co->setFont(font);
        BackToWorkBtn_Co->setFocusPolicy(Qt::NoFocus);
        BackToWorkBtn_Co->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"background-color: rgb(155, 200, 40);\n"
"font: 28pt \"\351\273\221\344\275\223\";"));

        horizontalLayout->addWidget(BackToWorkBtn_Co);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalSpacer_8 = new QSpacerItem(668, 42, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_8);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(CompleteWork);

        QMetaObject::connectSlotsByName(CompleteWork);
    } // setupUi

    void retranslateUi(QWidget *CompleteWork)
    {
        CompleteWork->setWindowTitle(QApplication::translate("CompleteWork", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CompleteWork", "\345\267\245\347\217\255\346\210\226\350\210\271\347\273\223\346\235\237\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CompleteWork", "\346\230\257\345\220\246\346\234\254\345\267\245\347\217\255\346\210\226\350\210\271\344\275\234\344\270\232\345\267\262\347\273\217\347\273\223\346\235\237?", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CompleteWork", "\347\273\223\346\235\237\350\257\267\346\214\211\342\200\234\347\241\256\345\256\232\342\200\235\357\274\214\346\234\254\345\267\245\347\217\255\347\232\204\344\275\234\344\270\232\344\277\241\346\201\257\345\260\206\350\242\253\345\210\240\351\231\244\357\274\233", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CompleteWork", "\345\246\202\346\234\252\345\256\214\346\210\220\350\257\267\346\214\211\342\200\234\350\277\224\345\233\236\342\200\235\347\273\247\347\273\255\344\275\234\344\270\232\357\274\201", 0, QApplication::UnicodeUTF8));
        SureBtn->setText(QApplication::translate("CompleteWork", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        BackToWorkBtn_Co->setText(QApplication::translate("CompleteWork", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CompleteWork: public Ui_CompleteWork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPLETEWORK_H
