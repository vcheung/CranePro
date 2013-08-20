/****************************************************************************
** Meta object code from reading C++ file 'completework.h'
**
** Created: Tue Aug 20 14:51:05 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../0603Win/completework.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'completework.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CompleteWork[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      38,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      56,   13,   13,   13, 0x0a,
      78,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CompleteWork[] = {
    "CompleteWork\0\0SwicthToWorkSignal_Co()\0"
    "WorkFinishedSig()\0SwitchToWorkSlot_Co()\0"
    "WorkFinishedSlot()\0"
};

const QMetaObject CompleteWork::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CompleteWork,
      qt_meta_data_CompleteWork, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CompleteWork::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CompleteWork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CompleteWork::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CompleteWork))
        return static_cast<void*>(const_cast< CompleteWork*>(this));
    return QWidget::qt_metacast(_clname);
}

int CompleteWork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: SwicthToWorkSignal_Co(); break;
        case 1: WorkFinishedSig(); break;
        case 2: SwitchToWorkSlot_Co(); break;
        case 3: WorkFinishedSlot(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CompleteWork::SwicthToWorkSignal_Co()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CompleteWork::WorkFinishedSig()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
