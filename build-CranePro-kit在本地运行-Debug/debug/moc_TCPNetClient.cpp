/****************************************************************************
** Meta object code from reading C++ file 'TCPNetClient.h'
**
** Created: Tue Aug 20 14:51:27 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../0603Win/TCPNetClient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TCPNetClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NetSpyThread[] = {

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

const QMetaObject NetSpyThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_NetSpyThread,
      qt_meta_data_NetSpyThread, 0 }
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
        switch (_id) {
        case 0: NetConnectStateSig((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: NoDataReconnectSig(); break;
        case 2: displayerror((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 3: StartThread(); break;
        case 4: NetConnected(); break;
        case 5: NetNotConnceted(); break;
        case 6: ReConnect(); break;
        case 7: NoDataReconnectSlot(); break;
        default: ;
        }
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
