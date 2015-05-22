/****************************************************************************
** Meta object code from reading C++ file 'qspectroviewfinder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../IRIS/qspectroviewfinder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qspectroviewfinder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QSpectroViewfinder_t {
    QByteArrayData data[4];
    char stringdata[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSpectroViewfinder_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSpectroViewfinder_t qt_meta_stringdata_QSpectroViewfinder = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QSpectroViewfinder"
QT_MOC_LITERAL(1, 19, 7), // "updateY"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 1) // "y"

    },
    "QSpectroViewfinder\0updateY\0\0y"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSpectroViewfinder[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,

       0        // eod
};

void QSpectroViewfinder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSpectroViewfinder *_t = static_cast<QSpectroViewfinder *>(_o);
        switch (_id) {
        case 0: _t->updateY((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QSpectroViewfinder::staticMetaObject = {
    { &QCameraViewfinder::staticMetaObject, qt_meta_stringdata_QSpectroViewfinder.data,
      qt_meta_data_QSpectroViewfinder,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QSpectroViewfinder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSpectroViewfinder::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QSpectroViewfinder.stringdata))
        return static_cast<void*>(const_cast< QSpectroViewfinder*>(this));
    return QCameraViewfinder::qt_metacast(_clname);
}

int QSpectroViewfinder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCameraViewfinder::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
