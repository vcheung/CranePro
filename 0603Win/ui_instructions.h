/********************************************************************************
** Form generated from reading UI file 'instructions.ui'
**
** Created: Mon Dec 31 15:20:21 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCTIONS_H
#define UI_INSTRUCTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Instructions
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *DriverBtn;
    QSpacerItem *verticalSpacer;
    QPushButton *ManagerBtn;
    QSpacerItem *verticalSpacer_2;
    QPushButton *SafeGuardBtn;
    QSpacerItem *verticalSpacer_3;
    QPushButton *BackToWorkBtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Instructions)
    {
        if (Instructions->objectName().isEmpty())
            Instructions->setObjectName(QString::fromUtf8("Instructions"));
        Instructions->resize(800, 480);
        Instructions->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        gridLayout = new QGridLayout(Instructions);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(172, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        groupBox = new QGroupBox(Instructions);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        DriverBtn = new QPushButton(groupBox);
        DriverBtn->setObjectName(QString::fromUtf8("DriverBtn"));
        DriverBtn->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DriverBtn->sizePolicy().hasHeightForWidth());
        DriverBtn->setSizePolicy(sizePolicy);
        DriverBtn->setMinimumSize(QSize(400, 60));
        DriverBtn->setMaximumSize(QSize(400, 16777215));
        DriverBtn->setFocusPolicy(Qt::NoFocus);
        DriverBtn->setStyleSheet(QString::fromUtf8("font: 75 22pt \"\351\273\221\344\275\223\";"));

        verticalLayout->addWidget(DriverBtn);

        verticalSpacer = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        ManagerBtn = new QPushButton(groupBox);
        ManagerBtn->setObjectName(QString::fromUtf8("ManagerBtn"));
        sizePolicy.setHeightForWidth(ManagerBtn->sizePolicy().hasHeightForWidth());
        ManagerBtn->setSizePolicy(sizePolicy);
        ManagerBtn->setMinimumSize(QSize(400, 60));
        ManagerBtn->setMaximumSize(QSize(400, 16777215));
        ManagerBtn->setFocusPolicy(Qt::NoFocus);
        ManagerBtn->setStyleSheet(QString::fromUtf8("font: 75 22pt \"\351\273\221\344\275\223\";"));

        verticalLayout->addWidget(ManagerBtn);

        verticalSpacer_2 = new QSpacerItem(20, 49, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        SafeGuardBtn = new QPushButton(groupBox);
        SafeGuardBtn->setObjectName(QString::fromUtf8("SafeGuardBtn"));
        sizePolicy.setHeightForWidth(SafeGuardBtn->sizePolicy().hasHeightForWidth());
        SafeGuardBtn->setSizePolicy(sizePolicy);
        SafeGuardBtn->setMinimumSize(QSize(400, 60));
        SafeGuardBtn->setMaximumSize(QSize(400, 16777215));
        SafeGuardBtn->setFocusPolicy(Qt::NoFocus);
        SafeGuardBtn->setStyleSheet(QString::fromUtf8("font: 75 22pt \"\351\273\221\344\275\223\";"));

        verticalLayout->addWidget(SafeGuardBtn);

        verticalSpacer_3 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        BackToWorkBtn = new QPushButton(groupBox);
        BackToWorkBtn->setObjectName(QString::fromUtf8("BackToWorkBtn"));
        sizePolicy.setHeightForWidth(BackToWorkBtn->sizePolicy().hasHeightForWidth());
        BackToWorkBtn->setSizePolicy(sizePolicy);
        BackToWorkBtn->setMinimumSize(QSize(400, 60));
        BackToWorkBtn->setMaximumSize(QSize(400, 16777215));
        BackToWorkBtn->setFocusPolicy(Qt::NoFocus);
        BackToWorkBtn->setStyleSheet(QString::fromUtf8("font: 75 22pt \"\351\273\221\344\275\223\";"));

        verticalLayout->addWidget(BackToWorkBtn);


        gridLayout->addWidget(groupBox, 0, 1, 2, 1);

        horizontalSpacer_2 = new QSpacerItem(172, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        retranslateUi(Instructions);

        QMetaObject::connectSlotsByName(Instructions);
    } // setupUi

    void retranslateUi(QWidget *Instructions)
    {
        Instructions->setWindowTitle(QApplication::translate("Instructions", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        DriverBtn->setText(QApplication::translate("Instructions", "\345\217\270\346\234\272\344\275\277\347\224\250\350\257\264\346\230\216", 0, QApplication::UnicodeUTF8));
        ManagerBtn->setText(QApplication::translate("Instructions", "\347\256\241\347\220\206\344\272\272\345\221\230\344\275\277\347\224\250\350\257\264\346\230\216", 0, QApplication::UnicodeUTF8));
        SafeGuardBtn->setText(QApplication::translate("Instructions", "\351\227\250\346\234\272\345\217\270\346\234\272\344\276\213\344\277\235\350\241\250\346\243\200\346\237\245\345\206\205\345\256\271\350\257\264\346\230\216", 0, QApplication::UnicodeUTF8));
        BackToWorkBtn->setText(QApplication::translate("Instructions", "\351\200\200 \345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Instructions: public Ui_Instructions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCTIONS_H
