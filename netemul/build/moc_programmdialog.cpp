/****************************************************************************
** Meta object code from reading C++ file 'programmdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/dialogs/programmdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'programmdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_programmDialog_t {
    QByteArrayData data[10];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_programmDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_programmDialog_t qt_meta_stringdata_programmDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "programmDialog"
QT_MOC_LITERAL(1, 15, 5), // "apply"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 12), // "stateChanged"
QT_MOC_LITERAL(4, 35, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(5, 52, 4), // "item"
QT_MOC_LITERAL(6, 57, 15), // "programmChanged"
QT_MOC_LITERAL(7, 73, 8), // "settings"
QT_MOC_LITERAL(8, 82, 3), // "add"
QT_MOC_LITERAL(9, 86, 6) // "remove"

    },
    "programmDialog\0apply\0\0stateChanged\0"
    "QListWidgetItem*\0item\0programmChanged\0"
    "settings\0add\0remove"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_programmDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    1,   45,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,
       8,    0,   50,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void programmDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<programmDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->stateChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->programmChanged(); break;
        case 3: _t->settings(); break;
        case 4: _t->add(); break;
        case 5: _t->remove(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject programmDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_programmDialog.data,
    qt_meta_data_programmDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *programmDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *programmDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_programmDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int programmDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
