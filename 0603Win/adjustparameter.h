#ifndef ADJUSTPARAMETER_H
#define ADJUSTPARAMETER_H

#include <QWidget>
#include "ConfigureData.h"
#include "RecordFile.h"

namespace Ui {
class adjustparameter;
}

class adjustparameter : public QWidget
{
    Q_OBJECT
    
public:
    explicit adjustparameter(QWidget *parent = 0);
    ~adjustparameter();

    void WriteConfigSetting();
    void ReadConfigSetting();
    //void AdShowRecordState();
    void GetWRState(WRState *apWRState);
signals:
    void SwitchToWorkSignal_Para();
    void UpdateRecordStateSig();
    void AdShowRecordStateSig();
public slots:
    void SwitchToWorkSlot_Para();
    void UpdateRecordStateSlot();
    void AdShowRecordState();
private slots:
    void on_SureBtn_clicked();

private:
    Ui::adjustparameter *ui;
    RecordFile *ShowRecordState;
    WRState mReState;
};

#endif // ADJUSTPARAMETER_H
