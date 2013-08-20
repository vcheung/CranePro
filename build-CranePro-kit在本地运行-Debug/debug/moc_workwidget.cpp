/****************************************************************************
** Meta object code from reading C++ file 'workwidget.h'
**
** Created: Tue Aug 20 14:51:02 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../0603Win/workwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'workwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Workwidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      41,   11,   11,   11, 0x05,
      69,   11,   11,   11, 0x05,
      96,   11,   11,   11, 0x05,
     125,   11,   11,   11, 0x05,
     152,   11,   11,   11, 0x05,
     181,   11,   11,   11, 0x05,
     198,   11,   11,   11, 0x05,
     218,   11,   11,   11, 0x05,
     234,   11,   11,   11, 0x05,
     257,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     278,   11,   11,   11, 0x0a,
     305,   11,   11,   11, 0x0a,
     331,   11,   11,   11, 0x0a,
     356,   11,   11,   11, 0x0a,
     383,   11,   11,   11, 0x0a,
     408,   11,   11,   11, 0x0a,
     435,   11,   11,   11, 0x0a,
     446,   11,   11,   11, 0x0a,
     470,   11,   11,   11, 0x0a,
     483,   11,   11,   11, 0x0a,
     494,   11,   11,   11, 0x0a,
     517,  511,   11,   11, 0x0a,
     532,   11,   11,   11, 0x0a,
     547,   11,   11,   11, 0x0a,
     562,   11,   11,   11, 0x0a,
     592,  586,   11,   11, 0x0a,
     612,   11,   11,   11, 0x0a,
     630,   11,   11,   11, 0x08,
     656,   11,   11,   11, 0x08,
     681,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Workwidget[] = {
    "Workwidget\0\0SwitchToCompleteWorkSignal()\0"
    "SwitchToChooseCraftSignal()\0"
    "SwitchToTimeSecretSignal()\0"
    "SwitchToSensorSecretSignal()\0"
    "SwitchToParaSecretSignal()\0"
    "SwitchToSysEleSecretSignal()\0"
    "ShutDownSignal()\0SwitchToGThSignal()\0"
    "UpdateShowSig()\0UpdateNetWorkInfoSig()\0"
    "ShowRecordStateSig()\0SwitchToCompleteWorkSlot()\0"
    "SwitchToChooseCraftSlot()\0"
    "SwitchToTimeSecretSlot()\0"
    "SwitchToSensorSecretSlot()\0"
    "SwitchToParaSecretSlot()\0"
    "SwitchToSysEleSecretSlot()\0ShutDown()\0"
    "SwitchToGThSecretSlot()\0updatetime()\0"
    "showMenu()\0UpdateShowSlot()\0IsTCP\0"
    "TCPState(bool)\0WorkFinished()\0"
    "ToWorkWidget()\0UpdateNetWorkInfoSlot()\0"
    "Index\0ComIndexChange(int)\0ShowRecordState()\0"
    "on_StartWorkBtn_clicked()\0"
    "on_ManInputBtn_clicked()\0on_QuPi_clicked()\0"
};

const QMetaObject Workwidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Workwidget,
      qt_meta_data_Workwidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Workwidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Workwidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Workwidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Workwidget))
        return static_cast<void*>(const_cast< Workwidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Workwidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: SwitchToCompleteWorkSignal(); break;
        case 1: SwitchToChooseCraftSignal(); break;
        case 2: SwitchToTimeSecretSignal(); break;
        case 3: SwitchToSensorSecretSignal(); break;
        case 4: SwitchToParaSecretSignal(); break;
        case 5: SwitchToSysEleSecretSignal(); break;
        case 6: ShutDownSignal(); break;
        case 7: SwitchToGThSignal(); break;
        case 8: UpdateShowSig(); break;
        case 9: UpdateNetWorkInfoSig(); break;
        case 10: ShowRecordStateSig(); break;
        case 11: SwitchToCompleteWorkSlot(); break;
        case 12: SwitchToChooseCraftSlot(); break;
        case 13: SwitchToTimeSecretSlot(); break;
        case 14: SwitchToSensorSecretSlot(); break;
        case 15: SwitchToParaSecretSlot(); break;
        case 16: SwitchToSysEleSecretSlot(); break;
        case 17: ShutDown(); break;
        case 18: SwitchToGThSecretSlot(); break;
        case 19: updatetime(); break;
        case 20: showMenu(); break;
        case 21: UpdateShowSlot(); break;
        case 22: TCPState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: WorkFinished(); break;
        case 24: ToWorkWidget(); break;
        case 25: UpdateNetWorkInfoSlot(); break;
        case 26: ComIndexChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: ShowRecordState(); break;
        case 28: on_StartWorkBtn_clicked(); break;
        case 29: on_ManInputBtn_clicked(); break;
        case 30: on_QuPi_clicked(); break;
        default: ;
        }
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void Workwidget::SwitchToCompleteWorkSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Workwidget::SwitchToChooseCraftSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Workwidget::SwitchToTimeSecretSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Workwidget::SwitchToSensorSecretSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Workwidget::SwitchToParaSecretSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Workwidget::SwitchToSysEleSecretSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void Workwidget::ShutDownSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void Workwidget::SwitchToGThSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void Workwidget::UpdateShowSig()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void Workwidget::UpdateNetWorkInfoSig()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void Workwidget::ShowRecordStateSig()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}
QT_END_MOC_NAMESPACE
