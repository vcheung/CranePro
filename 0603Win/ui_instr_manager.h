/********************************************************************************
** Form generated from reading UI file 'instr_manager.ui'
**
** Created: Mon Dec 31 15:20:21 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTR_MANAGER_H
#define UI_INSTR_MANAGER_H

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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Instr_Manager
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *BackToWorkBtn;

    void setupUi(QWidget *Instr_Manager)
    {
        if (Instr_Manager->objectName().isEmpty())
            Instr_Manager->setObjectName(QString::fromUtf8("Instr_Manager"));
        Instr_Manager->resize(800, 484);
        gridLayout = new QGridLayout(Instr_Manager);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Instr_Manager);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(false);
        label->setMinimumSize(QSize(0, 50));
        label->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(24);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 24pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(85, 170, 255);\n"
"color: rgb(255, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_2 = new QLabel(Instr_Manager);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(430, 350));
        label_2->setMaximumSize(QSize(430, 350));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/caidan.png);\n"
"background-color: rgb(195, 165, 255);"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        BackToWorkBtn = new QPushButton(Instr_Manager);
        BackToWorkBtn->setObjectName(QString::fromUtf8("BackToWorkBtn"));
        BackToWorkBtn->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BackToWorkBtn->sizePolicy().hasHeightForWidth());
        BackToWorkBtn->setSizePolicy(sizePolicy1);
        BackToWorkBtn->setMinimumSize(QSize(200, 50));
        BackToWorkBtn->setMaximumSize(QSize(200, 16777215));
        BackToWorkBtn->setFocusPolicy(Qt::NoFocus);
        BackToWorkBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(155, 200, 40);\n"
"color: rgb(0, 0, 255);\n"
"font: 22pt \"\351\273\221\344\275\223\";"));

        horizontalLayout->addWidget(BackToWorkBtn);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(Instr_Manager);

        QMetaObject::connectSlotsByName(Instr_Manager);
    } // setupUi

    void retranslateUi(QWidget *Instr_Manager)
    {
        Instr_Manager->setWindowTitle(QApplication::translate("Instr_Manager", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Instr_Manager", "\345\267\245\344\275\234\347\225\214\351\235\242\344\270\255\342\200\234\346\211\223\345\274\200\350\217\234\345\215\225\342\200\235\351\200\211\346\213\251\347\233\270\345\272\224\347\232\204\351\200\211\351\241\271\350\256\276\347\275\256\345\217\202\346\225\260", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        BackToWorkBtn->setText(QApplication::translate("Instr_Manager", "\351\200\200 \345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Instr_Manager: public Ui_Instr_Manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTR_MANAGER_H
