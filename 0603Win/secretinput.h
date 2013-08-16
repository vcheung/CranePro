#ifndef SECRETINPUT_H
#define SECRETINPUT_H

#include <QWidget>
#include <QMessageBox>

namespace Ui {
class Secretinput;
}

class Secretinput : public QWidget
{
    Q_OBJECT
    
public:
    explicit Secretinput(int type=0,QWidget *parent = 0);
    ~Secretinput();
    QWidget *Prompter;
    void CreateErrorPrompter();
signals:
    void SwitchToWorkSignal_Sec();

    void SwitchToTimeSignal();
    void SwitchToSensorSignal();
    void SwithcToParaSignal();
    void SwitchToSysEleSignal();
    void SwitchToNetSignal();
public slots:
    void SwitchToWorkSlot_Sec();
    void SwitchToAllParaSlot();
    void InvisiblePrompterSlot();
    
private:
    Ui::Secretinput *ui;
    int m_type;

};

#endif // SECRETINPUT_H
