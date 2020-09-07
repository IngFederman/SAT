/****************************************************************************
** Meta object code from reading C++ file 'ventaexcell.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SAT/ventaexcell.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ventaexcell.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ventaexcell_t {
    QByteArrayData data[6];
    char stringdata[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ventaexcell_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ventaexcell_t qt_meta_stringdata_ventaexcell = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 19),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 1),
QT_MOC_LITERAL(4, 35, 17),
QT_MOC_LITERAL(5, 53, 3)
    },
    "ventaexcell\0mensajesInformacion\0\0a\0"
    "setProgresoExcell\0pro"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ventaexcell[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void ventaexcell::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ventaexcell *_t = static_cast<ventaexcell *>(_o);
        switch (_id) {
        case 0: _t->mensajesInformacion((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setProgresoExcell((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ventaexcell::staticMetaObject = {
    { &QWizard::staticMetaObject, qt_meta_stringdata_ventaexcell.data,
      qt_meta_data_ventaexcell,  qt_static_metacall, 0, 0}
};


const QMetaObject *ventaexcell::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ventaexcell::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ventaexcell.stringdata))
        return static_cast<void*>(const_cast< ventaexcell*>(this));
    return QWizard::qt_metacast(_clname);
}

int ventaexcell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_primerapag_t {
    QByteArrayData data[1];
    char stringdata[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_primerapag_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_primerapag_t qt_meta_stringdata_primerapag = {
    {
QT_MOC_LITERAL(0, 0, 10)
    },
    "primerapag"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_primerapag[] = {

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

void primerapag::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject primerapag::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_primerapag.data,
      qt_meta_data_primerapag,  qt_static_metacall, 0, 0}
};


const QMetaObject *primerapag::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *primerapag::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_primerapag.stringdata))
        return static_cast<void*>(const_cast< primerapag*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int primerapag::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_excellestacion_t {
    QByteArrayData data[1];
    char stringdata[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_excellestacion_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_excellestacion_t qt_meta_stringdata_excellestacion = {
    {
QT_MOC_LITERAL(0, 0, 14)
    },
    "excellestacion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_excellestacion[] = {

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

void excellestacion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject excellestacion::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_excellestacion.data,
      qt_meta_data_excellestacion,  qt_static_metacall, 0, 0}
};


const QMetaObject *excellestacion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *excellestacion::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_excellestacion.stringdata))
        return static_cast<void*>(const_cast< excellestacion*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int excellestacion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_exportacionexcell_t {
    QByteArrayData data[1];
    char stringdata[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_exportacionexcell_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_exportacionexcell_t qt_meta_stringdata_exportacionexcell = {
    {
QT_MOC_LITERAL(0, 0, 17)
    },
    "exportacionexcell"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_exportacionexcell[] = {

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

void exportacionexcell::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject exportacionexcell::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_exportacionexcell.data,
      qt_meta_data_exportacionexcell,  qt_static_metacall, 0, 0}
};


const QMetaObject *exportacionexcell::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *exportacionexcell::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_exportacionexcell.stringdata))
        return static_cast<void*>(const_cast< exportacionexcell*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int exportacionexcell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
