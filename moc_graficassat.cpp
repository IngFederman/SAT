/****************************************************************************
** Meta object code from reading C++ file 'graficassat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SAT/graficassat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graficassat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_graficasSat_t {
    QByteArrayData data[16];
    char stringdata[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_graficasSat_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_graficasSat_t qt_meta_stringdata_graficasSat = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 10),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 20),
QT_MOC_LITERAL(4, 45, 12),
QT_MOC_LITERAL(5, 58, 2),
QT_MOC_LITERAL(6, 61, 17),
QT_MOC_LITERAL(7, 79, 2),
QT_MOC_LITERAL(8, 82, 18),
QT_MOC_LITERAL(9, 101, 1),
QT_MOC_LITERAL(10, 103, 8),
QT_MOC_LITERAL(11, 112, 2),
QT_MOC_LITERAL(12, 115, 9),
QT_MOC_LITERAL(13, 125, 5),
QT_MOC_LITERAL(14, 131, 9),
QT_MOC_LITERAL(15, 141, 2)
    },
    "graficasSat\0zoomEstado\0\0setPuntoInicialZooom\0"
    "QMouseEvent*\0pi\0setPuntoFinalZoom\0pf\0"
    "setPuntoIntermedio\0p\0exitZoom\0ez\0"
    "setRangeX\0range\0setCursor\0cu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_graficasSat[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   50,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x0a /* Public */,
       8,    1,   56,    2, 0x0a /* Public */,
      10,    1,   59,    2, 0x0a /* Public */,
      12,    1,   62,    2, 0x0a /* Public */,
      14,    1,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    7,
    QMetaType::Void, 0x80000000 | 4,    9,
    QMetaType::Void, 0x80000000 | 4,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, 0x80000000 | 4,   15,

       0        // eod
};

void graficasSat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        graficasSat *_t = static_cast<graficasSat *>(_o);
        switch (_id) {
        case 0: _t->zoomEstado(); break;
        case 1: _t->setPuntoInicialZooom((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->setPuntoFinalZoom((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->setPuntoIntermedio((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->exitZoom((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->setRangeX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setCursor((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (graficasSat::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&graficasSat::zoomEstado)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject graficasSat::staticMetaObject = {
    { &QCustomPlot::staticMetaObject, qt_meta_stringdata_graficasSat.data,
      qt_meta_data_graficasSat,  qt_static_metacall, 0, 0}
};


const QMetaObject *graficasSat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *graficasSat::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_graficasSat.stringdata))
        return static_cast<void*>(const_cast< graficasSat*>(this));
    return QCustomPlot::qt_metacast(_clname);
}

int graficasSat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCustomPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void graficasSat::zoomEstado()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
