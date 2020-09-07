/****************************************************************************
** Meta object code from reading C++ file 'acclevel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SAT/acclevel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'acclevel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_acclevel_t {
    QByteArrayData data[20];
    char stringdata[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_acclevel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_acclevel_t qt_meta_stringdata_acclevel = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 13),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 12),
QT_MOC_LITERAL(4, 37, 8),
QT_MOC_LITERAL(5, 46, 7),
QT_MOC_LITERAL(6, 54, 4),
QT_MOC_LITERAL(7, 59, 23),
QT_MOC_LITERAL(8, 83, 3),
QT_MOC_LITERAL(9, 87, 14),
QT_MOC_LITERAL(10, 102, 11),
QT_MOC_LITERAL(11, 114, 5),
QT_MOC_LITERAL(12, 120, 10),
QT_MOC_LITERAL(13, 131, 3),
QT_MOC_LITERAL(14, 135, 10),
QT_MOC_LITERAL(15, 146, 3),
QT_MOC_LITERAL(16, 150, 10),
QT_MOC_LITERAL(17, 161, 3),
QT_MOC_LITERAL(18, 165, 10),
QT_MOC_LITERAL(19, 176, 6)
    },
    "acclevel\0newLevelesAcc\0\0QVector<int>\0"
    "levelacc\0newAcc2\0acc2\0sendCambiosInclinometro\0"
    "acc\0cambioLevelAcc\0accesoOnacc\0onacc\0"
    "cambioACCX\0ccx\0cambioACCY\0ccy\0cambioACCZ\0"
    "ccz\0cambioZero\0cczero"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_acclevel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    2,   62,    2, 0x06 /* Public */,
       7,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   70,    2, 0x0a /* Public */,
      10,    1,   73,    2, 0x0a /* Public */,
      12,    1,   76,    2, 0x0a /* Public */,
      14,    1,   79,    2, 0x0a /* Public */,
      16,    1,   82,    2, 0x0a /* Public */,
      18,    1,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    6,
    QMetaType::Void, 0x80000000 | 3,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   19,

       0        // eod
};

void acclevel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        acclevel *_t = static_cast<acclevel *>(_o);
        switch (_id) {
        case 0: _t->newLevelesAcc((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 1: _t->newAcc2((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVector<int>(*)>(_a[2]))); break;
        case 2: _t->sendCambiosInclinometro((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 3: _t->cambioLevelAcc((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->accesoOnacc((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->cambioACCX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->cambioACCY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->cambioACCZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->cambioZero((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (acclevel::*_t)(QVector<int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&acclevel::newLevelesAcc)) {
                *result = 0;
            }
        }
        {
            typedef void (acclevel::*_t)(QString , QVector<int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&acclevel::newAcc2)) {
                *result = 1;
            }
        }
        {
            typedef void (acclevel::*_t)(QVector<int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&acclevel::sendCambiosInclinometro)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject acclevel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_acclevel.data,
      qt_meta_data_acclevel,  qt_static_metacall, 0, 0}
};


const QMetaObject *acclevel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *acclevel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_acclevel.stringdata))
        return static_cast<void*>(const_cast< acclevel*>(this));
    return QWidget::qt_metacast(_clname);
}

int acclevel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void acclevel::newLevelesAcc(QVector<int> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void acclevel::newAcc2(QString _t1, QVector<int> _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void acclevel::sendCambiosInclinometro(QVector<int> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
