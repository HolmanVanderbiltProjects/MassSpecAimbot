/****************************************************************************
** Meta object code from reading C++ file 'NewCompoundGroupIonWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../MassSpecAimbot/Dialog/NewCompoundGroupIonWindow.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NewCompoundGroupIonWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MSAB__NewCompoundGroupIonWindow_t {
    const uint offsetsAndSize[12];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MSAB__NewCompoundGroupIonWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MSAB__NewCompoundGroupIonWindow_t qt_meta_stringdata_MSAB__NewCompoundGroupIonWindow = {
    {
QT_MOC_LITERAL(0, 31), // "MSAB::NewCompoundGroupIonWindow"
QT_MOC_LITERAL(32, 13), // "InputFinished"
QT_MOC_LITERAL(46, 0), // ""
QT_MOC_LITERAL(47, 17), // "CompoundGroupIon*"
QT_MOC_LITERAL(65, 11), // "ionProduecd"
QT_MOC_LITERAL(77, 9) // "TryAccept"

    },
    "MSAB::NewCompoundGroupIonWindow\0"
    "InputFinished\0\0CompoundGroupIon*\0"
    "ionProduecd\0TryAccept"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MSAB__NewCompoundGroupIonWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   29,    2, 0x09,    3 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void MSAB::NewCompoundGroupIonWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NewCompoundGroupIonWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->InputFinished((*reinterpret_cast< CompoundGroupIon*(*)>(_a[1]))); break;
        case 1: _t->TryAccept(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NewCompoundGroupIonWindow::*)(CompoundGroupIon * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewCompoundGroupIonWindow::InputFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MSAB::NewCompoundGroupIonWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_MSAB__NewCompoundGroupIonWindow.offsetsAndSize,
    qt_meta_data_MSAB__NewCompoundGroupIonWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MSAB__NewCompoundGroupIonWindow_t
, QtPrivate::TypeAndForceComplete<NewCompoundGroupIonWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<CompoundGroupIon *, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MSAB::NewCompoundGroupIonWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MSAB::NewCompoundGroupIonWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MSAB__NewCompoundGroupIonWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MSAB::NewCompoundGroupIonWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void MSAB::NewCompoundGroupIonWindow::InputFinished(CompoundGroupIon * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MSAB__LabelBoxDelegate_t {
    const uint offsetsAndSize[2];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MSAB__LabelBoxDelegate_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MSAB__LabelBoxDelegate_t qt_meta_stringdata_MSAB__LabelBoxDelegate = {
    {
QT_MOC_LITERAL(0, 22) // "MSAB::LabelBoxDelegate"

    },
    "MSAB::LabelBoxDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MSAB__LabelBoxDelegate[] = {

 // content:
      10,       // revision
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

void MSAB::LabelBoxDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject MSAB::LabelBoxDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_MSAB__LabelBoxDelegate.offsetsAndSize,
    qt_meta_data_MSAB__LabelBoxDelegate,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MSAB__LabelBoxDelegate_t
, QtPrivate::TypeAndForceComplete<LabelBoxDelegate, std::true_type>



>,
    nullptr
} };


const QMetaObject *MSAB::LabelBoxDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MSAB::LabelBoxDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MSAB__LabelBoxDelegate.stringdata0))
        return static_cast<void*>(this);
    return QItemDelegate::qt_metacast(_clname);
}

int MSAB::LabelBoxDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
