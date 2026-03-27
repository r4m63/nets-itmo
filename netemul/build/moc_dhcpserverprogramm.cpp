/****************************************************************************
** Meta object code from reading C++ file 'dhcpserverprogramm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/programms/dhcpserverprogramm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dhcpserverprogramm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dhcpServerProgramm_t {
    QByteArrayData data[14];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dhcpServerProgramm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dhcpServerProgramm_t qt_meta_stringdata_dhcpServerProgramm = {
    {
QT_MOC_LITERAL(0, 0, 18), // "dhcpServerProgramm"
QT_MOC_LITERAL(1, 19, 7), // "execute"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "data"
QT_MOC_LITERAL(4, 33, 14), // "checkInterface"
QT_MOC_LITERAL(5, 48, 4), // "port"
QT_MOC_LITERAL(6, 53, 13), // "interfaceName"
QT_MOC_LITERAL(7, 67, 7), // "beginIp"
QT_MOC_LITERAL(8, 75, 5), // "endIp"
QT_MOC_LITERAL(9, 81, 4), // "mask"
QT_MOC_LITERAL(10, 86, 7), // "gateway"
QT_MOC_LITERAL(11, 94, 4), // "time"
QT_MOC_LITERAL(12, 99, 11), // "waitingTime"
QT_MOC_LITERAL(13, 111, 7) // "dynamic"

    },
    "dhcpServerProgramm\0execute\0\0data\0"
    "checkInterface\0port\0interfaceName\0"
    "beginIp\0endIp\0mask\0gateway\0time\0"
    "waitingTime\0dynamic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dhcpServerProgramm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       8,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::QString, 0x00095103,
       8, QMetaType::QString, 0x00095103,
       9, QMetaType::QString, 0x00095103,
      10, QMetaType::QString, 0x00095103,
      11, QMetaType::Int, 0x00095103,
      12, QMetaType::Int, 0x00095103,
      13, QMetaType::Bool, 0x00095103,

       0        // eod
};

void dhcpServerProgramm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<dhcpServerProgramm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->execute((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->checkInterface((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<dhcpServerProgramm *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->interfaceName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->beginIp(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->endIp(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->mask(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->gateway(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->time(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->waitingTime(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->dynamic(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<dhcpServerProgramm *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setInterfaceName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setBeginIp(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setEndIp(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setMask(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setGateway(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setTime(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setWaitingTime(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setDynamic(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject dhcpServerProgramm::staticMetaObject = { {
    QMetaObject::SuperData::link<programmRep::staticMetaObject>(),
    qt_meta_stringdata_dhcpServerProgramm.data,
    qt_meta_data_dhcpServerProgramm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dhcpServerProgramm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dhcpServerProgramm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dhcpServerProgramm.stringdata0))
        return static_cast<void*>(this);
    return programmRep::qt_metacast(_clname);
}

int dhcpServerProgramm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = programmRep::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
