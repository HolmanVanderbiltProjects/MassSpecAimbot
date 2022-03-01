/****************************************************************************
** Meta object code from reading C++ file 'CompoundGroupWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../MassSpecAimbot/Dialog/CompoundGroupWidget.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CompoundGroupWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MSAB__CompoundGroupWidget_t {
    const uint offsetsAndSize[52];
    char stringdata0[446];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MSAB__CompoundGroupWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MSAB__CompoundGroupWidget_t qt_meta_stringdata_MSAB__CompoundGroupWidget = {
    {
QT_MOC_LITERAL(0, 25), // "MSAB::CompoundGroupWidget"
QT_MOC_LITERAL(26, 19), // "IonTraceViewChanged"
QT_MOC_LITERAL(46, 0), // ""
QT_MOC_LITERAL(47, 17), // "DataValuesChanged"
QT_MOC_LITERAL(65, 36), // "QMap<QString,QList<Isotopomer..."
QT_MOC_LITERAL(102, 9), // "newValues"
QT_MOC_LITERAL(112, 17), // "GroupModelChanged"
QT_MOC_LITERAL(130, 43), // "QMap<QString,QSharedPointer<C..."
QT_MOC_LITERAL(174, 11), // "newValueMap"
QT_MOC_LITERAL(186, 22), // "currentlySelectedGroup"
QT_MOC_LITERAL(209, 17), // "addGroupsFromList"
QT_MOC_LITERAL(227, 36), // "QList<QSharedPointer<Compound..."
QT_MOC_LITERAL(264, 11), // "groupsToAdd"
QT_MOC_LITERAL(276, 17), // "MaxMSLevelChanged"
QT_MOC_LITERAL(294, 8), // "newValue"
QT_MOC_LITERAL(303, 9), // "addGroups"
QT_MOC_LITERAL(313, 10), // "editGroups"
QT_MOC_LITERAL(324, 6), // "addIon"
QT_MOC_LITERAL(331, 7), // "editIon"
QT_MOC_LITERAL(339, 17), // "PauseStateChanged"
QT_MOC_LITERAL(357, 16), // "ToleranceChanged"
QT_MOC_LITERAL(374, 18), // "ToleranceFinalized"
QT_MOC_LITERAL(393, 19), // "CurrentGroupUpdated"
QT_MOC_LITERAL(413, 14), // "onTableClicked"
QT_MOC_LITERAL(428, 11), // "QModelIndex"
QT_MOC_LITERAL(440, 5) // "index"

    },
    "MSAB::CompoundGroupWidget\0IonTraceViewChanged\0"
    "\0DataValuesChanged\0"
    "QMap<QString,QList<IsotopomerGroup>>\0"
    "newValues\0GroupModelChanged\0"
    "QMap<QString,QSharedPointer<CompoundGroup>>\0"
    "newValueMap\0currentlySelectedGroup\0"
    "addGroupsFromList\0"
    "QList<QSharedPointer<CompoundGroup>>\0"
    "groupsToAdd\0MaxMSLevelChanged\0newValue\0"
    "addGroups\0editGroups\0addIon\0editIon\0"
    "PauseStateChanged\0ToleranceChanged\0"
    "ToleranceFinalized\0CurrentGroupUpdated\0"
    "onTableClicked\0QModelIndex\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MSAB__CompoundGroupWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,    1 /* Public */,
       3,    1,   99,    2, 0x06,    2 /* Public */,
       6,    2,  102,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,  107,    2, 0x0a,    7 /* Public */,
      13,    1,  110,    2, 0x0a,    9 /* Public */,
      15,    0,  113,    2, 0x09,   11 /* Protected */,
      16,    0,  114,    2, 0x09,   12 /* Protected */,
      17,    0,  115,    2, 0x09,   13 /* Protected */,
      18,    0,  116,    2, 0x09,   14 /* Protected */,
      19,    0,  117,    2, 0x09,   15 /* Protected */,
      20,    0,  118,    2, 0x09,   16 /* Protected */,
      21,    0,  119,    2, 0x09,   17 /* Protected */,
      22,    0,  120,    2, 0x09,   18 /* Protected */,
      23,    1,  121,    2, 0x09,   19 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,

       0        // eod
};

void MSAB::CompoundGroupWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CompoundGroupWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->IonTraceViewChanged(); break;
        case 1: _t->DataValuesChanged((*reinterpret_cast< QMap<QString,QList<IsotopomerGroup>>(*)>(_a[1]))); break;
        case 2: _t->GroupModelChanged((*reinterpret_cast< QMap<QString,QSharedPointer<CompoundGroup>>(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->addGroupsFromList((*reinterpret_cast< QList<QSharedPointer<CompoundGroup>>(*)>(_a[1]))); break;
        case 4: _t->MaxMSLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->addGroups(); break;
        case 6: _t->editGroups(); break;
        case 7: _t->addIon(); break;
        case 8: _t->editIon(); break;
        case 9: _t->PauseStateChanged(); break;
        case 10: _t->ToleranceChanged(); break;
        case 11: _t->ToleranceFinalized(); break;
        case 12: _t->CurrentGroupUpdated(); break;
        case 13: _t->onTableClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
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
            using _t = void (CompoundGroupWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CompoundGroupWidget::IonTraceViewChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CompoundGroupWidget::*)(QMap<QString,QList<IsotopomerGroup>> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CompoundGroupWidget::DataValuesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CompoundGroupWidget::*)(QMap<QString,QSharedPointer<CompoundGroup>> , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CompoundGroupWidget::GroupModelChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject MSAB::CompoundGroupWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MSAB__CompoundGroupWidget.offsetsAndSize,
    qt_meta_data_MSAB__CompoundGroupWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MSAB__CompoundGroupWidget_t
, QtPrivate::TypeAndForceComplete<CompoundGroupWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMap<QString,QList<IsotopomerGroup>>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMap<QString,QSharedPointer<CompoundGroup>>, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<QSharedPointer<CompoundGroup>>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>


>,
    nullptr
} };


const QMetaObject *MSAB::CompoundGroupWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MSAB::CompoundGroupWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MSAB__CompoundGroupWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MSAB::CompoundGroupWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MSAB::CompoundGroupWidget::IonTraceViewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MSAB::CompoundGroupWidget::DataValuesChanged(QMap<QString,QList<IsotopomerGroup>> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MSAB::CompoundGroupWidget::GroupModelChanged(QMap<QString,QSharedPointer<CompoundGroup>> _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
