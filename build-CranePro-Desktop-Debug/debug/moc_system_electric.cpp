/****************************************************************************
** Meta object code from reading C++ file 'system_electric.h'
**
** Created: Fri Sep 6 10:34:03 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../0603Win/system_electric.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'system_electric.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_System_electric[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      45,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      61,   16,   16,   16, 0x0a,
      87,   16,   16,   16, 0x0a,
     104,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_System_electric[] = {
    "System_electric\0\0SwitchToWorkSignal_Sysele()\0"
    "UpdateShowSig()\0SwitchToWorkSlot_Sysele()\0"
    "UpdateShowSlot()\0on_sureBtn_clicked()\0"
};

const QMetaObject System_electric::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_System_electric,
      qt_meta_data_System_electric, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &System_electric::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *System_electric::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *System_electric::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_System_electric))
        return static_cast<void*>(const_cast< System_electric*>(this));
    return QWidget::qt_metacast(_clname);
}

int System_electric::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: SwitchToWorkSignal_Sysele(); break;
        case 1: UpdateShowSig(); break;
        case 2: SwitchToWorkSlot_Sysele(); break;
        case 3: UpdateShowSlot(); break;
        case 4: on_sureBtn_clicked(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void System_electric::SwitchToWorkSignal_Sysele()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void System_electric::UpdateShowSig()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
