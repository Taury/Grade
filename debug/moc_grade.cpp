/****************************************************************************
** Meta object code from reading C++ file 'grade.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../grade.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'grade.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Grade_t {
    QByteArrayData data[8];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Grade_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Grade_t qt_meta_stringdata_Grade = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Grade"
QT_MOC_LITERAL(1, 6, 28), // "on_pushButton_search_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 29), // "on_pushButton_showAll_clicked"
QT_MOC_LITERAL(4, 66, 26), // "on_comboBox_attr_activated"
QT_MOC_LITERAL(5, 93, 4), // "arg1"
QT_MOC_LITERAL(6, 98, 6), // "cntGPA"
QT_MOC_LITERAL(7, 105, 7) // "showGPA"

    },
    "Grade\0on_pushButton_search_clicked\0\0"
    "on_pushButton_showAll_clicked\0"
    "on_comboBox_attr_activated\0arg1\0cntGPA\0"
    "showGPA"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Grade[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Float,
    QMetaType::Void,

       0        // eod
};

void Grade::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Grade *_t = static_cast<Grade *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_search_clicked(); break;
        case 1: _t->on_pushButton_showAll_clicked(); break;
        case 2: _t->on_comboBox_attr_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: { float _r = _t->cntGPA();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 4: _t->showGPA(); break;
        default: ;
        }
    }
}

const QMetaObject Grade::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Grade.data,
      qt_meta_data_Grade,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Grade::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Grade::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Grade.stringdata0))
        return static_cast<void*>(const_cast< Grade*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Grade::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
