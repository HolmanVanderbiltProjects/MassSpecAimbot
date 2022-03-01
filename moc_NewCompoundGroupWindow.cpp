/****************************************************************************
** Meta object code from reading C++ file 'NewCompoundGroupWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../MassSpecAimbot/Dialog/NewCompoundGroupWindow.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NewCompoundGroupWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MSAB__FocusWatcher_t {
    const uint offsetsAndSize[8];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MSAB__FocusWatcher_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MSAB__FocusWatcher_t qt_meta_stringdata_MSAB__FocusWatcher = {
    {
QT_MOC_LITERAL(0, 18), // "MSAB::FocusWatcher"
QT_MOC_LITERAL(19, 12), // "focusChanged"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 2) // "in"

    },
    "MSAB::FocusWatcher\0focusChanged\0\0in"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MSAB__FocusWatcher[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void MSAB::FocusWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FocusWatcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->focusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FocusWatcher::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FocusWatcher::focusChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MSAB::FocusWatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MSAB__FocusWatcher.offsetsAndSize,
    qt_meta_data_MSAB__FocusWatcher,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MSAB__FocusWatcher_t
, QtPrivate::TypeAndForceComplete<FocusWatcher, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>



>,
    nullptr
} };


const QMetaObject *MSAB::FocusWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MSAB::FocusWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MSAB__FocusWatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MSAB::FocusWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void MSAB::FocusWatcher::focusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MSAB__NewCompoundGroupWindow_t {
    const uint offsetsAndSize[14];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MSAB__NewCompoundGroupWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MSAB__NewCompoundGroupWindow_t qt_meta_stringdata_MSAB__NewCompoundGroupWindow = {
    {
QT_MOC_LITERAL(0, 28), // "MSAB::NewCompoundGroupWindow"
QT_MOC_LITERAL(29, 13), // "InputFinished"
QT_MOC_LITERAL(43, 0), // ""
QT_MOC_LITERAL(44, 36), // "QList<QSharedPointer<Compound..."
QT_MOC_LITERAL(81, 14), // "groupsProduecd"
QT_MOC_LITERAL(96, 9), // "TryAccept"
QT_MOC_LITERAL(106, 13) // "NameFinalized"

    },
    "MSAB::NewCompoundGroupWindow\0InputFinished\0"
    "\0QList<QSharedPointer<CompoundGroup>>\0"
    "groupsProduecd\0TryAccept\0NameFinalized"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MSAB__NewCompoundGroupWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   35,    2, 0x09,    3 /* Protected */,
       6,    0,   36,    2, 0x09,    4 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MSAB::NewCompoundGroupWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NewCompoundGroupWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->InputFinished((*reinterpret_cast< QList<QSharedPointer<CompoundGroup>>(*)>(_a[1]))); break;
        case 1: _t->TryAccept(); break;
        case 2: _t->NameFinalized(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSharedPointer<CompoundGroup>> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NewCompoundGroupWindow::*)(QList<QSharedPointer<CompoundGroup>> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewCompoundGroupWindow::InputFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MSAB::NewCompoundGroupWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_MSAB__NewCompoundGroupWindow.offsetsAndSize,
    qt_meta_data_MSAB__NewCompoundGroupWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MSAB__NewCompoundGroupWindow_t
, QtPrivate::TypeAndForceComplete<NewCompoundGroupWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<QSharedPointer<CompoundGroup>>, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MSAB::NewCompoundGroupWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MSAB::NewCompoundGroupWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MSAB__NewCompoundGroupWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MSAB::NewCompoundGroupWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void MSAB::NewCompoundGroupWindow::InputFinished(QList<QSharedPointer<CompoundGroup>> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
