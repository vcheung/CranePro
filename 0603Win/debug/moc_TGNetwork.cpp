/****************************************************************************
** Meta object code from reading C++ file 'TGNetwork.h'
**
** Created: Mon May 6 15:11:34 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TGNetwork.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TGNetwork.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TGNetwork[] = {

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
      19,   11,   10,   10, 0x05,
      52,   43,   10,   10, 0x05,
      74,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      89,   10,   10,   10, 0x08,
     109,   10,   10,   10, 0x08,
     138,   10,   10,   10, 0x08,
     166,  160,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TGNetwork[] = {
    "TGNetwork\0\0Ip,Port\0sevIPPort(QString,uint)\0"
    "TestData\0TestDataSignal(char*)\0"
    "SwitchToWork()\0on_NetBtn_clicked()\0"
    "on_SendTestDataBtn_clicked()\0"
    "on_NetBtn_2_clicked()\0IsTCP\0TCPState(bool)\0"
};

void TGNetwork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TGNetwork *_t = static_cast<TGNetwork *>(_o);
        switch (_id) {
        case 0: _t->sevIPPort((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: _t->TestDataSignal((*reinterpret_cast< char*(*)>(_a[1]))); break;
        case 2: _t->SwitchToWork(); break;
        case 3: _t->on_NetBtn_clicked(); break;
        case 4: _t->on_SendTestDataBtn_clicked(); break;
        case 5: _t->on_NetBtn_2_clicked(); break;
        case 6: _t->TCPState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TGNetwork::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TGNetwork::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TGNetwork,
      qt_meta_data_TGNetwork, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TGNetwork::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TGNetwork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TGNetwork::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TGNetwork))
        return static_cast<void*>(const_cast< TGNetwork*>(this));
    return QWidget::qt_metacast(_clname);
}

int TGNetwork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void TGNetwork::sevIPPort(QString _t1, uint _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TGNetwork::TestDataSignal(char * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TGNetwork::SwitchToWork()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
