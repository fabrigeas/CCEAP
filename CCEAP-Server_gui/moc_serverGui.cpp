/****************************************************************************
** Meta object code from reading C++ file 'serverGui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "serverGui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serverGui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ServerGui_t {
    QByteArrayData data[11];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ServerGui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ServerGui_t qt_meta_stringdata_ServerGui = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ServerGui"
QT_MOC_LITERAL(1, 10, 6), // "signal"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 8), // "newValue"
QT_MOC_LITERAL(4, 27, 28), // "on_startServerButton_clicked"
QT_MOC_LITERAL(5, 56, 22), // "dataReceivedFromServer"
QT_MOC_LITERAL(6, 79, 10), // "stringList"
QT_MOC_LITERAL(7, 90, 10), // "aboutCceap"
QT_MOC_LITERAL(8, 101, 10), // "developers"
QT_MOC_LITERAL(9, 112, 11), // "participate"
QT_MOC_LITERAL(10, 124, 4) // "help"

    },
    "ServerGui\0signal\0\0newValue\0"
    "on_startServerButton_clicked\0"
    "dataReceivedFromServer\0stringList\0"
    "aboutCceap\0developers\0participate\0"
    "help"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServerGui[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   52,    2, 0x0a /* Public */,
       5,    1,   53,    2, 0x0a /* Public */,
       7,    0,   56,    2, 0x0a /* Public */,
       8,    0,   57,    2, 0x0a /* Public */,
       9,    0,   58,    2, 0x0a /* Public */,
      10,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ServerGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ServerGui *_t = static_cast<ServerGui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_startServerButton_clicked(); break;
        case 2: _t->dataReceivedFromServer((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->aboutCceap(); break;
        case 4: _t->developers(); break;
        case 5: _t->participate(); break;
        case 6: _t->help(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ServerGui::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ServerGui::signal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ServerGui::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ServerGui.data,
      qt_meta_data_ServerGui,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ServerGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerGui::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ServerGui.stringdata0))
        return static_cast<void*>(const_cast< ServerGui*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ServerGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ServerGui::signal(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
