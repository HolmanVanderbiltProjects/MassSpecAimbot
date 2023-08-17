/****************************************************************************
** Meta object code from reading C++ file 'SpectraFileHandler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../MassSpecAimbot/Dialog/SpectraFileHandler.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SpectraFileHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MSAB__SpectraFileWorker_t {
    const uint offsetsAndSize[24];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MSAB__SpectraFileWorker_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MSAB__SpectraFileWorker_t qt_meta_stringdata_MSAB__SpectraFileWorker = {
    {
QT_MOC_LITERAL(0, 23), // "MSAB::SpectraFileWorker"
QT_MOC_LITERAL(24, 11), // "resultReady"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 5), // "rowID"
QT_MOC_LITERAL(43, 14), // "LoadExperiment"
QT_MOC_LITERAL(58, 30), // "QSharedPointer<MSABExperiment>"
QT_MOC_LITERAL(89, 16), // "targetExperiment"
QT_MOC_LITERAL(106, 43), // "QMap<QString,QSharedPointer<C..."
QT_MOC_LITERAL(150, 6), // "groups"
QT_MOC_LITERAL(157, 15), // "ClearExperiment"
QT_MOC_LITERAL(173, 11), // "DoWork_Load"
QT_MOC_LITERAL(185, 12) // "DoWork_Clear"

    },
    "MSAB::SpectraFileWorker\0resultReady\0"
    "\0rowID\0LoadExperiment\0"
    "QSharedPointer<MSABExperiment>\0"
    "targetExperiment\0"
    "QMap<QString,QSharedPointer<CompoundGroup>>\0"
    "groups\0ClearExperiment\0DoWork_Load\0"
    "DoWork_Clear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MSAB__SpectraFileWorker[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    3,   53,    2, 0x0a,    3 /* Public */,
       4,    2,   60,    2, 0x2a,    7 /* Public | MethodCloned */,
       9,    2,   65,    2, 0x0a,   10 /* Public */,
      10,    0,   70,    2, 0x0a,   13 /* Public */,
      11,    0,   71,    2, 0x0a,   14 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, 0x80000000 | 7,    6,    3,    8,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MSAB::SpectraFileWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SpectraFileWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resultReady((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->LoadExperiment((*reinterpret_cast< QSharedPointer<MSABExperiment>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QMap<QString,QSharedPointer<CompoundGroup>>(*)>(_a[3]))); break;
        case 2: _t->LoadExperiment((*reinterpret_cast< QSharedPointer<MSABExperiment>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->ClearExperiment((*reinterpret_cast< QSharedPointer<MSABExperiment>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->DoWork_Load(); break;
        case 5: _t->DoWork_Clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SpectraFileWorker::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpectraFileWorker::resultReady)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MSAB::SpectraFileWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MSAB__SpectraFileWorker.offsetsAndSize,
    qt_meta_data_MSAB__SpectraFileWorker,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MSAB__SpectraFileWorker_t
, QtPrivate::TypeAndForceComplete<SpectraFileWorker, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QSharedPointer<MSABExperiment>, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QMap<QString,QSharedPointer<CompoundGroup>>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QSharedPointer<MSABExperiment>, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QSharedPointer<MSABExperiment>, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MSAB::SpectraFileWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MSAB::SpectraFileWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MSAB__SpectraFileWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MSAB::SpectraFileWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MSAB::SpectraFileWorker::resultReady(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MSAB__SpectraFileHandler_t {
    const uint offsetsAndSize[46];
    char stringdata0[410];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MSAB__SpectraFileHandler_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MSAB__SpectraFileHandler_t qt_meta_stringdata_MSAB__SpectraFileHandler = {
    {
QT_MOC_LITERAL(0, 24), // "MSAB::SpectraFileHandler"
QT_MOC_LITERAL(25, 18), // "ExperimentSelected"
QT_MOC_LITERAL(44, 0), // ""
QT_MOC_LITERAL(45, 5), // "rowID"
QT_MOC_LITERAL(51, 17), // "MaxMSLevelChanged"
QT_MOC_LITERAL(69, 8), // "newLevel"
QT_MOC_LITERAL(78, 11), // "AllUpToDate"
QT_MOC_LITERAL(90, 41), // "QMap<int,QSharedPointer<MSABE..."
QT_MOC_LITERAL(132, 7), // "filemap"
QT_MOC_LITERAL(140, 18), // "ShowFileLoadDialog"
QT_MOC_LITERAL(159, 14), // "LoadExmpleFile"
QT_MOC_LITERAL(174, 24), // "ExampleFile::ExampleType"
QT_MOC_LITERAL(199, 4), // "type"
QT_MOC_LITERAL(204, 14), // "clearDataFiles"
QT_MOC_LITERAL(219, 17), // "RequestExperiment"
QT_MOC_LITERAL(237, 29), // "RequestCompletionNotification"
QT_MOC_LITERAL(267, 17), // "workerResultReady"
QT_MOC_LITERAL(285, 11), // "rowSelected"
QT_MOC_LITERAL(297, 22), // "UpdateMethodCacheModel"
QT_MOC_LITERAL(320, 43), // "QMap<QString,QSharedPointer<C..."
QT_MOC_LITERAL(364, 11), // "newValueMap"
QT_MOC_LITERAL(376, 22), // "currentlySelectedGroup"
QT_MOC_LITERAL(399, 10) // "AuditFiles"

    },
    "MSAB::SpectraFileHandler\0ExperimentSelected\0"
    "\0rowID\0MaxMSLevelChanged\0newLevel\0"
    "AllUpToDate\0QMap<int,QSharedPointer<MSABExperiment>>&\0"
    "filemap\0ShowFileLoadDialog\0LoadExmpleFile\0"
    "ExampleFile::ExampleType\0type\0"
    "clearDataFiles\0RequestExperiment\0"
    "RequestCompletionNotification\0"
    "workerResultReady\0rowSelected\0"
    "UpdateMethodCacheModel\0"
    "QMap<QString,QSharedPointer<CompoundGroup>>\0"
    "newValueMap\0currentlySelectedGroup\0"
    "AuditFiles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MSAB__SpectraFileHandler[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,    1 /* Public */,
       4,    1,   89,    2, 0x06,    3 /* Public */,
       6,    1,   92,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   95,    2, 0x0a,    7 /* Public */,
      10,    1,   96,    2, 0x0a,    8 /* Public */,
      13,    0,   99,    2, 0x0a,   10 /* Public */,
      14,    1,  100,    2, 0x0a,   11 /* Public */,
      15,    0,  103,    2, 0x0a,   13 /* Public */,
      16,    1,  104,    2, 0x0a,   14 /* Public */,
      17,    0,  107,    2, 0x0a,   16 /* Public */,
      18,    2,  108,    2, 0x0a,   17 /* Public */,
      22,    0,  113,    2, 0x0a,   20 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19, QMetaType::QString,   20,   21,
    QMetaType::Void,

       0        // eod
};

void MSAB::SpectraFileHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SpectraFileHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ExperimentSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->MaxMSLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->AllUpToDate((*reinterpret_cast< QMap<int,QSharedPointer<MSABExperiment>>(*)>(_a[1]))); break;
        case 3: _t->ShowFileLoadDialog(); break;
        case 4: _t->LoadExmpleFile((*reinterpret_cast< ExampleFile::ExampleType(*)>(_a[1]))); break;
        case 5: _t->clearDataFiles(); break;
        case 6: _t->RequestExperiment((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: { bool _r = _t->RequestCompletionNotification();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->workerResultReady((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->rowSelected(); break;
        case 10: _t->UpdateMethodCacheModel((*reinterpret_cast< QMap<QString,QSharedPointer<CompoundGroup>>(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->AuditFiles(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SpectraFileHandler::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpectraFileHandler::ExperimentSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SpectraFileHandler::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpectraFileHandler::MaxMSLevelChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SpectraFileHandler::*)(QMap<int,QSharedPointer<MSABExperiment>> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpectraFileHandler::AllUpToDate)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject MSAB::SpectraFileHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MSAB__SpectraFileHandler.offsetsAndSize,
    qt_meta_data_MSAB__SpectraFileHandler,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MSAB__SpectraFileHandler_t
, QtPrivate::TypeAndForceComplete<SpectraFileHandler, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMap<int,QSharedPointer<MSABExperiment>> &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ExampleFile::ExampleType, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMap<QString,QSharedPointer<CompoundGroup>>, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MSAB::SpectraFileHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MSAB::SpectraFileHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MSAB__SpectraFileHandler.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MSAB::SpectraFileHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MSAB::SpectraFileHandler::ExperimentSelected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MSAB::SpectraFileHandler::MaxMSLevelChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MSAB::SpectraFileHandler::AllUpToDate(QMap<int,QSharedPointer<MSABExperiment>> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
