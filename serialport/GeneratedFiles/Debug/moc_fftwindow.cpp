/****************************************************************************
** Meta object code from reading C++ file 'fftwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fftwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fftwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_fftwindow_t {
    QByteArrayData data[7];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fftwindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fftwindow_t qt_meta_stringdata_fftwindow = {
    {
QT_MOC_LITERAL(0, 0, 9), // "fftwindow"
QT_MOC_LITERAL(1, 10, 9), // "setXYcord"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "showGrid"
QT_MOC_LITERAL(4, 30, 6), // "fftGet"
QT_MOC_LITERAL(5, 37, 12), // "deque<float>"
QT_MOC_LITERAL(6, 50, 7) // "drawFFT"

    },
    "fftwindow\0setXYcord\0\0showGrid\0fftGet\0"
    "deque<float>\0drawFFT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fftwindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    1,   36,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,

       0        // eod
};

void fftwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        fftwindow *_t = static_cast<fftwindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setXYcord(); break;
        case 1: _t->showGrid(); break;
        case 2: _t->fftGet((*reinterpret_cast< deque<float>(*)>(_a[1]))); break;
        case 3: _t->drawFFT(); break;
        default: ;
        }
    }
}

const QMetaObject fftwindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_fftwindow.data,
      qt_meta_data_fftwindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *fftwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fftwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_fftwindow.stringdata0))
        return static_cast<void*>(const_cast< fftwindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int fftwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
