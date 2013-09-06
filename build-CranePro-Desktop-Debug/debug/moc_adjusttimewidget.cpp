/****************************************************************************
** Meta object code from reading C++ file 'adjusttimewidget.h'
**
** Created: Fri Sep 6 10:33:39 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../0603Win/adjusttimewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adjusttimewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_adjusttimewidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   17,   17,   17, 0x0a,
      68,   17,   17,   17, 0x08,
      92,   17,   17,   17, 0x08,
     119,   17,   17,   17, 0x08,
     147,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_adjusttimewidget[] = {
    "adjusttimewidget\0\0SwitchToWorkSignal_Time()\0"
    "SwitchToWorkSlot_Time()\0on_ModifyTime_clicked()\0"
    "on_SysParSureBtn_clicked()\0"
    "on_SureModifyWord_clicked()\0"
    "on_GetWord_clicked()\0"
};

const QMetaObject adjusttimewidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_adjusttimewidget,
      qt_meta_data_adjusttimewidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &adjusttimewidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *adjusttimewidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *adjusttimewidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_adjusttimewidget))
        return static_cast<void*>(const_cast< adjusttimewidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int adjusttimewidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: SwitchToWorkSignal_Time(); break;
        case 1: SwitchToWorkSlot_Time(); break;
        case 2: on_ModifyTime_clicked(); break;
        case 3: on_SysParSureBtn_clicked(); break;
        case 4: on_SureModifyWord_clicked(); break;
        case 5: on_GetWord_clicked(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void adjusttimewidget::SwitchToWorkSignal_Time()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
