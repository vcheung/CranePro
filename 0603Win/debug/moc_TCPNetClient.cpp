/****************************************************************************
** Meta object code from reading C++ file 'TCPNetClient.h'
**
** Created: Tue May 21 15:13:32 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TCPNetClient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TCPNetClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NetSpyThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      39,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      60,   13,   13,   13, 0x0a,
     103,   13,   13,   13, 0x0a,
     117,   13,   13,   13, 0x0a,
     132,   13,   13,   13, 0x0a,
     150,   13,   13,   13, 0x0a,
     162,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NetSpyThread[] = {
    "NetSpyThread\0\0NetConnectStateSig(bool)\0"
    "NoDataReconnectSig()\0"
    "displayerror(QAbstractSocket::SocketError)\0"
    "StartThread()\0NetConnected()\0"
    "NetNotConnceted()\0ReConnect()\0"
    "NoDataReconnectSlot()\0"
};

void NetSpyThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NetSpyThread *_t = static_cast<NetSpyThread *>(_o);
        switch (_id) {
        case 0: _t->NetConnectStateSig((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->NoDataReconnectSig(); break;
        case 2: _t->displayerror((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 3: _t->StartThread(); break;
        case 4: _t->NetConnected(); break;
        case 5: _t->NetNotConnceted(); break;
        case 6: _t->ReConnect(); break;
        case 7: _t->NoDataReconnectSlot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NetSpyThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NetSpyThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_NetSpyThread,
      qt_meta_data_NetSpyThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NetSpyThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NetSpyThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NetSpyThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NetSpyThread))
        return static_cast<void*>(const_cast< NetSpyThread*>(this));
    return QThread::qt_metacast(_clname);
}

int NetSpyThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void NetSpyThread::NetConnectStateSig(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NetSpyThread::NoDataReconnectSig()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
