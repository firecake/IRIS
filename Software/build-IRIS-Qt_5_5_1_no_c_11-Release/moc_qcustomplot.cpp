/****************************************************************************
** Meta object code from reading C++ file 'qcustomplot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../IRIS/qcustomplot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcustomplot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QCPLayerable_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCPLayerable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCPLayerable_t qt_meta_stringdata_QCPLayerable = {
    {
QT_MOC_LITERAL(0, 0, 12) // "QCPLayerable"

    },
    "QCPLayerable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPLayerable[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCPLayerable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCPLayerable::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QCPLayerable.data,
      qt_meta_data_QCPLayerable,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCPLayerable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPLayerable::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCPLayerable.stringdata0))
        return static_cast<void*>(const_cast< QCPLayerable*>(this));
    return QObject::qt_metacast(_clname);
}

int QCPLayerable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QCPAbstractPlottable_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCPAbstractPlottable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCPAbstractPlottable_t qt_meta_stringdata_QCPAbstractPlottable = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QCPAbstractPlottable"
QT_MOC_LITERAL(1, 21, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8) // "selected"

    },
    "QCPAbstractPlottable\0selectionChanged\0"
    "\0selected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPAbstractPlottable[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void QCPAbstractPlottable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCPAbstractPlottable *_t = static_cast<QCPAbstractPlottable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QCPAbstractPlottable::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCPAbstractPlottable::selectionChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QCPAbstractPlottable::staticMetaObject = {
    { &QCPLayerable::staticMetaObject, qt_meta_stringdata_QCPAbstractPlottable.data,
      qt_meta_data_QCPAbstractPlottable,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCPAbstractPlottable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPAbstractPlottable::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCPAbstractPlottable.stringdata0))
        return static_cast<void*>(const_cast< QCPAbstractPlottable*>(this));
    return QCPLayerable::qt_metacast(_clname);
}

int QCPAbstractPlottable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QCPAbstractPlottable::selectionChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QCPGraph_t {
    QByteArrayData data[13];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCPGraph_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCPGraph_t qt_meta_stringdata_QCPGraph = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QCPGraph"
QT_MOC_LITERAL(1, 9, 9), // "LineStyle"
QT_MOC_LITERAL(2, 19, 6), // "lsNone"
QT_MOC_LITERAL(3, 26, 6), // "lsLine"
QT_MOC_LITERAL(4, 33, 10), // "lsStepLeft"
QT_MOC_LITERAL(5, 44, 11), // "lsStepRight"
QT_MOC_LITERAL(6, 56, 12), // "lsStepCenter"
QT_MOC_LITERAL(7, 69, 9), // "lsImpulse"
QT_MOC_LITERAL(8, 79, 9), // "ErrorType"
QT_MOC_LITERAL(9, 89, 6), // "etNone"
QT_MOC_LITERAL(10, 96, 5), // "etKey"
QT_MOC_LITERAL(11, 102, 7), // "etValue"
QT_MOC_LITERAL(12, 110, 6) // "etBoth"

    },
    "QCPGraph\0LineStyle\0lsNone\0lsLine\0"
    "lsStepLeft\0lsStepRight\0lsStepCenter\0"
    "lsImpulse\0ErrorType\0etNone\0etKey\0"
    "etValue\0etBoth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPGraph[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    6,   22,
       8, 0x0,    4,   34,

 // enum data: key, value
       2, uint(QCPGraph::lsNone),
       3, uint(QCPGraph::lsLine),
       4, uint(QCPGraph::lsStepLeft),
       5, uint(QCPGraph::lsStepRight),
       6, uint(QCPGraph::lsStepCenter),
       7, uint(QCPGraph::lsImpulse),
       9, uint(QCPGraph::etNone),
      10, uint(QCPGraph::etKey),
      11, uint(QCPGraph::etValue),
      12, uint(QCPGraph::etBoth),

       0        // eod
};

void QCPGraph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCPGraph::staticMetaObject = {
    { &QCPAbstractPlottable::staticMetaObject, qt_meta_stringdata_QCPGraph.data,
      qt_meta_data_QCPGraph,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCPGraph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPGraph::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCPGraph.stringdata0))
        return static_cast<void*>(const_cast< QCPGraph*>(this));
    return QCPAbstractPlottable::qt_metacast(_clname);
}

int QCPGraph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QCPCurve_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCPCurve_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCPCurve_t qt_meta_stringdata_QCPCurve = {
    {
QT_MOC_LITERAL(0, 0, 8) // "QCPCurve"

    },
    "QCPCurve"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPCurve[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCPCurve::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCPCurve::staticMetaObject = {
    { &QCPAbstractPlottable::staticMetaObject, qt_meta_stringdata_QCPCurve.data,
      qt_meta_data_QCPCurve,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCPCurve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPCurve::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCPCurve.stringdata0))
        return static_cast<void*>(const_cast< QCPCurve*>(this));
    return QCPAbstractPlottable::qt_metacast(_clname);
}

int QCPCurve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QCPBars_t {
    QByteArrayData data[1];
    char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCPBars_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCPBars_t qt_meta_stringdata_QCPBars = {
    {
QT_MOC_LITERAL(0, 0, 7) // "QCPBars"

    },
    "QCPBars"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPBars[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCPBars::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCPBars::staticMetaObject = {
    { &QCPAbstractPlottable::staticMetaObject, qt_meta_stringdata_QCPBars.data,
      qt_meta_data_QCPBars,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCPBars::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPBars::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCPBars.stringdata0))
        return static_cast<void*>(const_cast< QCPBars*>(this));
    return QCPAbstractPlottable::qt_metacast(_clname);
}

int QCPBars::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QCPStatisticalBox_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCPStatisticalBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCPStatisticalBox_t qt_meta_stringdata_QCPStatisticalBox = {
    {
QT_MOC_LITERAL(0, 0, 17) // "QCPStatisticalBox"

    },
    "QCPStatisticalBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPStatisticalBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCPStatisticalBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCPStatisticalBox::staticMetaObject = {
    { &QCPAbstractPlottable::staticMetaObject, qt_meta_stringdata_QCPStatisticalBox.data,
      qt_meta_data_QCPStatisticalBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCPStatisticalBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPStatisticalBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCPStatisticalBox.stringdata0))
        return static_cast<void*>(const_cast< QCPStatisticalBox*>(this));
    return QCPAbstractPlottable::qt_metacast(_clname);
}

int QCPStatisticalBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QCPAbstractItem_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCPAbstractItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCPAbstractItem_t qt_meta_stringdata_QCPAbstractItem = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QCPAbstractItem"
QT_MOC_LITERAL(1, 16, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8) // "selected"

    },
    "QCPAbstractItem\0selectionChanged\0\0"
    "selected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPAbstractItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void QCPAbstractItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCPAbstractItem *_t = static_cast<QCPAbstractItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QCPAbstractItem::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCPAbstractItem::selectionChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QCPAbstractItem::staticMetaObject = {
    { &QCPLayerable::staticMetaObject, qt_meta_stringdata_QCPAbstractItem.data,
      qt_meta_data_QCPAbstractItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCPAbstractItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPAbstractItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCPAbstractItem.stringdata0))
        return static_cast<void*>(const_cast< QCPAbstractItem*>(this));
    return QCPLayerable::qt_metacast(_clname);
}

int QCPAbstractItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QCPAbstractItem::selectionChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QCPItemStraightLine_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCPItemStraightLine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCPItemStraightLine_t qt_meta_stringdata_QCPItemStraightLine = {
    {
QT_MOC_LITERAL(0, 0, 19) // "QCPItemStraightLine"

    },
    "QCPItemStraightLine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPItemStraightLine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCPItemStraightLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCPItemStraightLine::staticMetaObject = {
    { &QCPAbstractItem::staticMetaObject, qt_meta_stringdata_QCPItemStraightLine.data,
      qt_meta_data_QCPItemStraightLine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCPItemStraightLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemStraightLine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemStraightLine.stringdata0))
        return static_cast<void*>(const_cast< QCPItemStraightLine*>(this));
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemStraightLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QCPItemLine_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCPItemLine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCPItemLine_t qt_meta_stringdata_QCPItemLine = {
    {
QT_MOC_LITERAL(0, 0, 11) // "QCPItemLine"

    },
    "QCPItemLine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPItemLine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCPItemLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCPItemLine::staticMetaObject = {
    { &QCPAbstractItem::staticMetaObject, qt_meta_stringdata_QCPItemLine.data,
      qt_meta_data_QCPItemLine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCPItemLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemLine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemLine.stringdata0))
        return static_cast<void*>(const_cast< QCPItemLine*>(this));
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QCPItemEllipse_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCPItemEllipse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCPItemEllipse_t qt_meta_stringdata_QCPItemEllipse = {
    {
QT_MOC_LITERAL(0, 0, 14) // "QCPItemEllipse"

    },
    "QCPItemEllipse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPItemEllipse[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCPItemEllipse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCPItemEllipse::staticMetaObject = {
    { &QCPAbstractItem::staticMetaObject, qt_meta_stringdata_QCPItemEllipse.data,
      qt_meta_data_QCPItemEllipse,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCPItemEllipse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemEllipse::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemEllipse.stringdata0))
        return static_cast<void*>(const_cast< QCPItemEllipse*>(this));
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemEllipse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QCPItemRect_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCPItemRect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCPItemRect_t qt_meta_stringdata_QCPItemRect = {
    {
QT_MOC_LITERAL(0, 0, 11) // "QCPItemRect"

    },
    "QCPItemRect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPItemRect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCPItemRect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCPItemRect::staticMetaObject = {
    { &QCPAbstractItem::staticMetaObject, qt_meta_stringdata_QCPItemRect.data,
      qt_meta_data_QCPItemRect,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCPItemRect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemRect::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemRect.stringdata0))
        return static_cast<void*>(const_cast< QCPItemRect*>(this));
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemRect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QCPItemPixmap_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCPItemPixmap_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCPItemPixmap_t qt_meta_stringdata_QCPItemPixmap = {
    {
QT_MOC_LITERAL(0, 0, 13) // "QCPItemPixmap"

    },
    "QCPItemPixmap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPItemPixmap[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCPItemPixmap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCPItemPixmap::staticMetaObject = {
    { &QCPAbstractItem::staticMetaObject, qt_meta_stringdata_QCPItemPixmap.data,
      qt_meta_data_QCPItemPixmap,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCPItemPixmap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemPixmap::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemPixmap.stringdata0))
        return static_cast<void*>(const_cast< QCPItemPixmap*>(this));
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemPixmap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QCPItemText_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCPItemText_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCPItemText_t qt_meta_stringdata_QCPItemText = {
    {
QT_MOC_LITERAL(0, 0, 11) // "QCPItemText"

    },
    "QCPItemText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPItemText[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCPItemText::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCPItemText::staticMetaObject = {
    { &QCPAbstractItem::staticMetaObject, qt_meta_stringdata_QCPItemText.data,
      qt_meta_data_QCPItemText,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCPItemText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemText::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemText.stringdata0))
        return static_cast<void*>(const_cast< QCPItemText*>(this));
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QCPItemCurve_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCPItemCurve_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCPItemCurve_t qt_meta_stringdata_QCPItemCurve = {
    {
QT_MOC_LITERAL(0, 0, 12) // "QCPItemCurve"

    },
    "QCPItemCurve"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPItemCurve[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCPItemCurve::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCPItemCurve::staticMetaObject = {
    { &QCPAbstractItem::staticMetaObject, qt_meta_stringdata_QCPItemCurve.data,
      qt_meta_data_QCPItemCurve,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCPItemCurve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemCurve::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemCurve.stringdata0))
        return static_cast<void*>(const_cast< QCPItemCurve*>(this));
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemCurve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QCPItemBracket_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCPItemBracket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCPItemBracket_t qt_meta_stringdata_QCPItemBracket = {
    {
QT_MOC_LITERAL(0, 0, 14) // "QCPItemBracket"

    },
    "QCPItemBracket"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPItemBracket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCPItemBracket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCPItemBracket::staticMetaObject = {
    { &QCPAbstractItem::staticMetaObject, qt_meta_stringdata_QCPItemBracket.data,
      qt_meta_data_QCPItemBracket,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCPItemBracket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemBracket::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemBracket.stringdata0))
        return static_cast<void*>(const_cast< QCPItemBracket*>(this));
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemBracket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QCPItemTracer_t {
    QByteArrayData data[7];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCPItemTracer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCPItemTracer_t qt_meta_stringdata_QCPItemTracer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QCPItemTracer"
QT_MOC_LITERAL(1, 14, 11), // "TracerStyle"
QT_MOC_LITERAL(2, 26, 6), // "tsNone"
QT_MOC_LITERAL(3, 33, 6), // "tsPlus"
QT_MOC_LITERAL(4, 40, 11), // "tsCrosshair"
QT_MOC_LITERAL(5, 52, 8), // "tsCircle"
QT_MOC_LITERAL(6, 61, 8) // "tsSquare"

    },
    "QCPItemTracer\0TracerStyle\0tsNone\0"
    "tsPlus\0tsCrosshair\0tsCircle\0tsSquare"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPItemTracer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    5,   18,

 // enum data: key, value
       2, uint(QCPItemTracer::tsNone),
       3, uint(QCPItemTracer::tsPlus),
       4, uint(QCPItemTracer::tsCrosshair),
       5, uint(QCPItemTracer::tsCircle),
       6, uint(QCPItemTracer::tsSquare),

       0        // eod
};

void QCPItemTracer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCPItemTracer::staticMetaObject = {
    { &QCPAbstractItem::staticMetaObject, qt_meta_stringdata_QCPItemTracer.data,
      qt_meta_data_QCPItemTracer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCPItemTracer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemTracer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCPItemTracer.stringdata0))
        return static_cast<void*>(const_cast< QCPItemTracer*>(this));
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemTracer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QCPAbstractLegendItem_t {
    QByteArrayData data[4];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCPAbstractLegendItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCPAbstractLegendItem_t qt_meta_stringdata_QCPAbstractLegendItem = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QCPAbstractLegendItem"
QT_MOC_LITERAL(1, 22, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 8) // "selected"

    },
    "QCPAbstractLegendItem\0selectionChanged\0"
    "\0selected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPAbstractLegendItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void QCPAbstractLegendItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCPAbstractLegendItem *_t = static_cast<QCPAbstractLegendItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QCPAbstractLegendItem::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCPAbstractLegendItem::selectionChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QCPAbstractLegendItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QCPAbstractLegendItem.data,
      qt_meta_data_QCPAbstractLegendItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCPAbstractLegendItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPAbstractLegendItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCPAbstractLegendItem.stringdata0))
        return static_cast<void*>(const_cast< QCPAbstractLegendItem*>(this));
    return QObject::qt_metacast(_clname);
}

int QCPAbstractLegendItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QCPAbstractLegendItem::selectionChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QCPPlottableLegendItem_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCPPlottableLegendItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCPPlottableLegendItem_t qt_meta_stringdata_QCPPlottableLegendItem = {
    {
QT_MOC_LITERAL(0, 0, 22) // "QCPPlottableLegendItem"

    },
    "QCPPlottableLegendItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPPlottableLegendItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCPPlottableLegendItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCPPlottableLegendItem::staticMetaObject = {
    { &QCPAbstractLegendItem::staticMetaObject, qt_meta_stringdata_QCPPlottableLegendItem.data,
      qt_meta_data_QCPPlottableLegendItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCPPlottableLegendItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPPlottableLegendItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCPPlottableLegendItem.stringdata0))
        return static_cast<void*>(const_cast< QCPPlottableLegendItem*>(this));
    return QCPAbstractLegendItem::qt_metacast(_clname);
}

int QCPPlottableLegendItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractLegendItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QCPLegend_t {
    QByteArrayData data[19];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCPLegend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCPLegend_t qt_meta_stringdata_QCPLegend = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QCPLegend"
QT_MOC_LITERAL(1, 10, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 26), // "QCPLegend::SelectableParts"
QT_MOC_LITERAL(4, 55, 9), // "selection"
QT_MOC_LITERAL(5, 65, 13), // "PositionStyle"
QT_MOC_LITERAL(6, 79, 8), // "psManual"
QT_MOC_LITERAL(7, 88, 9), // "psTopLeft"
QT_MOC_LITERAL(8, 98, 5), // "psTop"
QT_MOC_LITERAL(9, 104, 10), // "psTopRight"
QT_MOC_LITERAL(10, 115, 7), // "psRight"
QT_MOC_LITERAL(11, 123, 13), // "psBottomRight"
QT_MOC_LITERAL(12, 137, 8), // "psBottom"
QT_MOC_LITERAL(13, 146, 12), // "psBottomLeft"
QT_MOC_LITERAL(14, 159, 6), // "psLeft"
QT_MOC_LITERAL(15, 166, 14), // "SelectablePart"
QT_MOC_LITERAL(16, 181, 6), // "spNone"
QT_MOC_LITERAL(17, 188, 11), // "spLegendBox"
QT_MOC_LITERAL(18, 200, 7) // "spItems"

    },
    "QCPLegend\0selectionChanged\0\0"
    "QCPLegend::SelectableParts\0selection\0"
    "PositionStyle\0psManual\0psTopLeft\0psTop\0"
    "psTopRight\0psRight\0psBottomRight\0"
    "psBottom\0psBottomLeft\0psLeft\0"
    "SelectablePart\0spNone\0spLegendBox\0"
    "spItems"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPLegend[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       2,   22, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // enums: name, flags, count, data
       5, 0x0,    9,   30,
      15, 0x0,    3,   48,

 // enum data: key, value
       6, uint(QCPLegend::psManual),
       7, uint(QCPLegend::psTopLeft),
       8, uint(QCPLegend::psTop),
       9, uint(QCPLegend::psTopRight),
      10, uint(QCPLegend::psRight),
      11, uint(QCPLegend::psBottomRight),
      12, uint(QCPLegend::psBottom),
      13, uint(QCPLegend::psBottomLeft),
      14, uint(QCPLegend::psLeft),
      16, uint(QCPLegend::spNone),
      17, uint(QCPLegend::spLegendBox),
      18, uint(QCPLegend::spItems),

       0        // eod
};

void QCPLegend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCPLegend *_t = static_cast<QCPLegend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< QCPLegend::SelectableParts(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QCPLegend::*_t)(QCPLegend::SelectableParts );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCPLegend::selectionChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QCPLegend::staticMetaObject = {
    { &QCPLayerable::staticMetaObject, qt_meta_stringdata_QCPLegend.data,
      qt_meta_data_QCPLegend,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCPLegend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPLegend::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCPLegend.stringdata0))
        return static_cast<void*>(const_cast< QCPLegend*>(this));
    return QCPLayerable::qt_metacast(_clname);
}

int QCPLegend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QCPLegend::selectionChanged(QCPLegend::SelectableParts _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QCPGrid_t {
    QByteArrayData data[1];
    char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCPGrid_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCPGrid_t qt_meta_stringdata_QCPGrid = {
    {
QT_MOC_LITERAL(0, 0, 7) // "QCPGrid"

    },
    "QCPGrid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPGrid[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCPGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCPGrid::staticMetaObject = {
    { &QCPLayerable::staticMetaObject, qt_meta_stringdata_QCPGrid.data,
      qt_meta_data_QCPGrid,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCPGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCPGrid.stringdata0))
        return static_cast<void*>(const_cast< QCPGrid*>(this));
    return QCPLayerable::qt_metacast(_clname);
}

int QCPGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QCPAxis_t {
    QByteArrayData data[64];
    char stringdata0[707];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCPAxis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCPAxis_t qt_meta_stringdata_QCPAxis = {
    {
QT_MOC_LITERAL(0, 0, 7), // "QCPAxis"
QT_MOC_LITERAL(1, 8, 12), // "ticksRequest"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 12), // "rangeChanged"
QT_MOC_LITERAL(4, 35, 8), // "QCPRange"
QT_MOC_LITERAL(5, 44, 8), // "newRange"
QT_MOC_LITERAL(6, 53, 16), // "selectionChanged"
QT_MOC_LITERAL(7, 70, 24), // "QCPAxis::SelectableParts"
QT_MOC_LITERAL(8, 95, 9), // "selection"
QT_MOC_LITERAL(9, 105, 8), // "setRange"
QT_MOC_LITERAL(10, 114, 5), // "range"
QT_MOC_LITERAL(11, 120, 13), // "setSelectable"
QT_MOC_LITERAL(12, 134, 10), // "selectable"
QT_MOC_LITERAL(13, 145, 11), // "setSelected"
QT_MOC_LITERAL(14, 157, 8), // "selected"
QT_MOC_LITERAL(15, 166, 8), // "axisType"
QT_MOC_LITERAL(16, 175, 8), // "AxisType"
QT_MOC_LITERAL(17, 184, 9), // "scaleType"
QT_MOC_LITERAL(18, 194, 9), // "ScaleType"
QT_MOC_LITERAL(19, 204, 12), // "scaleLogBase"
QT_MOC_LITERAL(20, 217, 8), // "axisRect"
QT_MOC_LITERAL(21, 226, 4), // "grid"
QT_MOC_LITERAL(22, 231, 7), // "subGrid"
QT_MOC_LITERAL(23, 239, 9), // "autoTicks"
QT_MOC_LITERAL(24, 249, 13), // "autoTickCount"
QT_MOC_LITERAL(25, 263, 14), // "autoTickLabels"
QT_MOC_LITERAL(26, 278, 12), // "autoTickStep"
QT_MOC_LITERAL(27, 291, 12), // "autoSubTicks"
QT_MOC_LITERAL(28, 304, 5), // "ticks"
QT_MOC_LITERAL(29, 310, 10), // "tickLabels"
QT_MOC_LITERAL(30, 321, 16), // "tickLabelPadding"
QT_MOC_LITERAL(31, 338, 13), // "tickLabelType"
QT_MOC_LITERAL(32, 352, 9), // "LabelType"
QT_MOC_LITERAL(33, 362, 13), // "tickLabelFont"
QT_MOC_LITERAL(34, 376, 17), // "tickLabelRotation"
QT_MOC_LITERAL(35, 394, 14), // "dateTimeFormat"
QT_MOC_LITERAL(36, 409, 12), // "numberFormat"
QT_MOC_LITERAL(37, 422, 8), // "tickStep"
QT_MOC_LITERAL(38, 431, 10), // "tickVector"
QT_MOC_LITERAL(39, 442, 15), // "QVector<double>"
QT_MOC_LITERAL(40, 458, 16), // "tickVectorLabels"
QT_MOC_LITERAL(41, 475, 16), // "QVector<QString>"
QT_MOC_LITERAL(42, 492, 12), // "subTickCount"
QT_MOC_LITERAL(43, 505, 7), // "basePen"
QT_MOC_LITERAL(44, 513, 7), // "gridPen"
QT_MOC_LITERAL(45, 521, 10), // "subGridPen"
QT_MOC_LITERAL(46, 532, 7), // "tickPen"
QT_MOC_LITERAL(47, 540, 10), // "subTickPen"
QT_MOC_LITERAL(48, 551, 9), // "labelFont"
QT_MOC_LITERAL(49, 561, 5), // "label"
QT_MOC_LITERAL(50, 567, 12), // "labelPadding"
QT_MOC_LITERAL(51, 580, 6), // "atLeft"
QT_MOC_LITERAL(52, 587, 7), // "atRight"
QT_MOC_LITERAL(53, 595, 5), // "atTop"
QT_MOC_LITERAL(54, 601, 8), // "atBottom"
QT_MOC_LITERAL(55, 610, 8), // "ltNumber"
QT_MOC_LITERAL(56, 619, 10), // "ltDateTime"
QT_MOC_LITERAL(57, 630, 8), // "stLinear"
QT_MOC_LITERAL(58, 639, 13), // "stLogarithmic"
QT_MOC_LITERAL(59, 653, 14), // "SelectablePart"
QT_MOC_LITERAL(60, 668, 6), // "spNone"
QT_MOC_LITERAL(61, 675, 6), // "spAxis"
QT_MOC_LITERAL(62, 682, 12), // "spTickLabels"
QT_MOC_LITERAL(63, 695, 11) // "spAxisLabel"

    },
    "QCPAxis\0ticksRequest\0\0rangeChanged\0"
    "QCPRange\0newRange\0selectionChanged\0"
    "QCPAxis::SelectableParts\0selection\0"
    "setRange\0range\0setSelectable\0selectable\0"
    "setSelected\0selected\0axisType\0AxisType\0"
    "scaleType\0ScaleType\0scaleLogBase\0"
    "axisRect\0grid\0subGrid\0autoTicks\0"
    "autoTickCount\0autoTickLabels\0autoTickStep\0"
    "autoSubTicks\0ticks\0tickLabels\0"
    "tickLabelPadding\0tickLabelType\0LabelType\0"
    "tickLabelFont\0tickLabelRotation\0"
    "dateTimeFormat\0numberFormat\0tickStep\0"
    "tickVector\0QVector<double>\0tickVectorLabels\0"
    "QVector<QString>\0subTickCount\0basePen\0"
    "gridPen\0subGridPen\0tickPen\0subTickPen\0"
    "labelFont\0label\0labelPadding\0atLeft\0"
    "atRight\0atTop\0atBottom\0ltNumber\0"
    "ltDateTime\0stLinear\0stLogarithmic\0"
    "SelectablePart\0spNone\0spAxis\0spTickLabels\0"
    "spAxisLabel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCPAxis[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
      32,   60, // properties
       4,  156, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       6,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   51,    2, 0x0a /* Public */,
      11,    1,   54,    2, 0x0a /* Public */,
      13,    1,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,   10,
    QMetaType::Void, 0x80000000 | 7,   12,
    QMetaType::Void, 0x80000000 | 7,   14,

 // properties: name, type, flags
      15, 0x80000000 | 16, 0x0009510b,
      17, 0x80000000 | 18, 0x0009510b,
      19, QMetaType::Double, 0x00095103,
      20, QMetaType::QRect, 0x00095103,
      10, 0x80000000 | 4, 0x0009510b,
      21, QMetaType::Bool, 0x00095103,
      22, QMetaType::Bool, 0x00095103,
      23, QMetaType::Bool, 0x00095103,
      24, QMetaType::Int, 0x00095103,
      25, QMetaType::Bool, 0x00095103,
      26, QMetaType::Bool, 0x00095103,
      27, QMetaType::Bool, 0x00095103,
      28, QMetaType::Bool, 0x00095103,
      29, QMetaType::Bool, 0x00095103,
      30, QMetaType::Int, 0x00095103,
      31, 0x80000000 | 32, 0x0009510b,
      33, QMetaType::QFont, 0x00095103,
      34, QMetaType::Double, 0x00095103,
      35, QMetaType::QString, 0x00095103,
      36, QMetaType::QString, 0x00095103,
      37, QMetaType::Double, 0x00095103,
      38, 0x80000000 | 39, 0x0009510b,
      40, 0x80000000 | 41, 0x0009510b,
      42, QMetaType::Int, 0x00095103,
      43, QMetaType::QPen, 0x00095103,
      44, QMetaType::QPen, 0x00095103,
      45, QMetaType::QPen, 0x00095103,
      46, QMetaType::QPen, 0x00095103,
      47, QMetaType::QPen, 0x00095103,
      48, QMetaType::QFont, 0x00095103,
      49, QMetaType::QString, 0x00095103,
      50, QMetaType::Int, 0x00095103,

 // enums: name, flags, count, data
      16, 0x0,    4,  172,
      32, 0x0,    2,  180,
      18, 0x0,    2,  184,
      59, 0x0,    4,  188,

 // enum data: key, value
      51, uint(QCPAxis::atLeft),
      52, uint(QCPAxis::atRight),
      53, uint(QCPAxis::atTop),
      54, uint(QCPAxis::atBottom),
      55, uint(QCPAxis::ltNumber),
      56, uint(QCPAxis::ltDateTime),
      57, uint(QCPAxis::stLinear),
      58, uint(QCPAxis::stLogarithmic),
      60, uint(QCPAxis::spNone),
      61, uint(QCPAxis::spAxis),
      62, uint(QCPAxis::spTickLabels),
      63, uint(QCPAxis::spAxisLabel),

       0        // eod
};

void QCPAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCPAxis *_t = static_cast<QCPAxis *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ticksRequest(); break;
        case 1: _t->rangeChanged((*reinterpret_cast< const QCPRange(*)>(_a[1]))); break;
        case 2: _t->selectionChanged((*reinterpret_cast< QCPAxis::SelectableParts(*)>(_a[1]))); break;
        case 3: _t->setRange((*reinterpret_cast< const QCPRange(*)>(_a[1]))); break;
        case 4: _t->setSelectable((*reinterpret_cast< const QCPAxis::SelectableParts(*)>(_a[1]))); break;
        case 5: _t->setSelected((*reinterpret_cast< const QCPAxis::SelectableParts(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QCPAxis::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCPAxis::ticksRequest)) {
                *result = 0;
            }
        }
        {
            typedef void (QCPAxis::*_t)(const QCPRange & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCPAxis::rangeChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QCPAxis::*_t)(QCPAxis::SelectableParts );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCPAxis::selectionChanged)) {
                *result = 2;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 22:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
        case 21:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QCPAxis *_t = static_cast<QCPAxis *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AxisType*>(_v) = _t->axisType(); break;
        case 1: *reinterpret_cast< ScaleType*>(_v) = _t->scaleType(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->scaleLogBase(); break;
        case 3: *reinterpret_cast< QRect*>(_v) = _t->axisRect(); break;
        case 4: *reinterpret_cast< QCPRange*>(_v) = _t->range(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->grid(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->subGrid(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->autoTicks(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->autoTickCount(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->autoTickLabels(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->autoTickStep(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->autoSubTicks(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->ticks(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->tickLabels(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->tickLabelPadding(); break;
        case 15: *reinterpret_cast< LabelType*>(_v) = _t->tickLabelType(); break;
        case 16: *reinterpret_cast< QFont*>(_v) = _t->tickLabelFont(); break;
        case 17: *reinterpret_cast< double*>(_v) = _t->tickLabelRotation(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->dateTimeFormat(); break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->numberFormat(); break;
        case 20: *reinterpret_cast< double*>(_v) = _t->tickStep(); break;
        case 21: *reinterpret_cast< QVector<double>*>(_v) = _t->tickVector(); break;
        case 22: *reinterpret_cast< QVector<QString>*>(_v) = _t->tickVectorLabels(); break;
        case 23: *reinterpret_cast< int*>(_v) = _t->subTickCount(); break;
        case 24: *reinterpret_cast< QPen*>(_v) = _t->basePen(); break;
        case 25: *reinterpret_cast< QPen*>(_v) = _t->gridPen(); break;
        case 26: *reinterpret_cast< QPen*>(_v) = _t->subGridPen(); break;
        case 27: *reinterpret_cast< QPen*>(_v) = _t->tickPen(); break;
        case 28: *reinterpret_cast< QPen*>(_v) = _t->subTickPen(); break;
        case 29: *reinterpret_cast< QFont*>(_v) = _t->labelFont(); break;
        case 30: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 31: *reinterpret_cast< int*>(_v) = _t->labelPadding(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QCPAxis *_t = static_cast<QCPAxis *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAxisType(*reinterpret_cast< AxisType*>(_v)); break;
        case 1: _t->setScaleType(*reinterpret_cast< ScaleType*>(_v)); break;
        case 2: _t->setScaleLogBase(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setAxisRect(*reinterpret_cast< QRect*>(_v)); break;
        case 4: _t->setRange(*reinterpret_cast< QCPRange*>(_v)); break;
        case 5: _t->setGrid(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setSubGrid(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setAutoTicks(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setAutoTickCount(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setAutoTickLabels(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setAutoTickStep(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setAutoSubTicks(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setTicks(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setTickLabels(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setTickLabelPadding(*reinterpret_cast< int*>(_v)); break;
        case 15: _t->setTickLabelType(*reinterpret_cast< LabelType*>(_v)); break;
        case 16: _t->setTickLabelFont(*reinterpret_cast< QFont*>(_v)); break;
        case 17: _t->setTickLabelRotation(*reinterpret_cast< double*>(_v)); break;
        case 18: _t->setDateTimeFormat(*reinterpret_cast< QString*>(_v)); break;
        case 19: _t->setNumberFormat(*reinterpret_cast< QString*>(_v)); break;
        case 20: _t->setTickStep(*reinterpret_cast< double*>(_v)); break;
        case 21: _t->setTickVector(*reinterpret_cast< QVector<double>*>(_v)); break;
        case 22: _t->setTickVectorLabels(*reinterpret_cast< QVector<QString>*>(_v)); break;
        case 23: _t->setSubTickCount(*reinterpret_cast< int*>(_v)); break;
        case 24: _t->setBasePen(*reinterpret_cast< QPen*>(_v)); break;
        case 25: _t->setGridPen(*reinterpret_cast< QPen*>(_v)); break;
        case 26: _t->setSubGridPen(*reinterpret_cast< QPen*>(_v)); break;
        case 27: _t->setTickPen(*reinterpret_cast< QPen*>(_v)); break;
        case 28: _t->setSubTickPen(*reinterpret_cast< QPen*>(_v)); break;
        case 29: _t->setLabelFont(*reinterpret_cast< QFont*>(_v)); break;
        case 30: _t->setLabel(*reinterpret_cast< QString*>(_v)); break;
        case 31: _t->setLabelPadding(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QCPAxis::staticMetaObject = {
    { &QCPLayerable::staticMetaObject, qt_meta_stringdata_QCPAxis.data,
      qt_meta_data_QCPAxis,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCPAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCPAxis.stringdata0))
        return static_cast<void*>(const_cast< QCPAxis*>(this));
    return QCPLayerable::qt_metacast(_clname);
}

int QCPAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 32;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCPAxis::ticksRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QCPAxis::rangeChanged(const QCPRange & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCPAxis::selectionChanged(QCPAxis::SelectableParts _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QCustomPlot_t {
    QByteArrayData data[60];
    char stringdata0[736];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCustomPlot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCustomPlot_t qt_meta_stringdata_QCustomPlot = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QCustomPlot"
QT_MOC_LITERAL(1, 12, 16), // "mouseDoubleClick"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "QMouseEvent*"
QT_MOC_LITERAL(4, 43, 5), // "event"
QT_MOC_LITERAL(5, 49, 10), // "mousePress"
QT_MOC_LITERAL(6, 60, 9), // "mouseMove"
QT_MOC_LITERAL(7, 70, 12), // "mouseRelease"
QT_MOC_LITERAL(8, 83, 10), // "mouseWheel"
QT_MOC_LITERAL(9, 94, 12), // "QWheelEvent*"
QT_MOC_LITERAL(10, 107, 14), // "plottableClick"
QT_MOC_LITERAL(11, 122, 21), // "QCPAbstractPlottable*"
QT_MOC_LITERAL(12, 144, 9), // "plottable"
QT_MOC_LITERAL(13, 154, 20), // "plottableDoubleClick"
QT_MOC_LITERAL(14, 175, 9), // "itemClick"
QT_MOC_LITERAL(15, 185, 16), // "QCPAbstractItem*"
QT_MOC_LITERAL(16, 202, 4), // "item"
QT_MOC_LITERAL(17, 207, 15), // "itemDoubleClick"
QT_MOC_LITERAL(18, 223, 9), // "axisClick"
QT_MOC_LITERAL(19, 233, 8), // "QCPAxis*"
QT_MOC_LITERAL(20, 242, 4), // "axis"
QT_MOC_LITERAL(21, 247, 23), // "QCPAxis::SelectablePart"
QT_MOC_LITERAL(22, 271, 4), // "part"
QT_MOC_LITERAL(23, 276, 15), // "axisDoubleClick"
QT_MOC_LITERAL(24, 292, 11), // "legendClick"
QT_MOC_LITERAL(25, 304, 10), // "QCPLegend*"
QT_MOC_LITERAL(26, 315, 6), // "legend"
QT_MOC_LITERAL(27, 322, 22), // "QCPAbstractLegendItem*"
QT_MOC_LITERAL(28, 345, 17), // "legendDoubleClick"
QT_MOC_LITERAL(29, 363, 10), // "titleClick"
QT_MOC_LITERAL(30, 374, 16), // "titleDoubleClick"
QT_MOC_LITERAL(31, 391, 22), // "selectionChangedByUser"
QT_MOC_LITERAL(32, 414, 12), // "beforeReplot"
QT_MOC_LITERAL(33, 427, 11), // "afterReplot"
QT_MOC_LITERAL(34, 439, 11), // "deselectAll"
QT_MOC_LITERAL(35, 451, 6), // "replot"
QT_MOC_LITERAL(36, 458, 11), // "rescaleAxes"
QT_MOC_LITERAL(37, 470, 5), // "title"
QT_MOC_LITERAL(38, 476, 8), // "axisRect"
QT_MOC_LITERAL(39, 485, 10), // "marginLeft"
QT_MOC_LITERAL(40, 496, 11), // "marginRight"
QT_MOC_LITERAL(41, 508, 9), // "marginTop"
QT_MOC_LITERAL(42, 518, 12), // "marginBottom"
QT_MOC_LITERAL(43, 531, 10), // "autoMargin"
QT_MOC_LITERAL(44, 542, 5), // "color"
QT_MOC_LITERAL(45, 548, 9), // "rangeDrag"
QT_MOC_LITERAL(46, 558, 16), // "Qt::Orientations"
QT_MOC_LITERAL(47, 575, 9), // "rangeZoom"
QT_MOC_LITERAL(48, 585, 11), // "Interaction"
QT_MOC_LITERAL(49, 597, 10), // "iRangeDrag"
QT_MOC_LITERAL(50, 608, 10), // "iRangeZoom"
QT_MOC_LITERAL(51, 619, 12), // "iMultiSelect"
QT_MOC_LITERAL(52, 632, 12), // "iSelectTitle"
QT_MOC_LITERAL(53, 645, 17), // "iSelectPlottables"
QT_MOC_LITERAL(54, 663, 11), // "iSelectAxes"
QT_MOC_LITERAL(55, 675, 13), // "iSelectLegend"
QT_MOC_LITERAL(56, 689, 12), // "iSelectItems"
QT_MOC_LITERAL(57, 702, 15), // "LayerInsertMode"
QT_MOC_LITERAL(58, 718, 8), // "limBelow"
QT_MOC_LITERAL(59, 727, 8) // "limAbove"

    },
    "QCustomPlot\0mouseDoubleClick\0\0"
    "QMouseEvent*\0event\0mousePress\0mouseMove\0"
    "mouseRelease\0mouseWheel\0QWheelEvent*\0"
    "plottableClick\0QCPAbstractPlottable*\0"
    "plottable\0plottableDoubleClick\0itemClick\0"
    "QCPAbstractItem*\0item\0itemDoubleClick\0"
    "axisClick\0QCPAxis*\0axis\0QCPAxis::SelectablePart\0"
    "part\0axisDoubleClick\0legendClick\0"
    "QCPLegend*\0legend\0QCPAbstractLegendItem*\0"
    "legendDoubleClick\0titleClick\0"
    "titleDoubleClick\0selectionChangedByUser\0"
    "beforeReplot\0afterReplot\0deselectAll\0"
    "replot\0rescaleAxes\0title\0axisRect\0"
    "marginLeft\0marginRight\0marginTop\0"
    "marginBottom\0autoMargin\0color\0rangeDrag\0"
    "Qt::Orientations\0rangeZoom\0Interaction\0"
    "iRangeDrag\0iRangeZoom\0iMultiSelect\0"
    "iSelectTitle\0iSelectPlottables\0"
    "iSelectAxes\0iSelectLegend\0iSelectItems\0"
    "LayerInsertMode\0limBelow\0limAbove"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCustomPlot[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
      10,  194, // properties
       2,  224, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       5,    1,  122,    2, 0x06 /* Public */,
       6,    1,  125,    2, 0x06 /* Public */,
       7,    1,  128,    2, 0x06 /* Public */,
       8,    1,  131,    2, 0x06 /* Public */,
      10,    2,  134,    2, 0x06 /* Public */,
      13,    2,  139,    2, 0x06 /* Public */,
      14,    2,  144,    2, 0x06 /* Public */,
      17,    2,  149,    2, 0x06 /* Public */,
      18,    3,  154,    2, 0x06 /* Public */,
      23,    3,  161,    2, 0x06 /* Public */,
      24,    3,  168,    2, 0x06 /* Public */,
      28,    3,  175,    2, 0x06 /* Public */,
      29,    1,  182,    2, 0x06 /* Public */,
      30,    1,  185,    2, 0x06 /* Public */,
      31,    0,  188,    2, 0x06 /* Public */,
      32,    0,  189,    2, 0x06 /* Public */,
      33,    0,  190,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      34,    0,  191,    2, 0x0a /* Public */,
      35,    0,  192,    2, 0x0a /* Public */,
      36,    0,  193,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 9,    4,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 3,   12,    4,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 3,   12,    4,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 3,   16,    4,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 3,   16,    4,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 21, 0x80000000 | 3,   20,   22,    4,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 21, 0x80000000 | 3,   20,   22,    4,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 27, 0x80000000 | 3,   26,   16,    4,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 27, 0x80000000 | 3,   26,   16,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      37, QMetaType::QString, 0x00095103,
      38, QMetaType::QRect, 0x00095103,
      39, QMetaType::Int, 0x00095103,
      40, QMetaType::Int, 0x00095103,
      41, QMetaType::Int, 0x00095103,
      42, QMetaType::Int, 0x00095103,
      43, QMetaType::Int, 0x00095103,
      44, QMetaType::QColor, 0x00095103,
      45, 0x80000000 | 46, 0x0009510b,
      47, 0x80000000 | 46, 0x0009510b,

 // enums: name, flags, count, data
      48, 0x0,    8,  232,
      57, 0x0,    2,  248,

 // enum data: key, value
      49, uint(QCustomPlot::iRangeDrag),
      50, uint(QCustomPlot::iRangeZoom),
      51, uint(QCustomPlot::iMultiSelect),
      52, uint(QCustomPlot::iSelectTitle),
      53, uint(QCustomPlot::iSelectPlottables),
      54, uint(QCustomPlot::iSelectAxes),
      55, uint(QCustomPlot::iSelectLegend),
      56, uint(QCustomPlot::iSelectItems),
      58, uint(QCustomPlot::limBelow),
      59, uint(QCustomPlot::limAbove),

       0        // eod
};

void QCustomPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCustomPlot *_t = static_cast<QCustomPlot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mouseDoubleClick((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->mousePress((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->mouseMove((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->mouseRelease((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->mouseWheel((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 5: _t->plottableClick((*reinterpret_cast< QCPAbstractPlottable*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 6: _t->plottableDoubleClick((*reinterpret_cast< QCPAbstractPlottable*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 7: _t->itemClick((*reinterpret_cast< QCPAbstractItem*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 8: _t->itemDoubleClick((*reinterpret_cast< QCPAbstractItem*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 9: _t->axisClick((*reinterpret_cast< QCPAxis*(*)>(_a[1])),(*reinterpret_cast< QCPAxis::SelectablePart(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 10: _t->axisDoubleClick((*reinterpret_cast< QCPAxis*(*)>(_a[1])),(*reinterpret_cast< QCPAxis::SelectablePart(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 11: _t->legendClick((*reinterpret_cast< QCPLegend*(*)>(_a[1])),(*reinterpret_cast< QCPAbstractLegendItem*(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 12: _t->legendDoubleClick((*reinterpret_cast< QCPLegend*(*)>(_a[1])),(*reinterpret_cast< QCPAbstractLegendItem*(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 13: _t->titleClick((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 14: _t->titleDoubleClick((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 15: _t->selectionChangedByUser(); break;
        case 16: _t->beforeReplot(); break;
        case 17: _t->afterReplot(); break;
        case 18: _t->deselectAll(); break;
        case 19: _t->replot(); break;
        case 20: _t->rescaleAxes(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAbstractPlottable* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAbstractPlottable* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAbstractItem* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAbstractItem* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAxis* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAxis* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAbstractLegendItem* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPLegend* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAbstractLegendItem* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPLegend* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QCustomPlot::*_t)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCustomPlot::mouseDoubleClick)) {
                *result = 0;
            }
        }
        {
            typedef void (QCustomPlot::*_t)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCustomPlot::mousePress)) {
                *result = 1;
            }
        }
        {
            typedef void (QCustomPlot::*_t)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCustomPlot::mouseMove)) {
                *result = 2;
            }
        }
        {
            typedef void (QCustomPlot::*_t)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCustomPlot::mouseRelease)) {
                *result = 3;
            }
        }
        {
            typedef void (QCustomPlot::*_t)(QWheelEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCustomPlot::mouseWheel)) {
                *result = 4;
            }
        }
        {
            typedef void (QCustomPlot::*_t)(QCPAbstractPlottable * , QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCustomPlot::plottableClick)) {
                *result = 5;
            }
        }
        {
            typedef void (QCustomPlot::*_t)(QCPAbstractPlottable * , QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCustomPlot::plottableDoubleClick)) {
                *result = 6;
            }
        }
        {
            typedef void (QCustomPlot::*_t)(QCPAbstractItem * , QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCustomPlot::itemClick)) {
                *result = 7;
            }
        }
        {
            typedef void (QCustomPlot::*_t)(QCPAbstractItem * , QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCustomPlot::itemDoubleClick)) {
                *result = 8;
            }
        }
        {
            typedef void (QCustomPlot::*_t)(QCPAxis * , QCPAxis::SelectablePart , QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCustomPlot::axisClick)) {
                *result = 9;
            }
        }
        {
            typedef void (QCustomPlot::*_t)(QCPAxis * , QCPAxis::SelectablePart , QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCustomPlot::axisDoubleClick)) {
                *result = 10;
            }
        }
        {
            typedef void (QCustomPlot::*_t)(QCPLegend * , QCPAbstractLegendItem * , QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCustomPlot::legendClick)) {
                *result = 11;
            }
        }
        {
            typedef void (QCustomPlot::*_t)(QCPLegend * , QCPAbstractLegendItem * , QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCustomPlot::legendDoubleClick)) {
                *result = 12;
            }
        }
        {
            typedef void (QCustomPlot::*_t)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCustomPlot::titleClick)) {
                *result = 13;
            }
        }
        {
            typedef void (QCustomPlot::*_t)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCustomPlot::titleDoubleClick)) {
                *result = 14;
            }
        }
        {
            typedef void (QCustomPlot::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCustomPlot::selectionChangedByUser)) {
                *result = 15;
            }
        }
        {
            typedef void (QCustomPlot::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCustomPlot::beforeReplot)) {
                *result = 16;
            }
        }
        {
            typedef void (QCustomPlot::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCustomPlot::afterReplot)) {
                *result = 17;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QCustomPlot *_t = static_cast<QCustomPlot *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast< QRect*>(_v) = _t->axisRect(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->marginLeft(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->marginRight(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->marginTop(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->marginBottom(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->autoMargin(); break;
        case 7: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 8: *reinterpret_cast< Qt::Orientations*>(_v) = _t->rangeDrag(); break;
        case 9: *reinterpret_cast< Qt::Orientations*>(_v) = _t->rangeZoom(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QCustomPlot *_t = static_cast<QCustomPlot *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setAxisRect(*reinterpret_cast< QRect*>(_v)); break;
        case 2: _t->setMarginLeft(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setMarginRight(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setMarginTop(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setMarginBottom(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setAutoMargin(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 8: _t->setRangeDrag(*reinterpret_cast< Qt::Orientations*>(_v)); break;
        case 9: _t->setRangeZoom(*reinterpret_cast< Qt::Orientations*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QCustomPlot::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QCustomPlot.data,
      qt_meta_data_QCustomPlot,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCustomPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCustomPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCustomPlot.stringdata0))
        return static_cast<void*>(const_cast< QCustomPlot*>(this));
    return QWidget::qt_metacast(_clname);
}

int QCustomPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCustomPlot::mouseDoubleClick(QMouseEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCustomPlot::mousePress(QMouseEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCustomPlot::mouseMove(QMouseEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCustomPlot::mouseRelease(QMouseEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QCustomPlot::mouseWheel(QWheelEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QCustomPlot::plottableClick(QCPAbstractPlottable * _t1, QMouseEvent * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QCustomPlot::plottableDoubleClick(QCPAbstractPlottable * _t1, QMouseEvent * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QCustomPlot::itemClick(QCPAbstractItem * _t1, QMouseEvent * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QCustomPlot::itemDoubleClick(QCPAbstractItem * _t1, QMouseEvent * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QCustomPlot::axisClick(QCPAxis * _t1, QCPAxis::SelectablePart _t2, QMouseEvent * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QCustomPlot::axisDoubleClick(QCPAxis * _t1, QCPAxis::SelectablePart _t2, QMouseEvent * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QCustomPlot::legendClick(QCPLegend * _t1, QCPAbstractLegendItem * _t2, QMouseEvent * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QCustomPlot::legendDoubleClick(QCPLegend * _t1, QCPAbstractLegendItem * _t2, QMouseEvent * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QCustomPlot::titleClick(QMouseEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QCustomPlot::titleDoubleClick(QMouseEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QCustomPlot::selectionChangedByUser()
{
    QMetaObject::activate(this, &staticMetaObject, 15, Q_NULLPTR);
}

// SIGNAL 16
void QCustomPlot::beforeReplot()
{
    QMetaObject::activate(this, &staticMetaObject, 16, Q_NULLPTR);
}

// SIGNAL 17
void QCustomPlot::afterReplot()
{
    QMetaObject::activate(this, &staticMetaObject, 17, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
