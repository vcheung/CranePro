/****************************************************************************
** Meta object code from reading C++ file 'secretinput.h'
**
** Created: Thu May 23 17:40:15 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../secretinput.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'secretinput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Secretinput[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      38,   12,   12,   12, 0x05,
      59,   12,   12,   12, 0x05,
      82,   12,   12,   12, 0x05,
     103,   12,   12,   12, 0x05,
     126,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     146,   12,   12,   12, 0x0a,
     169,   12,   12,   12, 0x0a,
     191,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Secretinput[] = {
    "Secretinput\0\0SwitchToWorkSignal_Sec()\0"
    "SwitchToTimeSignal()\0SwitchToSensorSignal()\0"
    "SwithcToParaSignal()\0SwitchToSysEleSignal()\0"
    "SwitchToNetSignal()\0SwitchToWorkSlot_Sec()\0"
    "SwitchToAllParaSlot()\0InvisiblePrompterSlot()\0"
};

void Secretinput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Secretinput *_t = static_cast<Secretinput *>(_o);
        switch (_id) {
        case 0: _t->SwitchToWorkSignal_Sec(); break;
        case 1: _t->SwitchToTimeSignal(); break;
        case 2: _t->SwitchToSensorSignal(); break;
        case 3: _t->SwithcToParaSignal(); break;
        case 4: _t->SwitchToSysEleSignal(); break;
        case 5: _t->SwitchToNetSignal(); break;
        case 6: _t->SwitchToWorkSlot_Sec(); break;
        case 7: _t->SwitchToAllParaSlot(); break;
        case 8: _t->InvisiblePrompterSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Secretinput::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Secretinput::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Secretinput,
      qt_meta_data_Secretinput, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Secretinput::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Secretinput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Secretinput::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Secretinput))
        return static_cast<void*>(const_cast< Secretinput*>(this));
    return QWidget::qt_metacast(_clname);
}

int Secretinput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Secretinput::SwitchToWorkSignal_Sec()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Secretinput::SwitchToTimeSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Secretinput::SwitchToSensorSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Secretinput::SwithcToParaSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Secretinput::SwitchToSysEleSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Secretinput::SwitchToNetSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
