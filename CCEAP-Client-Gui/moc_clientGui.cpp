/****************************************************************************
** Meta object code from reading C++ file 'clientGui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "clientGui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientGui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClientGui_t {
    QByteArrayData data[11];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientGui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientGui_t qt_meta_stringdata_ClientGui = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ClientGui"
QT_MOC_LITERAL(1, 10, 8), // "sendData"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 16), // "seqNoTypeChanged"
QT_MOC_LITERAL(4, 37, 5), // "index"
QT_MOC_LITERAL(5, 43, 12), // "clcearScreen"
QT_MOC_LITERAL(6, 56, 12), // "dataReceived"
QT_MOC_LITERAL(7, 69, 10), // "aboutCceap"
QT_MOC_LITERAL(8, 80, 10), // "developers"
QT_MOC_LITERAL(9, 91, 11), // "participate"
QT_MOC_LITERAL(10, 103, 4) // "help"

    },
    "ClientGui\0sendData\0\0seqNoTypeChanged\0"
    "index\0clcearScreen\0dataReceived\0"
    "aboutCceap\0developers\0participate\0"
    "help"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientGui[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    1,   55,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       7,    0,   62,    2, 0x08 /* Private */,
       8,    0,   63,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ClientGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClientGui *_t = static_cast<ClientGui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendData(); break;
        case 1: _t->seqNoTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->clcearScreen(); break;
        case 3: _t->dataReceived((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 4: _t->aboutCceap(); break;
        case 5: _t->developers(); break;
        case 6: _t->participate(); break;
        case 7: _t->help(); break;
        default: ;
        }
    }
}

const QMetaObject ClientGui::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ClientGui.data,
      qt_meta_data_ClientGui,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClientGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientGui::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClientGui.stringdata0))
        return static_cast<void*>(const_cast< ClientGui*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ClientGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
