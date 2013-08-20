/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Tue Aug 20 14:51:00 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../0603Win/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      21,   11,   11,   11, 0x0a,
      38,   11,   11,   11, 0x0a,
      53,   11,   11,   11, 0x0a,
      70,   11,   11,   11, 0x0a,
      85,   11,   11,   11, 0x0a,
     102,   11,   11,   11, 0x0a,
     115,   11,   11,   11, 0x0a,
     130,   11,   11,   11, 0x0a,
     143,   11,   11,   11, 0x0a,
     158,   11,   11,   11, 0x0a,
     173,   11,   11,   11, 0x0a,
     185,   11,   11,   11, 0x0a,
     204,  196,   11,   11, 0x0a,
     234,  225,   11,   11, 0x0a,
     253,   11,   11,   11, 0x0a,
     281,  271,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0ToWork()\0ToCompleteWork()\0"
    "ToSecretTime()\0ToSecretSensor()\0"
    "ToSecretPara()\0ToSecretSysEle()\0"
    "ToTimeSlot()\0ToSensorSlot()\0ToParaSlot()\0"
    "ToSysEleSlot()\0ToGThsecSlot()\0ToNetSlot()\0"
    "ShutDown()\0IP,Port\0NetSet(QString,uint)\0"
    "TestData\0NetDataTest(char*)\0"
    "SendModDataSlot()\0Data,mLen\0"
    "SendNetData(char*,uint)\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ToWork(); break;
        case 1: ToCompleteWork(); break;
        case 2: ToSecretTime(); break;
        case 3: ToSecretSensor(); break;
        case 4: ToSecretPara(); break;
        case 5: ToSecretSysEle(); break;
        case 6: ToTimeSlot(); break;
        case 7: ToSensorSlot(); break;
        case 8: ToParaSlot(); break;
        case 9: ToSysEleSlot(); break;
        case 10: ToGThsecSlot(); break;
        case 11: ToNetSlot(); break;
        case 12: ShutDown(); break;
        case 13: NetSet((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 14: NetDataTest((*reinterpret_cast< char*(*)>(_a[1]))); break;
        case 15: SendModDataSlot(); break;
        case 16: SendNetData((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
