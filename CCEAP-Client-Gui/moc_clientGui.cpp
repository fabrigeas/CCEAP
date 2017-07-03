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
    QByteArrayData data[13];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientGui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientGui_t qt_meta_stringdata_ClientGui = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ClientGui"
QT_MOC_LITERAL(1, 10, 12), // "clcearScreen"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "dataReceived"
QT_MOC_LITERAL(4, 37, 9), // "parseData"
QT_MOC_LITERAL(5, 47, 10), // "aboutCceap"
QT_MOC_LITERAL(6, 58, 10), // "developers"
QT_MOC_LITERAL(7, 69, 11), // "participate"
QT_MOC_LITERAL(8, 81, 4), // "help"
QT_MOC_LITERAL(9, 86, 20), // "on_sendDataB_clicked"
QT_MOC_LITERAL(10, 107, 23), // "on_clearScreenB_clicked"
QT_MOC_LITERAL(11, 131, 32), // "on_seqNoType_currentIndexChanged"
QT_MOC_LITERAL(12, 164, 5) // "index"

    },
    "ClientGui\0clcearScreen\0\0dataReceived\0"
    "parseData\0aboutCceap\0developers\0"
    "participate\0help\0on_sendDataB_clicked\0"
    "on_clearScreenB_clicked\0"
    "on_seqNoType_currentIndexChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientGui[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    1,   65,    2, 0x0a /* Public */,
       4,    1,   68,    2, 0x0a /* Public */,
       5,    0,   71,    2, 0x0a /* Public */,
       6,    0,   72,    2, 0x0a /* Public */,
       7,    0,   73,    2, 0x0a /* Public */,
       8,    0,   74,    2, 0x0a /* Public */,
       9,    0,   75,    2, 0x0a /* Public */,
      10,    0,   76,    2, 0x0a /* Public */,
      11,    1,   77,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void ClientGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClientGui *_t = static_cast<ClientGui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clcearScreen(); break;
        case 1: _t->dataReceived((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->parseData((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->aboutCceap(); break;
        case 4: _t->developers(); break;
        case 5: _t->participate(); break;
        case 6: _t->help(); break;
        case 7: _t->on_sendDataB_clicked(); break;
        case 8: _t->on_clearScreenB_clicked(); break;
        case 9: _t->on_seqNoType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
