/****************************************************************************
** Meta object code from reading C++ file 'MngFormTerms.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mngforms/MngFormTerms.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MngFormTerms.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MngFormTerms_t {
    QByteArrayData data[10];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MngFormTerms_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MngFormTerms_t qt_meta_stringdata_MngFormTerms = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MngFormTerms"
QT_MOC_LITERAL(1, 13, 11), // "runAddTerms"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 19), // "runLoadToChangeTerm"
QT_MOC_LITERAL(4, 46, 14), // "QItemSelection"
QT_MOC_LITERAL(5, 61, 23), // "runAutoCompleteTermCode"
QT_MOC_LITERAL(6, 85, 18), // "runValidFillInForm"
QT_MOC_LITERAL(7, 104, 12), // "runCleanForm"
QT_MOC_LITERAL(8, 117, 14), // "runRemoveTerms"
QT_MOC_LITERAL(9, 132, 10) // "runExitWin"

    },
    "MngFormTerms\0runAddTerms\0\0runLoadToChangeTerm\0"
    "QItemSelection\0runAutoCompleteTermCode\0"
    "runValidFillInForm\0runCleanForm\0"
    "runRemoveTerms\0runExitWin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MngFormTerms[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    2,   50,    2, 0x08 /* Private */,
       5,    0,   55,    2, 0x08 /* Private */,
       6,    0,   56,    2, 0x08 /* Private */,
       7,    0,   57,    2, 0x08 /* Private */,
       8,    0,   58,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MngFormTerms::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MngFormTerms *_t = static_cast<MngFormTerms *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->runAddTerms(); break;
        case 1: _t->runLoadToChangeTerm((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 2: _t->runAutoCompleteTermCode(); break;
        case 3: _t->runValidFillInForm(); break;
        case 4: _t->runCleanForm(); break;
        case 5: _t->runRemoveTerms(); break;
        case 6: _t->runExitWin(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    }
}

const QMetaObject MngFormTerms::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MngFormTerms.data,
      qt_meta_data_MngFormTerms,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MngFormTerms::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MngFormTerms::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MngFormTerms.stringdata0))
        return static_cast<void*>(const_cast< MngFormTerms*>(this));
    return QDialog::qt_metacast(_clname);
}

int MngFormTerms::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
