/****************************************************************************
** Meta object code from reading C++ file 'mainMenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainMenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mainMenu_t {
    QByteArrayData data[16];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mainMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mainMenu_t qt_meta_stringdata_mainMenu = {
    {
QT_MOC_LITERAL(0, 0, 8), // "mainMenu"
QT_MOC_LITERAL(1, 9, 3), // "ret"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 8), // "showComm"
QT_MOC_LITERAL(4, 23, 7), // "showHis"
QT_MOC_LITERAL(5, 31, 8), // "showPlot"
QT_MOC_LITERAL(6, 40, 13), // "showAutoCheck"
QT_MOC_LITERAL(7, 54, 12), // "showFixCheck"
QT_MOC_LITERAL(8, 67, 7), // "showret"
QT_MOC_LITERAL(9, 75, 6), // "appear"
QT_MOC_LITERAL(10, 82, 7), // "setWire"
QT_MOC_LITERAL(11, 90, 7), // "showSet"
QT_MOC_LITERAL(12, 98, 7), // "getStop"
QT_MOC_LITERAL(13, 106, 9), // "getResume"
QT_MOC_LITERAL(14, 116, 6), // "setpal"
QT_MOC_LITERAL(15, 123, 22) // "QMap<QString,QString>&"

    },
    "mainMenu\0ret\0\0showComm\0showHis\0showPlot\0"
    "showAutoCheck\0showFixCheck\0showret\0"
    "appear\0setWire\0showSet\0getStop\0getResume\0"
    "setpal\0QMap<QString,QString>&"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mainMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    1,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,    2,

       0        // eod
};

void mainMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mainMenu *_t = static_cast<mainMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ret(); break;
        case 1: _t->showComm(); break;
        case 2: _t->showHis(); break;
        case 3: _t->showPlot(); break;
        case 4: _t->showAutoCheck(); break;
        case 5: _t->showFixCheck(); break;
        case 6: _t->showret(); break;
        case 7: _t->appear(); break;
        case 8: _t->setWire(); break;
        case 9: _t->showSet(); break;
        case 10: _t->getStop(); break;
        case 11: _t->getResume(); break;
        case 12: _t->setpal((*reinterpret_cast< QMap<QString,QString>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (mainMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mainMenu::ret)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject mainMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_mainMenu.data,
      qt_meta_data_mainMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mainMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mainMenu.stringdata0))
        return static_cast<void*>(const_cast< mainMenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int mainMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void mainMenu::ret()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
