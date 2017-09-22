/****************************************************************************
** Meta object code from reading C++ file 'testfilelist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gui/test/filelist/testfilelist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testfilelist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TestFileList_t {
    QByteArrayData data[12];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestFileList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestFileList_t qt_meta_stringdata_TestFileList = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TestFileList"
QT_MOC_LITERAL(1, 13, 7), // "addFile"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 11), // "addPathList"
QT_MOC_LITERAL(4, 34, 16), // "addFile_notexist"
QT_MOC_LITERAL(5, 51, 15), // "addFile_unknown"
QT_MOC_LITERAL(6, 67, 12), // "addDirectory"
QT_MOC_LITERAL(7, 80, 22), // "addDirectory_recursive"
QT_MOC_LITERAL(8, 103, 11), // "filterFiles"
QT_MOC_LITERAL(9, 115, 12), // "filterFiles2"
QT_MOC_LITERAL(10, 128, 12), // "filterFiles3"
QT_MOC_LITERAL(11, 141, 12) // "filterFiles4"

    },
    "TestFileList\0addFile\0\0addPathList\0"
    "addFile_notexist\0addFile_unknown\0"
    "addDirectory\0addDirectory_recursive\0"
    "filterFiles\0filterFiles2\0filterFiles3\0"
    "filterFiles4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestFileList[] = {

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
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TestFileList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestFileList *_t = static_cast<TestFileList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addFile(); break;
        case 1: _t->addPathList(); break;
        case 2: _t->addFile_notexist(); break;
        case 3: _t->addFile_unknown(); break;
        case 4: _t->addDirectory(); break;
        case 5: _t->addDirectory_recursive(); break;
        case 6: _t->filterFiles(); break;
        case 7: _t->filterFiles2(); break;
        case 8: _t->filterFiles3(); break;
        case 9: _t->filterFiles4(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TestFileList::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestFileList.data,
      qt_meta_data_TestFileList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TestFileList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestFileList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TestFileList.stringdata0))
        return static_cast<void*>(const_cast< TestFileList*>(this));
    return QObject::qt_metacast(_clname);
}

int TestFileList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_END_MOC_NAMESPACE
