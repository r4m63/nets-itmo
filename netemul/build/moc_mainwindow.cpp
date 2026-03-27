/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[26];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 7), // "newFile"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 9), // "closeFile"
QT_MOC_LITERAL(4, 30, 8), // "saveFile"
QT_MOC_LITERAL(5, 39, 10), // "saveAsFile"
QT_MOC_LITERAL(6, 50, 8), // "openFile"
QT_MOC_LITERAL(7, 59, 7), // "setting"
QT_MOC_LITERAL(8, 67, 4), // "test"
QT_MOC_LITERAL(9, 72, 15), // "selectionChange"
QT_MOC_LITERAL(10, 88, 12), // "groupClicked"
QT_MOC_LITERAL(11, 101, 8), // "QAction*"
QT_MOC_LITERAL(12, 110, 3), // "clk"
QT_MOC_LITERAL(13, 114, 7), // "uncheck"
QT_MOC_LITERAL(14, 122, 10), // "helpDialog"
QT_MOC_LITERAL(15, 133, 8), // "playBack"
QT_MOC_LITERAL(16, 142, 10), // "statistics"
QT_MOC_LITERAL(17, 153, 13), // "showLogDialog"
QT_MOC_LITERAL(18, 167, 11), // "aboutDialog"
QT_MOC_LITERAL(19, 179, 11), // "printDialog"
QT_MOC_LITERAL(20, 191, 18), // "printPreviewDialog"
QT_MOC_LITERAL(21, 210, 20), // "paintInPreviewDialog"
QT_MOC_LITERAL(22, 231, 9), // "QPrinter*"
QT_MOC_LITERAL(23, 241, 7), // "printer"
QT_MOC_LITERAL(24, 249, 7), // "incTime"
QT_MOC_LITERAL(25, 257, 8) // "autosave"

    },
    "MainWindow\0newFile\0\0closeFile\0saveFile\0"
    "saveAsFile\0openFile\0setting\0test\0"
    "selectionChange\0groupClicked\0QAction*\0"
    "clk\0uncheck\0helpDialog\0playBack\0"
    "statistics\0showLogDialog\0aboutDialog\0"
    "printDialog\0printPreviewDialog\0"
    "paintInPreviewDialog\0QPrinter*\0printer\0"
    "incTime\0autosave"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x0a /* Public */,
       3,    0,  115,    2, 0x0a /* Public */,
       4,    0,  116,    2, 0x0a /* Public */,
       5,    0,  117,    2, 0x0a /* Public */,
       6,    0,  118,    2, 0x0a /* Public */,
       7,    0,  119,    2, 0x0a /* Public */,
       8,    0,  120,    2, 0x0a /* Public */,
       9,    0,  121,    2, 0x0a /* Public */,
      10,    1,  122,    2, 0x0a /* Public */,
      13,    0,  125,    2, 0x0a /* Public */,
      14,    0,  126,    2, 0x0a /* Public */,
      15,    0,  127,    2, 0x0a /* Public */,
      16,    0,  128,    2, 0x0a /* Public */,
      17,    0,  129,    2, 0x0a /* Public */,
      18,    0,  130,    2, 0x0a /* Public */,
      19,    0,  131,    2, 0x0a /* Public */,
      20,    0,  132,    2, 0x0a /* Public */,
      21,    1,  133,    2, 0x0a /* Public */,
      24,    0,  136,    2, 0x0a /* Public */,
      25,    0,  137,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newFile(); break;
        case 1: _t->closeFile(); break;
        case 2: { bool _r = _t->saveFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->saveAsFile(); break;
        case 4: _t->openFile(); break;
        case 5: _t->setting(); break;
        case 6: _t->test(); break;
        case 7: _t->selectionChange(); break;
        case 8: _t->groupClicked((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 9: _t->uncheck(); break;
        case 10: _t->helpDialog(); break;
        case 11: _t->playBack(); break;
        case 12: _t->statistics(); break;
        case 13: _t->showLogDialog(); break;
        case 14: _t->aboutDialog(); break;
        case 15: _t->printDialog(); break;
        case 16: _t->printPreviewDialog(); break;
        case 17: _t->paintInPreviewDialog((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 18: _t->incTime(); break;
        case 19: _t->autosave(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
