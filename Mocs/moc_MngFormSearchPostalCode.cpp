/****************************************************************************
** Meta object code from reading C++ file 'MngFormSearchPostalCode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mngforms/MngFormSearchPostalCode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MngFormSearchPostalCode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MngFormSearchPostalCode_t {
    QByteArrayData data[15];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MngFormSearchPostalCode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MngFormSearchPostalCode_t qt_meta_stringdata_MngFormSearchPostalCode = {
    {
QT_MOC_LITERAL(0, 0, 23), // "MngFormSearchPostalCode"
QT_MOC_LITERAL(1, 24, 18), // "runSendDataAddress"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 11), // "PostalCode*"
QT_MOC_LITERAL(4, 56, 16), // "runLoadToConfirm"
QT_MOC_LITERAL(5, 73, 14), // "QItemSelection"
QT_MOC_LITERAL(6, 88, 8), // "finished"
QT_MOC_LITERAL(7, 97, 14), // "QNetworkReply*"
QT_MOC_LITERAL(8, 112, 5), // "reply"
QT_MOC_LITERAL(9, 118, 13), // "getRespToHttp"
QT_MOC_LITERAL(10, 132, 18), // "runValidFillInForm"
QT_MOC_LITERAL(11, 151, 12), // "runSearchZip"
QT_MOC_LITERAL(12, 164, 17), // "runConfirmDataZip"
QT_MOC_LITERAL(13, 182, 12), // "runCleanForm"
QT_MOC_LITERAL(14, 195, 10) // "runExitWin"

    },
    "MngFormSearchPostalCode\0runSendDataAddress\0"
    "\0PostalCode*\0runLoadToConfirm\0"
    "QItemSelection\0finished\0QNetworkReply*\0"
    "reply\0getRespToHttp\0runValidFillInForm\0"
    "runSearchZip\0runConfirmDataZip\0"
    "runCleanForm\0runExitWin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MngFormSearchPostalCode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   62,    2, 0x08 /* Private */,
       6,    1,   67,    2, 0x08 /* Private */,
       9,    0,   70,    2, 0x08 /* Private */,
      10,    0,   71,    2, 0x08 /* Private */,
      11,    0,   72,    2, 0x08 /* Private */,
      12,    0,   73,    2, 0x08 /* Private */,
      13,    0,   74,    2, 0x08 /* Private */,
      14,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    2,    2,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MngFormSearchPostalCode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MngFormSearchPostalCode *_t = static_cast<MngFormSearchPostalCode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->runSendDataAddress((*reinterpret_cast< PostalCode*(*)>(_a[1]))); break;
        case 1: _t->runLoadToConfirm((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 2: _t->finished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->getRespToHttp(); break;
        case 4: _t->runValidFillInForm(); break;
        case 5: _t->runSearchZip(); break;
        case 6: _t->runConfirmDataZip(); break;
        case 7: _t->runCleanForm(); break;
        case 8: _t->runExitWin(); break;
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
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MngFormSearchPostalCode::*_t)(PostalCode * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MngFormSearchPostalCode::runSendDataAddress)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MngFormSearchPostalCode::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MngFormSearchPostalCode.data,
      qt_meta_data_MngFormSearchPostalCode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MngFormSearchPostalCode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MngFormSearchPostalCode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MngFormSearchPostalCode.stringdata0))
        return static_cast<void*>(const_cast< MngFormSearchPostalCode*>(this));
    if (!strcmp(_clname, "Ui_SearchPostalCode"))
        return static_cast< Ui_SearchPostalCode*>(const_cast< MngFormSearchPostalCode*>(this));
    return QDialog::qt_metacast(_clname);
}

int MngFormSearchPostalCode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MngFormSearchPostalCode::runSendDataAddress(PostalCode * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
