/****************************************************************************
** Meta object code from reading C++ file 'threadresult.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gui/threadresult.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'threadresult.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ThreadResult_t {
    QByteArrayData data[13];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThreadResult_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThreadResult_t qt_meta_stringdata_ThreadResult = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ThreadResult"
QT_MOC_LITERAL(1, 13, 8), // "progress"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "value"
QT_MOC_LITERAL(4, 29, 11), // "description"
QT_MOC_LITERAL(5, 41, 5), // "error"
QT_MOC_LITERAL(6, 47, 9), // "ErrorItem"
QT_MOC_LITERAL(7, 57, 4), // "item"
QT_MOC_LITERAL(8, 62, 3), // "log"
QT_MOC_LITERAL(9, 66, 7), // "logline"
QT_MOC_LITERAL(10, 74, 10), // "debugError"
QT_MOC_LITERAL(11, 85, 11), // "fileChecked"
QT_MOC_LITERAL(12, 97, 4) // "file"

    },
    "ThreadResult\0progress\0\0value\0description\0"
    "error\0ErrorItem\0item\0log\0logline\0"
    "debugError\0fileChecked\0file"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThreadResult[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    1,   44,    2, 0x06 /* Public */,
       8,    1,   47,    2, 0x06 /* Public */,
      10,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void ThreadResult::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ThreadResult *_t = static_cast<ThreadResult *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->progress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->error((*reinterpret_cast< const ErrorItem(*)>(_a[1]))); break;
        case 2: _t->log((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->debugError((*reinterpret_cast< const ErrorItem(*)>(_a[1]))); break;
        case 4: _t->fileChecked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ThreadResult::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ThreadResult::progress)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ThreadResult::*_t)(const ErrorItem & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ThreadResult::error)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ThreadResult::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ThreadResult::log)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ThreadResult::*_t)(const ErrorItem & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ThreadResult::debugError)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject ThreadResult::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ThreadResult.data,
      qt_meta_data_ThreadResult,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ThreadResult::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThreadResult::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ThreadResult.stringdata0))
        return static_cast<void*>(const_cast< ThreadResult*>(this));
    if (!strcmp(_clname, "ErrorLogger"))
        return static_cast< ErrorLogger*>(const_cast< ThreadResult*>(this));
    return QObject::qt_metacast(_clname);
}

int ThreadResult::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ThreadResult::progress(int _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ThreadResult::error(const ErrorItem & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ThreadResult::log(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ThreadResult::debugError(const ErrorItem & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
