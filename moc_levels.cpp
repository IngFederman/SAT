/****************************************************************************
** Meta object code from reading C++ file 'levels.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SAT/levels.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'levels.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_levels_t {
    QByteArrayData data[19];
    char stringdata[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_levels_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_levels_t qt_meta_stringdata_levels = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 11),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 12),
QT_MOC_LITERAL(4, 33, 24),
QT_MOC_LITERAL(5, 58, 9),
QT_MOC_LITERAL(6, 68, 5),
QT_MOC_LITERAL(7, 74, 8),
QT_MOC_LITERAL(8, 83, 2),
QT_MOC_LITERAL(9, 86, 16),
QT_MOC_LITERAL(10, 103, 2),
QT_MOC_LITERAL(11, 106, 16),
QT_MOC_LITERAL(12, 123, 2),
QT_MOC_LITERAL(13, 126, 15),
QT_MOC_LITERAL(14, 142, 3),
QT_MOC_LITERAL(15, 146, 12),
QT_MOC_LITERAL(16, 159, 2),
QT_MOC_LITERAL(17, 162, 11),
QT_MOC_LITERAL(18, 174, 3)
    },
    "levels\0cambioleves\0\0QVector<int>\0"
    "cambioNivelesHidrologica\0newLevels\0"
    "level\0accesoON\0on\0setNivelInferior\0"
    "ni\0setNivelAmarillo\0na\0setNivelNaranja\0"
    "nar\0setNivelRoja\0nr\0setNivelRef\0nre"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_levels[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   65,    2, 0x0a /* Public */,
       7,    1,   68,    2, 0x0a /* Public */,
       9,    1,   71,    2, 0x0a /* Public */,
      11,    1,   74,    2, 0x0a /* Public */,
      13,    1,   77,    2, 0x0a /* Public */,
      15,    1,   80,    2, 0x0a /* Public */,
      17,    1,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   18,

       0        // eod
};

void levels::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        levels *_t = static_cast<levels *>(_o);
        switch (_id) {
        case 0: _t->cambioleves((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 1: _t->cambioNivelesHidrologica((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 2: _t->newLevels((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->accesoON((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setNivelInferior((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setNivelAmarillo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setNivelNaranja((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setNivelRoja((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setNivelRef((*reinterpret_cast< int(*)>(_a[1]))); break;
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
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (levels::*_t)(QVector<int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&levels::cambioleves)) {
                *result = 0;
            }
        }
        {
            typedef void (levels::*_t)(QVector<int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&levels::cambioNivelesHidrologica)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject levels::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_levels.data,
      qt_meta_data_levels,  qt_static_metacall, 0, 0}
};


const QMetaObject *levels::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *levels::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_levels.stringdata))
        return static_cast<void*>(const_cast< levels*>(this));
    return QWidget::qt_metacast(_clname);
}

int levels::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void levels::cambioleves(QVector<int> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void levels::cambioNivelesHidrologica(QVector<int> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
