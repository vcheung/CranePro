#ifndef SYSTEM_ELECTRIC_H
#define SYSTEM_ELECTRIC_H

#include <QWidget>
#include "ConfigureData.h"

namespace Ui {
class System_electric;
}

class System_electric : public QWidget
{
    Q_OBJECT
    
public:
    explicit System_electric(QWidget *parent = 0);
    ~System_electric();
    void ShowElePar(ElePar *pEmElePar);
    void WriteConfigSetting();
    void ReadConfigSetting();
signals:
    void SwitchToWorkSignal_Sysele();
    void UpdateShowSig();
public slots:
    void SwitchToWorkSlot_Sysele();
    void UpdateShowSlot();
    
private slots:

    void on_sureBtn_clicked();

private:
    Ui::System_electric *ui;
    ElePar EmElePar;
};

#endif // SYSTEM_ELECTRIC_H
