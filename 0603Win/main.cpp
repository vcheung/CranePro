#include <QtGui/QApplication>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextCodec>
#include "myinputpanelcontext.h"

MyInputPanelContext *NumKey;
//MainWindow *pCommonWndPoint=NULL;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GBK"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("GBK"));

    
    NumKey = new MyInputPanelContext ;
    a.setInputContext(NumKey);

    MainWindow w;
    //w.show();
    
    return a.exec();
}
