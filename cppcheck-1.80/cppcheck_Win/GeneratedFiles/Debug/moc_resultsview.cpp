/****************************************************************************
** Meta object code from reading C++ file 'resultsview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gui/resultsview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resultsview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ResultsView_t {
    QByteArrayData data[24];
    char stringdata0[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ResultsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ResultsView_t qt_meta_stringdata_ResultsView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ResultsView"
QT_MOC_LITERAL(1, 12, 10), // "gotResults"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 13), // "resultsHidden"
QT_MOC_LITERAL(4, 38, 6), // "hidden"
QT_MOC_LITERAL(5, 45, 13), // "checkSelected"
QT_MOC_LITERAL(6, 59, 17), // "selectedFilesList"
QT_MOC_LITERAL(7, 77, 8), // "progress"
QT_MOC_LITERAL(8, 86, 5), // "value"
QT_MOC_LITERAL(9, 92, 11), // "description"
QT_MOC_LITERAL(10, 104, 5), // "error"
QT_MOC_LITERAL(11, 110, 9), // "ErrorItem"
QT_MOC_LITERAL(12, 120, 4), // "item"
QT_MOC_LITERAL(13, 125, 18), // "collapseAllResults"
QT_MOC_LITERAL(14, 144, 16), // "expandAllResults"
QT_MOC_LITERAL(15, 161, 13), // "filterResults"
QT_MOC_LITERAL(16, 175, 6), // "filter"
QT_MOC_LITERAL(17, 182, 17), // "showHiddenResults"
QT_MOC_LITERAL(18, 200, 13), // "updateDetails"
QT_MOC_LITERAL(19, 214, 5), // "index"
QT_MOC_LITERAL(20, 220, 5), // "print"
QT_MOC_LITERAL(21, 226, 9), // "QPrinter*"
QT_MOC_LITERAL(22, 236, 7), // "printer"
QT_MOC_LITERAL(23, 244, 12) // "printPreview"

    },
    "ResultsView\0gotResults\0\0resultsHidden\0"
    "hidden\0checkSelected\0selectedFilesList\0"
    "progress\0value\0description\0error\0"
    "ErrorItem\0item\0collapseAllResults\0"
    "expandAllResults\0filterResults\0filter\0"
    "showHiddenResults\0updateDetails\0index\0"
    "print\0QPrinter*\0printer\0printPreview"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ResultsView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    1,   80,    2, 0x06 /* Public */,
       5,    1,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   86,    2, 0x0a /* Public */,
      10,    1,   91,    2, 0x0a /* Public */,
      13,    0,   94,    2, 0x0a /* Public */,
      14,    0,   95,    2, 0x0a /* Public */,
      15,    1,   96,    2, 0x0a /* Public */,
      17,    0,   99,    2, 0x0a /* Public */,
      18,    1,  100,    2, 0x0a /* Public */,
      20,    0,  103,    2, 0x0a /* Public */,
      20,    1,  104,    2, 0x0a /* Public */,
      23,    0,  107,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QStringList,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   19,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,

       0        // eod
};

void ResultsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ResultsView *_t = static_cast<ResultsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gotResults(); break;
        case 1: _t->resultsHidden((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->checkSelected((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->progress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->error((*reinterpret_cast< const ErrorItem(*)>(_a[1]))); break;
        case 5: _t->collapseAllResults(); break;
        case 6: _t->expandAllResults(); break;
        case 7: _t->filterResults((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->showHiddenResults(); break;
        case 9: _t->updateDetails((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->print(); break;
        case 11: _t->print((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 12: _t->printPreview(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ErrorItem >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ResultsView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ResultsView::gotResults)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ResultsView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ResultsView::resultsHidden)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ResultsView::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ResultsView::checkSelected)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject ResultsView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ResultsView.data,
      qt_meta_data_ResultsView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ResultsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResultsView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ResultsView.stringdata0))
        return static_cast<void*>(const_cast< ResultsView*>(this));
    return QWidget::qt_metacast(_clname);
}

int ResultsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void ResultsView::gotResults()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ResultsView::resultsHidden(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ResultsView::checkSelected(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
