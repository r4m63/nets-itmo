/****************************************************************************
** Meta object code from reading C++ file 'deviceimpl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/devices/deviceimpl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deviceimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_deviceImpl_t {
    QByteArrayData data[14];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_deviceImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_deviceImpl_t qt_meta_stringdata_deviceImpl = {
    {
QT_MOC_LITERAL(0, 0, 10), // "deviceImpl"
QT_MOC_LITERAL(1, 11, 16), // "setCheckedSocket"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "setIp"
QT_MOC_LITERAL(4, 35, 7), // "setMask"
QT_MOC_LITERAL(5, 43, 10), // "setGateway"
QT_MOC_LITERAL(6, 54, 15), // "setSocketsCount"
QT_MOC_LITERAL(7, 70, 11), // "sendMessage"
QT_MOC_LITERAL(8, 82, 15), // "sendPacketCount"
QT_MOC_LITERAL(9, 98, 18), // "receivePacketCount"
QT_MOC_LITERAL(10, 117, 14), // "sendFrameCount"
QT_MOC_LITERAL(11, 132, 17), // "receiveFrameCount"
QT_MOC_LITERAL(12, 150, 4), // "note"
QT_MOC_LITERAL(13, 155, 6) // "router"

    },
    "deviceImpl\0setCheckedSocket\0\0setIp\0"
    "setMask\0setGateway\0setSocketsCount\0"
    "sendMessage\0sendPacketCount\0"
    "receivePacketCount\0sendFrameCount\0"
    "receiveFrameCount\0note\0router"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_deviceImpl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       2,  102, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       3,    2,   67,    2, 0x0a /* Public */,
       4,    2,   72,    2, 0x0a /* Public */,
       5,    1,   77,    2, 0x0a /* Public */,
       6,    1,   80,    2, 0x0a /* Public */,
       7,    3,   83,    2, 0x0a /* Public */,
       8,    1,   90,    2, 0x0a /* Public */,
       9,    1,   93,    2, 0x0a /* Public */,
      10,    1,   96,    2, 0x0a /* Public */,
      11,    1,   99,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::ULongLong, QMetaType::QString,    2,
    QMetaType::ULongLong, QMetaType::QString,    2,
    QMetaType::ULongLong, QMetaType::QString,    2,
    QMetaType::ULongLong, QMetaType::QString,    2,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00095103,
      13, QMetaType::Bool, 0x00095103,

       0        // eod
};

void deviceImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<deviceImpl *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setCheckedSocket((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setIp((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->setMask((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->setGateway((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setSocketsCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->sendMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: { quint64 _r = _t->sendPacketCount((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 7: { quint64 _r = _t->receivePacketCount((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 8: { quint64 _r = _t->sendFrameCount((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 9: { quint64 _r = _t->receiveFrameCount((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<deviceImpl *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->note(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isRouter(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<deviceImpl *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNote(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setRouter(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject deviceImpl::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_deviceImpl.data,
    qt_meta_data_deviceImpl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *deviceImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *deviceImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_deviceImpl.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int deviceImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
