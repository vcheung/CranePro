#ifndef COMPLETEWORK_H
#define COMPLETEWORK_H

#include <QWidget>

namespace Ui {
class CompleteWork;
}

class CompleteWork : public QWidget
{
    Q_OBJECT
    
public:
    explicit CompleteWork(QWidget *parent = 0);
    ~CompleteWork();
signals:
    void SwicthToWorkSignal_Co();
    void WorkFinishedSig();

public slots:
    void SwitchToWorkSlot_Co();
    void WorkFinishedSlot();
    
private:
    Ui::CompleteWork *ui;

};

#endif // COMPLETEWORK_H
