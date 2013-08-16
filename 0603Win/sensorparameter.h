#ifndef SENSORPARAMETER_H
#define SENSORPARAMETER_H
#include <QWidget>
#include "ConfigureData.h"

//class MainWindow;//前置声明mainwindow,用于MainWindow *pWnd; /*****方案2*******/
namespace Ui {
class SensorParameter;
}

class SensorParameter : public QWidget
{
    Q_OBJECT
    
public:
    explicit SensorParameter(QWidget *parent = 0);
    ~SensorParameter();

    void ShowSenPar(SensorShowPar *TSenpar);
    void WriteConfigSetting();
    void ReadConfigSetting();
    void InitSenParStruct();



signals:
    void SwitchToWorkSignal_Sen();
    void UpdateShowSig();
public slots:
    void SwitchToWorkSlots_Sen();
    void UpdateShowSlot();
    
private slots:
   // void on_ZeroPointBtn_clicked();

    void on_ModifyCoeH_clicked();

    void on_ModifyOFSZero_clicked();

    void on_ModifyCoeOn_clicked();

    void on_ModifyCoeSu_clicked();

private:
    Ui::SensorParameter *ui;
    SensorShowPar SmSensorShowPar;
};

#endif // SENSORPARAMETER_H
