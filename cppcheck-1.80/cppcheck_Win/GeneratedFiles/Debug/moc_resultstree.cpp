/****************************************************************************
** Meta object code from reading C++ file 'resultstree.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gui/resultstree.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resultstree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ResultsTree_t {
    QByteArrayData data[22];
    char stringdata0[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ResultsTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ResultsTree_t qt_meta_stringdata_ResultsTree = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ResultsTree"
QT_MOC_LITERAL(1, 12, 13), // "resultsHidden"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "hidden"
QT_MOC_LITERAL(4, 34, 13), // "checkSelected"
QT_MOC_LITERAL(5, 48, 13), // "selectedItems"
QT_MOC_LITERAL(6, 62, 16), // "selectionChanged"
QT_MOC_LITERAL(7, 79, 7), // "current"
QT_MOC_LITERAL(8, 87, 21), // "quickStartApplication"
QT_MOC_LITERAL(9, 109, 5), // "index"
QT_MOC_LITERAL(10, 115, 7), // "context"
QT_MOC_LITERAL(11, 123, 11), // "application"
QT_MOC_LITERAL(12, 135, 12), // "copyFilename"
QT_MOC_LITERAL(13, 148, 12), // "copyFullPath"
QT_MOC_LITERAL(14, 161, 11), // "copyMessage"
QT_MOC_LITERAL(15, 173, 13), // "copyMessageId"
QT_MOC_LITERAL(16, 187, 10), // "hideResult"
QT_MOC_LITERAL(17, 198, 20), // "recheckSelectedFiles"
QT_MOC_LITERAL(18, 219, 15), // "hideAllIdResult"
QT_MOC_LITERAL(19, 235, 20), // "openContainingFolder"
QT_MOC_LITERAL(20, 256, 14), // "currentChanged"
QT_MOC_LITERAL(21, 271, 8) // "previous"

    },
    "ResultsTree\0resultsHidden\0\0hidden\0"
    "checkSelected\0selectedItems\0"
    "selectionChanged\0current\0quickStartApplication\0"
    "index\0context\0application\0copyFilename\0"
    "copyFullPath\0copyMessage\0copyMessageId\0"
    "hideResult\0recheckSelectedFiles\0"
    "hideAllIdResult\0openContainingFolder\0"
    "currentChanged\0previous"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ResultsTree[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       6,    1,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   93,    2, 0x09 /* Protected */,
      10,    1,   96,    2, 0x09 /* Protected */,
      12,    0,   99,    2, 0x09 /* Protected */,
      13,    0,  100,    2, 0x09 /* Protected */,
      14,    0,  101,    2, 0x09 /* Protected */,
      15,    0,  102,    2, 0x09 /* Protected */,
      16,    0,  103,    2, 0x09 /* Protected */,
      17,    0,  104,    2, 0x09 /* Protected */,
      18,    0,  105,    2, 0x09 /* Protected */,
      19,    0,  106,    2, 0x09 /* Protected */,
      20,    2,  107,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void, QMetaType::QModelIndex,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    7,   21,

       0        // eod
};

void ResultsTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ResultsTree *_t = static_cast<ResultsTree *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resultsHidden((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->checkSelected((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->selectionChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->quickStartApplication((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->context((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->copyFilename(); break;
        case 6: _t->copyFullPath(); break;
        case 7: _t->copyMessage(); break;
        case 8: _t->copyMessageId(); break;
        case 9: _t->hideResult(); break;
        case 10: _t->recheckSelectedFiles(); break;
        case 11: _t->hideAllIdResult(); break;
        case 12: _t->openContainingFolder(); break;
        case 13: _t->currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ResultsTree::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ResultsTree::resultsHidden)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ResultsTree::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ResultsTree::checkSelected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ResultsTree::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ResultsTree::selectionChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject ResultsTree::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_ResultsTree.data,
      qt_meta_data_ResultsTree,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ResultsTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResultsTree::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ResultsTree.stringdata0))
        return static_cast<void*>(const_cast< ResultsTree*>(this));
    return QTreeView::qt_metacast(_clname);
}

int ResultsTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void ResultsTree::resultsHidden(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ResultsTree::checkSelected(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ResultsTree::selectionChanged(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
