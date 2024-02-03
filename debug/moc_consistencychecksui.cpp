/****************************************************************************
** Meta object code from reading C++ file 'consistencychecksui.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../consistencychecksui.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'consistencychecksui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
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
struct qt_meta_stringdata_CLASSconsistencyChecksUIENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSconsistencyChecksUIENDCLASS = QtMocHelpers::stringData(
    "consistencyChecksUI",
    "returnChecks",
    "",
    "std::vector<bool>",
    "checks",
    "on_buttonBox_accepted",
    "on_checkBox_stateChanged",
    "arg1",
    "on_checkBox_2_stateChanged",
    "on_checkBox_3_stateChanged",
    "on_checkBox_4_stateChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSconsistencyChecksUIENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[20];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[7];
    char stringdata5[22];
    char stringdata6[25];
    char stringdata7[5];
    char stringdata8[27];
    char stringdata9[27];
    char stringdata10[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSconsistencyChecksUIENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSconsistencyChecksUIENDCLASS_t qt_meta_stringdata_CLASSconsistencyChecksUIENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "consistencyChecksUI"
        QT_MOC_LITERAL(20, 12),  // "returnChecks"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 17),  // "std::vector<bool>"
        QT_MOC_LITERAL(52, 6),  // "checks"
        QT_MOC_LITERAL(59, 21),  // "on_buttonBox_accepted"
        QT_MOC_LITERAL(81, 24),  // "on_checkBox_stateChanged"
        QT_MOC_LITERAL(106, 4),  // "arg1"
        QT_MOC_LITERAL(111, 26),  // "on_checkBox_2_stateChanged"
        QT_MOC_LITERAL(138, 26),  // "on_checkBox_3_stateChanged"
        QT_MOC_LITERAL(165, 26)   // "on_checkBox_4_stateChanged"
    },
    "consistencyChecksUI",
    "returnChecks",
    "",
    "std::vector<bool>",
    "checks",
    "on_buttonBox_accepted",
    "on_checkBox_stateChanged",
    "arg1",
    "on_checkBox_2_stateChanged",
    "on_checkBox_3_stateChanged",
    "on_checkBox_4_stateChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSconsistencyChecksUIENDCLASS[] = {

 // content:
      11,       // revision
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
       5,    0,   53,    2, 0x08,    3 /* Private */,
       6,    1,   54,    2, 0x08,    4 /* Private */,
       8,    1,   57,    2, 0x08,    6 /* Private */,
       9,    1,   60,    2, 0x08,    8 /* Private */,
      10,    1,   63,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject consistencyChecksUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSconsistencyChecksUIENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSconsistencyChecksUIENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSconsistencyChecksUIENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<consistencyChecksUI, std::true_type>,
        // method 'returnChecks'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<bool>, std::false_type>,
        // method 'on_buttonBox_accepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBox_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_checkBox_2_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_checkBox_3_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_checkBox_4_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void consistencyChecksUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<consistencyChecksUI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->returnChecks((*reinterpret_cast< std::add_pointer_t<std::vector<bool>>>(_a[1]))); break;
        case 1: _t->on_buttonBox_accepted(); break;
        case 2: _t->on_checkBox_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_checkBox_2_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_checkBox_3_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_checkBox_4_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (consistencyChecksUI::*)(std::vector<bool> );
            if (_t _q_method = &consistencyChecksUI::returnChecks; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *consistencyChecksUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *consistencyChecksUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSconsistencyChecksUIENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int consistencyChecksUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void consistencyChecksUI::returnChecks(std::vector<bool> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
