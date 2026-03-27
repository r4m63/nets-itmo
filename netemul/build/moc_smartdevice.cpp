/****************************************************************************
** Meta object code from reading C++ file 'smartdevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/devices/smartdevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smartdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_smartDevice_t {
    QByteArrayData data[23];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_smartDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_smartDevice_t qt_meta_stringdata_smartDevice = {
    {
QT_MOC_LITERAL(0, 0, 11), // "smartDevice"
QT_MOC_LITERAL(1, 12, 16), // "interfaceDeleted"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "interfaceConnected"
QT_MOC_LITERAL(4, 49, 13), // "receivePacket"
QT_MOC_LITERAL(5, 63, 8), // "ipPacket"
QT_MOC_LITERAL(6, 72, 1), // "p"
QT_MOC_LITERAL(7, 74, 16), // "setCheckedSocket"
QT_MOC_LITERAL(8, 91, 3), // "str"
QT_MOC_LITERAL(9, 95, 12), // "tableChanged"
QT_MOC_LITERAL(10, 108, 12), // "routeRecord*"
QT_MOC_LITERAL(11, 121, 1), // "n"
QT_MOC_LITERAL(12, 123, 5), // "setIp"
QT_MOC_LITERAL(13, 129, 1), // "a"
QT_MOC_LITERAL(14, 131, 2), // "ip"
QT_MOC_LITERAL(15, 134, 9), // "ipaddress"
QT_MOC_LITERAL(16, 144, 4), // "name"
QT_MOC_LITERAL(17, 149, 7), // "setMask"
QT_MOC_LITERAL(18, 157, 10), // "setGateway"
QT_MOC_LITERAL(19, 168, 15), // "sendPacketCount"
QT_MOC_LITERAL(20, 184, 18), // "receivePacketCount"
QT_MOC_LITERAL(21, 203, 14), // "sendFrameCount"
QT_MOC_LITERAL(22, 218, 17) // "receiveFrameCount"

    },
    "smartDevice\0interfaceDeleted\0\0"
    "interfaceConnected\0receivePacket\0"
    "ipPacket\0p\0setCheckedSocket\0str\0"
    "tableChanged\0routeRecord*\0n\0setIp\0a\0"
    "ip\0ipaddress\0name\0setMask\0setGateway\0"
    "sendPacketCount\0receivePacketCount\0"
    "sendFrameCount\0receiveFrameCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_smartDevice[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       3,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   85,    2, 0x0a /* Public */,
       7,    1,   88,    2, 0x0a /* Public */,
       9,    2,   91,    2, 0x0a /* Public */,
      12,    2,   96,    2, 0x0a /* Public */,
      15,    1,  101,    2, 0x0a /* Public */,
      17,    2,  104,    2, 0x0a /* Public */,
      18,    1,  109,    2, 0x0a /* Public */,
      19,    1,  112,    2, 0x0a /* Public */,
      20,    1,  115,    2, 0x0a /* Public */,
      21,    1,  118,    2, 0x0a /* Public */,
      22,    1,  121,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int,    2,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   13,   14,
    QMetaType::QString, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   13,   14,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::ULongLong, QMetaType::QString,   16,
    QMetaType::ULongLong, QMetaType::QString,   16,
    QMetaType::ULongLong, QMetaType::QString,   16,
    QMetaType::ULongLong, QMetaType::QString,   16,

       0        // eod
};

void smartDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<smartDevice *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->interfaceDeleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->interfaceConnected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->receivePacket((*reinterpret_cast< ipPacket(*)>(_a[1]))); break;
        case 3: _t->setCheckedSocket((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->tableChanged((*reinterpret_cast< routeRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->setIp((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: { QString _r = _t->ipaddress((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setMask((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->setGateway((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: { quint64 _r = _t->sendPacketCount((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 10: { quint64 _r = _t->receivePacketCount((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 11: { quint64 _r = _t->sendFrameCount((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 12: { quint64 _r = _t->receiveFrameCount((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (smartDevice::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&smartDevice::interfaceDeleted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (smartDevice::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&smartDevice::interfaceConnected)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject smartDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<deviceImpl::staticMetaObject>(),
    qt_meta_stringdata_smartDevice.data,
    qt_meta_data_smartDevice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *smartDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *smartDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_smartDevice.stringdata0))
        return static_cast<void*>(this);
    return deviceImpl::qt_metacast(_clname);
}

int smartDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = deviceImpl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void smartDevice::interfaceDeleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void smartDevice::interfaceConnected(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
