/****************************************************************************
** Meta object code from reading C++ file 'adjustparameter.h'
**
** Created: Thu May 9 14:12:55 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../adjustparameter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adjustparameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_adjustparameter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      43,   16,   16,   16, 0x05,
      66,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      89,   16,   16,   16, 0x0a,
     113,   16,   16,   16, 0x0a,
     137,   16,   16,   16, 0x0a,
     157,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_adjustparameter[] = {
    "adjustparameter\0\0SwitchToWorkSignal_Para()\0"
    "UpdateRecordStateSig()\0AdShowRecordStateSig()\0"
    "SwitchToWorkSlot_Para()\0UpdateRecordStateSlot()\0"
    "AdShowRecordState()\0on_SureBtn_clicked()\0"
};

void adjustparameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        adjustparameter *_t = static_cast<adjustparameter *>(_o);
        switch (_id) {
        case 0: _t->SwitchToWorkSignal_Para(); break;
        case 1: _t->UpdateRecordStateSig(); break;
        case 2: _t->AdShowRecordStateSig(); break;
        case 3: _t->SwitchToWorkSlot_Para(); break;
        case 4: _t->UpdateRecordStateSlot(); break;
        case 5: _t->AdShowRecordState(); break;
        case 6: _t->on_SureBtn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData adjustparameter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject adjustparameter::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_adjustparameter,
      qt_meta_data_adjustparameter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &adjustparameter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *adjustparameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *adjustparameter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_adjustparameter))
        return static_cast<void*>(const_cast< adjustparameter*>(this));
    return QWidget::qt_metacast(_clname);
}

int adjustparameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void adjustparameter::SwitchToWorkSignal_Para()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void adjustparameter::UpdateRecordStateSig()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void adjustparameter::AdShowRecordStateSig()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
