/****************************************************************************
** Meta object code from reading C++ file 'myinputpanel.h'
**
** Created: Thu Apr 25 18:10:57 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../myinputpanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myinputpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyInputPanel[] = {

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
      24,   14,   13,   13, 0x05,
      50,   13,   13,   13, 0x05,
      68,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     100,   82,   13,   13, 0x08,
     137,  135,   13,   13, 0x08,
     161,   13,   13,   13, 0x08,
     173,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MyInputPanel[] = {
    "MyInputPanel\0\0character\0"
    "characterGenerated(QChar)\0BackSpaceSignal()\0"
    "EnterSignal()\0oldFocus,newFocus\0"
    "saveFocusWidget(QWidget*,QWidget*)\0w\0"
    "buttonClicked(QWidget*)\0Backspace()\0"
    "Enter()\0"
};

void MyInputPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyInputPanel *_t = static_cast<MyInputPanel *>(_o);
        switch (_id) {
        case 0: _t->characterGenerated((*reinterpret_cast< QChar(*)>(_a[1]))); break;
        case 1: _t->BackSpaceSignal(); break;
        case 2: _t->EnterSignal(); break;
        case 3: _t->saveFocusWidget((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 4: _t->buttonClicked((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 5: _t->Backspace(); break;
        case 6: _t->Enter(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MyInputPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MyInputPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MyInputPanel,
      qt_meta_data_MyInputPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyInputPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyInputPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyInputPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyInputPanel))
        return static_cast<void*>(const_cast< MyInputPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int MyInputPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MyInputPanel::characterGenerated(QChar _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyInputPanel::BackSpaceSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void MyInputPanel::EnterSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
