/****************************************************************************
** Meta object code from reading C++ file 'adapterproperty.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/dialogs/adapterproperty.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adapterproperty.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_adapterProperty_t {
    QByteArrayData data[11];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_adapterProperty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_adapterProperty_t qt_meta_stringdata_adapterProperty = {
    {
QT_MOC_LITERAL(0, 0, 15), // "adapterProperty"
QT_MOC_LITERAL(1, 16, 9), // "updateTab"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 1), // "n"
QT_MOC_LITERAL(4, 29, 12), // "addInterface"
QT_MOC_LITERAL(5, 42, 15), // "deleteInterface"
QT_MOC_LITERAL(6, 58, 5), // "reset"
QT_MOC_LITERAL(7, 64, 9), // "changeTab"
QT_MOC_LITERAL(8, 74, 13), // "onAutoClicked"
QT_MOC_LITERAL(9, 88, 6), // "isAuto"
QT_MOC_LITERAL(10, 95, 5) // "apply"

    },
    "adapterProperty\0updateTab\0\0n\0addInterface\0"
    "deleteInterface\0reset\0changeTab\0"
    "onAutoClicked\0isAuto\0apply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_adapterProperty[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    0,   52,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       8,    1,   58,    2, 0x08 /* Private */,
      10,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,

       0        // eod
};

void adapterProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<adapterProperty *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->addInterface(); break;
        case 2: _t->deleteInterface(); break;
        case 3: _t->reset(); break;
        case 4: _t->changeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onAutoClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->apply(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject adapterProperty::staticMetaObject = { {
    QMetaObject::SuperData::link<dialogTemplate::staticMetaObject>(),
    qt_meta_stringdata_adapterProperty.data,
    qt_meta_data_adapterProperty,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *adapterProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *adapterProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_adapterProperty.stringdata0))
        return static_cast<void*>(this);
    return dialogTemplate::qt_metacast(_clname);
}

int adapterProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = dialogTemplate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
