/****************************************************************************
** Meta object code from reading C++ file 'travelagencyui.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../travelagencyui.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'travelagencyui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTravelAgencyUIENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTravelAgencyUIENDCLASS = QtMocHelpers::stringData(
    "TravelAgencyUI",
    "on_actionEinlesen_triggered",
    "",
    "on_actionSuchen_triggered",
    "on_tableWidget_cellDoubleClicked",
    "row",
    "column",
    "on_tableWidget_2_cellDoubleClicked",
    "on_actionSpeichern_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTravelAgencyUIENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[15];
    char stringdata1[28];
    char stringdata2[1];
    char stringdata3[26];
    char stringdata4[33];
    char stringdata5[4];
    char stringdata6[7];
    char stringdata7[35];
    char stringdata8[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTravelAgencyUIENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTravelAgencyUIENDCLASS_t qt_meta_stringdata_CLASSTravelAgencyUIENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "TravelAgencyUI"
        QT_MOC_LITERAL(15, 27),  // "on_actionEinlesen_triggered"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 25),  // "on_actionSuchen_triggered"
        QT_MOC_LITERAL(70, 32),  // "on_tableWidget_cellDoubleClicked"
        QT_MOC_LITERAL(103, 3),  // "row"
        QT_MOC_LITERAL(107, 6),  // "column"
        QT_MOC_LITERAL(114, 34),  // "on_tableWidget_2_cellDoubleCl..."
        QT_MOC_LITERAL(149, 28)   // "on_actionSpeichern_triggered"
    },
    "TravelAgencyUI",
    "on_actionEinlesen_triggered",
    "",
    "on_actionSuchen_triggered",
    "on_tableWidget_cellDoubleClicked",
    "row",
    "column",
    "on_tableWidget_2_cellDoubleClicked",
    "on_actionSpeichern_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTravelAgencyUIENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    2,   46,    2, 0x08,    3 /* Private */,
       7,    2,   51,    2, 0x08,    6 /* Private */,
       8,    0,   56,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TravelAgencyUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSTravelAgencyUIENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTravelAgencyUIENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTravelAgencyUIENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TravelAgencyUI, std::true_type>,
        // method 'on_actionEinlesen_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSuchen_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableWidget_cellDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_2_cellDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_actionSpeichern_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TravelAgencyUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TravelAgencyUI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionEinlesen_triggered(); break;
        case 1: _t->on_actionSuchen_triggered(); break;
        case 2: _t->on_tableWidget_cellDoubleClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->on_tableWidget_2_cellDoubleClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->on_actionSpeichern_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject *TravelAgencyUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TravelAgencyUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTravelAgencyUIENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TravelAgencyUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
