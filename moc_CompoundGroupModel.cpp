/****************************************************************************
** Meta object code from reading C++ file 'CompoundGroupModel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../MassSpecAimbot/Utility/DataContainer/CompoundGroup/CompoundGroupModel.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CompoundGroupModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MSAB__CompoundGroupModel_t {
    const uint offsetsAndSize[14];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MSAB__CompoundGroupModel_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MSAB__CompoundGroupModel_t qt_meta_stringdata_MSAB__CompoundGroupModel = {
    {
QT_MOC_LITERAL(0, 24), // "MSAB::CompoundGroupModel"
QT_MOC_LITERAL(25, 19), // "IonTraceViewChanged"
QT_MOC_LITERAL(45, 0), // ""
QT_MOC_LITERAL(46, 22), // "QList<IsotopomerGroup>"
QT_MOC_LITERAL(69, 9), // "newValues"
QT_MOC_LITERAL(79, 17), // "DataValuesChanged"
QT_MOC_LITERAL(97, 36) // "QMap<QString,QList<Isotopomer..."

    },
    "MSAB::CompoundGroupModel\0IonTraceViewChanged\0"
    "\0QList<IsotopomerGroup>\0newValues\0"
    "DataValuesChanged\0"
    "QMap<QString,QList<IsotopomerGroup>>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MSAB__CompoundGroupModel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,
       5,    1,   29,    2, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,

       0        // eod
};

void MSAB::CompoundGroupModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CompoundGroupModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->IonTraceViewChanged((*reinterpret_cast< QList<IsotopomerGroup>(*)>(_a[1]))); break;
        case 1: _t->DataValuesChanged((*reinterpret_cast< QMap<QString,QList<IsotopomerGroup>>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CompoundGroupModel::*)(QList<IsotopomerGroup> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CompoundGroupModel::IonTraceViewChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CompoundGroupModel::*)(QMap<QString,QList<IsotopomerGroup>> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CompoundGroupModel::DataValuesChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MSAB::CompoundGroupModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_MSAB__CompoundGroupModel.offsetsAndSize,
    qt_meta_data_MSAB__CompoundGroupModel,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MSAB__CompoundGroupModel_t
, QtPrivate::TypeAndForceComplete<CompoundGroupModel, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<IsotopomerGroup>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMap<QString,QList<IsotopomerGroup>>, std::false_type>



>,
    nullptr
} };


const QMetaObject *MSAB::CompoundGroupModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MSAB::CompoundGroupModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MSAB__CompoundGroupModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int MSAB::CompoundGroupModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void MSAB::CompoundGroupModel::IonTraceViewChanged(QList<IsotopomerGroup> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MSAB::CompoundGroupModel::DataValuesChanged(QMap<QString,QList<IsotopomerGroup>> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
