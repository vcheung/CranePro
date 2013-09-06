/****************************************************************************
** Meta object code from reading C++ file 'sensorparameter.h'
**
** Created: Tue Aug 20 14:51:09 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../0603Win/sensorparameter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sensorparameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SensorParameter[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      42,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   16,   16,   16, 0x0a,
      82,   16,   16,   16, 0x0a,
      99,   16,   16,   16, 0x08,
     123,   16,   16,   16, 0x08,
     150,   16,   16,   16, 0x08,
     175,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SensorParameter[] = {
    "SensorParameter\0\0SwitchToWorkSignal_Sen()\0"
    "UpdateShowSig()\0SwitchToWorkSlots_Sen()\0"
    "UpdateShowSlot()\0on_ModifyCoeH_clicked()\0"
    "on_ModifyOFSZero_clicked()\0"
    "on_ModifyCoeOn_clicked()\0"
    "on_ModifyCoeSu_clicked()\0"
};

const QMetaObject SensorParameter::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SensorParameter,
      qt_meta_data_SensorParameter, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SensorParameter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SensorParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SensorParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SensorParameter))
        return static_cast<void*>(const_cast< SensorParameter*>(this));
    return QWidget::qt_metacast(_clname);
}

int SensorParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: SwitchToWorkSignal_Sen(); break;
        case 1: UpdateShowSig(); break;
        case 2: SwitchToWorkSlots_Sen(); break;
        case 3: UpdateShowSlot(); break;
        case 4: on_ModifyCoeH_clicked(); break;
        case 5: on_ModifyOFSZero_clicked(); break;
        case 6: on_ModifyCoeOn_clicked(); break;
        case 7: on_ModifyCoeSu_clicked(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SensorParameter::SwitchToWorkSignal_Sen()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SensorParameter::UpdateShowSig()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
