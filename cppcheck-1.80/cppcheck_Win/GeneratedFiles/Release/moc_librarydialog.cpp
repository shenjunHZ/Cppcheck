/****************************************************************************
** Meta object code from reading C++ file 'librarydialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gui/librarydialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'librarydialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibraryDialog_t {
    QByteArrayData data[13];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibraryDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibraryDialog_t qt_meta_stringdata_LibraryDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LibraryDialog"
QT_MOC_LITERAL(1, 14, 7), // "openCfg"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "saveCfg"
QT_MOC_LITERAL(4, 31, 9), // "saveCfgAs"
QT_MOC_LITERAL(5, 41, 11), // "addFunction"
QT_MOC_LITERAL(6, 53, 14), // "changeFunction"
QT_MOC_LITERAL(7, 68, 7), // "editArg"
QT_MOC_LITERAL(8, 76, 16), // "editFunctionName"
QT_MOC_LITERAL(9, 93, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(10, 110, 15), // "filterFunctions"
QT_MOC_LITERAL(11, 126, 14), // "selectFunction"
QT_MOC_LITERAL(12, 141, 13) // "sortFunctions"

    },
    "LibraryDialog\0openCfg\0\0saveCfg\0saveCfgAs\0"
    "addFunction\0changeFunction\0editArg\0"
    "editFunctionName\0QListWidgetItem*\0"
    "filterFunctions\0selectFunction\0"
    "sortFunctions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibraryDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,
      11,    0,   76,    2, 0x08 /* Private */,
      12,    1,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void LibraryDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LibraryDialog *_t = static_cast<LibraryDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openCfg(); break;
        case 1: _t->saveCfg(); break;
        case 2: _t->saveCfgAs(); break;
        case 3: _t->addFunction(); break;
        case 4: _t->changeFunction(); break;
        case 5: _t->editArg(); break;
        case 6: _t->editFunctionName((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->filterFunctions((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->selectFunction(); break;
        case 9: _t->sortFunctions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject LibraryDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LibraryDialog.data,
      qt_meta_data_LibraryDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibraryDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibraryDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibraryDialog.stringdata0))
        return static_cast<void*>(const_cast< LibraryDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LibraryDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
