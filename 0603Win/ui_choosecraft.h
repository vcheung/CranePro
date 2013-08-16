/********************************************************************************
** Form generated from reading UI file 'choosecraft.ui'
**
** Created: Mon Dec 31 15:20:21 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSECRAFT_H
#define UI_CHOOSECRAFT_H

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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseCraft
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_2;
    QGroupBox *groupBox3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *SelectCraftBtn1;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *SelectCraftBtn2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *SelectCraftBtn3;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *BackToWorkBtn_Cr;
    QSpacerItem *horizontalSpacer_12;

    void setupUi(QWidget *ChooseCraft)
    {
        if (ChooseCraft->objectName().isEmpty())
            ChooseCraft->setObjectName(QString::fromUtf8("ChooseCraft"));
        ChooseCraft->resize(800, 480);
        gridLayout = new QGridLayout(ChooseCraft);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_2 = new QLabel(ChooseCraft);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(0, 60));
        label_2->setMaximumSize(QSize(16777215, 80));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 36pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 0, 0);"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_2);


        gridLayout->addLayout(horizontalLayout_10, 0, 1, 1, 1);

        groupBox3 = new QGroupBox(ChooseCraft);
        groupBox3->setObjectName(QString::fromUtf8("groupBox3"));
        sizePolicy.setHeightForWidth(groupBox3->sizePolicy().hasHeightForWidth());
        groupBox3->setSizePolicy(sizePolicy);
        groupBox3->setMinimumSize(QSize(0, 100));
        groupBox3->setMaximumSize(QSize(16777215, 120));
        groupBox3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 255);"));
        horizontalLayout_7 = new QHBoxLayout(groupBox3);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_9 = new QLabel(groupBox3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setStyleSheet(QString::fromUtf8("font: 75 28pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(255, 85, 255);\n"
"color: rgb(0, 0, 125);"));

        horizontalLayout_7->addWidget(label_9);

        horizontalSpacer_9 = new QSpacerItem(122, 30, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);

        SelectCraftBtn1 = new QPushButton(groupBox3);
        SelectCraftBtn1->setObjectName(QString::fromUtf8("SelectCraftBtn1"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(SelectCraftBtn1->sizePolicy().hasHeightForWidth());
        SelectCraftBtn1->setSizePolicy(sizePolicy2);
        SelectCraftBtn1->setMinimumSize(QSize(120, 50));
        SelectCraftBtn1->setMaximumSize(QSize(180, 16777215));
        SelectCraftBtn1->setFocusPolicy(Qt::NoFocus);
        SelectCraftBtn1->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(155, 200, 40);\n"
"color: rgb(0, 0, 255);"));

        horizontalLayout_7->addWidget(SelectCraftBtn1);


        gridLayout->addWidget(groupBox3, 1, 0, 1, 2);

        groupBox_2 = new QGroupBox(ChooseCraft);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMinimumSize(QSize(0, 100));
        groupBox_2->setMaximumSize(QSize(16777215, 120));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        horizontalLayout_8 = new QHBoxLayout(groupBox_2);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setStyleSheet(QString::fromUtf8("font: 75 28pt \"\351\273\221\344\275\223\";\n"
"border-color:  rgb(85, 170, 255);\n"
"color: rgb(0, 0, 125);"));

        horizontalLayout_8->addWidget(label_10);

        horizontalSpacer_10 = new QSpacerItem(160, 30, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);

        SelectCraftBtn2 = new QPushButton(groupBox_2);
        SelectCraftBtn2->setObjectName(QString::fromUtf8("SelectCraftBtn2"));
        sizePolicy2.setHeightForWidth(SelectCraftBtn2->sizePolicy().hasHeightForWidth());
        SelectCraftBtn2->setSizePolicy(sizePolicy2);
        SelectCraftBtn2->setMinimumSize(QSize(120, 50));
        SelectCraftBtn2->setMaximumSize(QSize(180, 16777215));
        SelectCraftBtn2->setFocusPolicy(Qt::NoFocus);
        SelectCraftBtn2->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(155, 200, 40);\n"
"color: rgb(0, 0, 255);"));

        horizontalLayout_8->addWidget(SelectCraftBtn2);


        gridLayout->addWidget(groupBox_2, 2, 0, 1, 2);

        groupBox = new QGroupBox(ChooseCraft);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(0, 100));
        groupBox->setMaximumSize(QSize(16777215, 120));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);"));
        horizontalLayout_6 = new QHBoxLayout(groupBox);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setMaximumSize(QSize(16777215, 160));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 28pt \"\351\273\221\344\275\223\";\n"
"border-color: rgb(85, 255, 255);\n"
"color: rgb(0, 0, 125);"));

        horizontalLayout_6->addWidget(label_5);

        horizontalSpacer_8 = new QSpacerItem(46, 30, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        SelectCraftBtn3 = new QPushButton(groupBox);
        SelectCraftBtn3->setObjectName(QString::fromUtf8("SelectCraftBtn3"));
        sizePolicy2.setHeightForWidth(SelectCraftBtn3->sizePolicy().hasHeightForWidth());
        SelectCraftBtn3->setSizePolicy(sizePolicy2);
        SelectCraftBtn3->setMinimumSize(QSize(120, 50));
        SelectCraftBtn3->setMaximumSize(QSize(180, 16777215));
        SelectCraftBtn3->setFocusPolicy(Qt::NoFocus);
        SelectCraftBtn3->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(155, 200, 40);\n"
"color: rgb(0, 0, 255);"));

        horizontalLayout_6->addWidget(SelectCraftBtn3);


        gridLayout->addWidget(groupBox, 3, 0, 1, 2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_11);

        BackToWorkBtn_Cr = new QPushButton(ChooseCraft);
        BackToWorkBtn_Cr->setObjectName(QString::fromUtf8("BackToWorkBtn_Cr"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(BackToWorkBtn_Cr->sizePolicy().hasHeightForWidth());
        BackToWorkBtn_Cr->setSizePolicy(sizePolicy3);
        BackToWorkBtn_Cr->setMinimumSize(QSize(160, 50));
        BackToWorkBtn_Cr->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(155, 200, 40);\n"
"color: rgb(0, 0, 255);"));

        horizontalLayout_9->addWidget(BackToWorkBtn_Cr);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_12);


        gridLayout->addLayout(horizontalLayout_9, 4, 1, 1, 1);


        retranslateUi(ChooseCraft);

        QMetaObject::connectSlotsByName(ChooseCraft);
    } // setupUi

    void retranslateUi(QWidget *ChooseCraft)
    {
        ChooseCraft->setWindowTitle(QApplication::translate("ChooseCraft", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ChooseCraft", "\346\223\215\344\275\234\345\267\245\350\211\272\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        groupBox3->setTitle(QString());
        label_9->setText(QApplication::translate("ChooseCraft", "1\343\200\201\345\215\270\350\210\271\342\200\224\342\200\224>\347\240\201\345\244\264\344\275\234\344\270\232", 0, QApplication::UnicodeUTF8));
        SelectCraftBtn1->setText(QApplication::translate("ChooseCraft", "\351\200\211\346\213\251|\344\275\277\347\224\250\344\270\255", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        label_10->setText(QApplication::translate("ChooseCraft", "2\343\200\201\347\240\201\345\244\264\342\200\224\342\200\224>\350\210\271\344\275\234\344\270\232", 0, QApplication::UnicodeUTF8));
        SelectCraftBtn2->setText(QApplication::translate("ChooseCraft", "\351\200\211\346\213\251|\344\275\277\347\224\250\344\270\255", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        label_5->setText(QApplication::translate("ChooseCraft", "3\343\200\201\350\210\271(\351\251\263)\342\200\224\342\200\224>\350\210\271(\351\251\263)\344\275\234\344\270\232", 0, QApplication::UnicodeUTF8));
        SelectCraftBtn3->setText(QApplication::translate("ChooseCraft", "\351\200\211\346\213\251|\344\275\277\347\224\250\344\270\255", 0, QApplication::UnicodeUTF8));
        BackToWorkBtn_Cr->setText(QApplication::translate("ChooseCraft", "\350\277\224 \345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ChooseCraft: public Ui_ChooseCraft {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSECRAFT_H
