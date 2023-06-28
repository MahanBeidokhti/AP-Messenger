/****************************************************************************
** Meta object code from reading C++ file 'api.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../massenger/api.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'api.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_API_t {
    const uint offsetsAndSize[16];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_API_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_API_t qt_meta_stringdata_API = {
    {
QT_MOC_LITERAL(0, 3), // "API"
QT_MOC_LITERAL(4, 7), // "NoError"
QT_MOC_LITERAL(12, 0), // ""
QT_MOC_LITERAL(13, 11), // "QByteArray*"
QT_MOC_LITERAL(25, 4), // "data"
QT_MOC_LITERAL(30, 5), // "Error"
QT_MOC_LITERAL(36, 14), // "QNetworkReply*"
QT_MOC_LITERAL(51, 6) // "Gather"

    },
    "API\0NoError\0\0QByteArray*\0data\0Error\0"
    "QNetworkReply*\0Gather"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_API[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,
       5,    1,   35,    2, 0x06,    3 /* Public */,
       7,    0,   38,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void,

       0        // eod
};

void API::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<API *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->NoError((*reinterpret_cast< std::add_pointer_t<QByteArray*>>(_a[1]))); break;
        case 1: _t->Error((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 2: _t->Gather(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (API::*)(QByteArray * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&API::NoError)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (API::*)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&API::Error)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (API::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&API::Gather)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject API::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_API.offsetsAndSize,
    qt_meta_data_API,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_API_t
, QtPrivate::TypeAndForceComplete<API, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *API::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *API::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_API.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int API::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void API::NoError(QByteArray * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void API::Error(QNetworkReply * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void API::Gather()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
