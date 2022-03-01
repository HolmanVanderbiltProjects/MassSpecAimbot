/****************************************************************************
** Meta object code from reading C++ file 'TICWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../MassSpecAimbot/Dialog/TICWidget.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCharts/qlineseries.h>
#include <QtCharts/qabstractbarseries.h>
#include <QtCharts/qvbarmodelmapper.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCharts/qcandlestickseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TICWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MSAB__TICSpectrumWidget_t {
    const uint offsetsAndSize[30];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MSAB__TICSpectrumWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MSAB__TICSpectrumWidget_t qt_meta_stringdata_MSAB__TICSpectrumWidget = {
    {
QT_MOC_LITERAL(0, 23), // "MSAB::TICSpectrumWidget"
QT_MOC_LITERAL(24, 15), // "SpectraSelected"
QT_MOC_LITERAL(40, 0), // ""
QT_MOC_LITERAL(41, 10), // "scanNumber"
QT_MOC_LITERAL(52, 10), // "SetSpectra"
QT_MOC_LITERAL(63, 5), // "level"
QT_MOC_LITERAL(69, 22), // "ForwardSelectedSpectra"
QT_MOC_LITERAL(92, 8), // "scanTime"
QT_MOC_LITERAL(101, 16), // "RefreshAllSeries"
QT_MOC_LITERAL(118, 15), // "SetCurrentModel"
QT_MOC_LITERAL(134, 43), // "QMap<QString,QSharedPointer<C..."
QT_MOC_LITERAL(178, 11), // "newValueMap"
QT_MOC_LITERAL(190, 22), // "currentlySelectedGroup"
QT_MOC_LITERAL(213, 20), // "ShowCompositeSpectra"
QT_MOC_LITERAL(234, 23) // "IntegrationInfoComplete"

    },
    "MSAB::TICSpectrumWidget\0SpectraSelected\0"
    "\0scanNumber\0SetSpectra\0level\0"
    "ForwardSelectedSpectra\0scanTime\0"
    "RefreshAllSeries\0SetCurrentModel\0"
    "QMap<QString,QSharedPointer<CompoundGroup>>\0"
    "newValueMap\0currentlySelectedGroup\0"
    "ShowCompositeSpectra\0IntegrationInfoComplete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MSAB__TICSpectrumWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    2,   65,    2, 0x0a,    3 /* Public */,
       4,    1,   70,    2, 0x2a,    6 /* Public | MethodCloned */,
       6,    1,   73,    2, 0x0a,    8 /* Public */,
       8,    0,   76,    2, 0x0a,   10 /* Public */,
       9,    2,   77,    2, 0x0a,   11 /* Public */,
      13,    0,   82,    2, 0x0a,   14 /* Public */,
      14,    0,   83,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::QString, QMetaType::Int, QMetaType::Int,    3,    5,
    QMetaType::QString, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString,   11,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MSAB::TICSpectrumWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TICSpectrumWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SpectraSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: { QString _r = _t->SetSpectra((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->SetSpectra((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->ForwardSelectedSpectra((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->RefreshAllSeries(); break;
        case 5: _t->SetCurrentModel((*reinterpret_cast< QMap<QString,QSharedPointer<CompoundGroup>>(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->ShowCompositeSpectra(); break;
        case 7: _t->IntegrationInfoComplete(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TICSpectrumWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TICSpectrumWidget::SpectraSelected)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MSAB::TICSpectrumWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MSAB__TICSpectrumWidget.offsetsAndSize,
    qt_meta_data_MSAB__TICSpectrumWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MSAB__TICSpectrumWidget_t
, QtPrivate::TypeAndForceComplete<TICSpectrumWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qreal, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMap<QString,QSharedPointer<CompoundGroup>>, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MSAB::TICSpectrumWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MSAB::TICSpectrumWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MSAB__TICSpectrumWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MSAB::TICSpectrumWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void MSAB::TICSpectrumWidget::SpectraSelected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
