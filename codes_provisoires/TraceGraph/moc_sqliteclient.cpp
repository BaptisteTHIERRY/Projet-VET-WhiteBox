/****************************************************************************
** Meta object code from reading C++ file 'sqliteclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "sqliteclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sqliteclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SqliteClient_t {
    QByteArrayData data[25];
    char stringdata0[318];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SqliteClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SqliteClient_t qt_meta_stringdata_SqliteClient = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SqliteClient"
QT_MOC_LITERAL(1, 13, 16), // "connectionResult"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 6), // "char**"
QT_MOC_LITERAL(4, 38, 14), // "database_names"
QT_MOC_LITERAL(5, 53, 19), // "connectedToDatabase"
QT_MOC_LITERAL(6, 73, 15), // "invalidDatabase"
QT_MOC_LITERAL(7, 89, 15), // "metadataResults"
QT_MOC_LITERAL(8, 105, 8), // "metadata"
QT_MOC_LITERAL(9, 114, 11), // "statResults"
QT_MOC_LITERAL(10, 126, 10), // "long long*"
QT_MOC_LITERAL(11, 137, 5), // "stats"
QT_MOC_LITERAL(12, 143, 13), // "receivedEvent"
QT_MOC_LITERAL(13, 157, 5), // "Event"
QT_MOC_LITERAL(14, 163, 2), // "ev"
QT_MOC_LITERAL(15, 166, 24), // "receivedEventDescription"
QT_MOC_LITERAL(16, 191, 11), // "description"
QT_MOC_LITERAL(17, 203, 20), // "dbProcessingFinished"
QT_MOC_LITERAL(18, 224, 17), // "connectToDatabase"
QT_MOC_LITERAL(19, 242, 8), // "filename"
QT_MOC_LITERAL(20, 251, 13), // "queryMetadata"
QT_MOC_LITERAL(21, 265, 10), // "queryStats"
QT_MOC_LITERAL(22, 276, 11), // "queryEvents"
QT_MOC_LITERAL(23, 288, 21), // "queryEventDescription"
QT_MOC_LITERAL(24, 310, 7) // "cleanup"

    },
    "SqliteClient\0connectionResult\0\0char**\0"
    "database_names\0connectedToDatabase\0"
    "invalidDatabase\0metadataResults\0"
    "metadata\0statResults\0long long*\0stats\0"
    "receivedEvent\0Event\0ev\0receivedEventDescription\0"
    "description\0dbProcessingFinished\0"
    "connectToDatabase\0filename\0queryMetadata\0"
    "queryStats\0queryEvents\0queryEventDescription\0"
    "cleanup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SqliteClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       5,    0,   87,    2, 0x06 /* Public */,
       6,    0,   88,    2, 0x06 /* Public */,
       7,    1,   89,    2, 0x06 /* Public */,
       9,    1,   92,    2, 0x06 /* Public */,
      12,    1,   95,    2, 0x06 /* Public */,
      15,    1,   98,    2, 0x06 /* Public */,
      17,    0,  101,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,  102,    2, 0x0a /* Public */,
      20,    0,  105,    2, 0x0a /* Public */,
      21,    0,  106,    2, 0x0a /* Public */,
      22,    0,  107,    2, 0x0a /* Public */,
      23,    1,  108,    2, 0x0a /* Public */,
      24,    0,  111,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,

       0        // eod
};

void SqliteClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SqliteClient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connectionResult((*reinterpret_cast< char**(*)>(_a[1]))); break;
        case 1: _t->connectedToDatabase(); break;
        case 2: _t->invalidDatabase(); break;
        case 3: _t->metadataResults((*reinterpret_cast< char**(*)>(_a[1]))); break;
        case 4: _t->statResults((*reinterpret_cast< long long*(*)>(_a[1]))); break;
        case 5: _t->receivedEvent((*reinterpret_cast< Event(*)>(_a[1]))); break;
        case 6: _t->receivedEventDescription((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->dbProcessingFinished(); break;
        case 8: _t->connectToDatabase((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->queryMetadata(); break;
        case 10: _t->queryStats(); break;
        case 11: _t->queryEvents(); break;
        case 12: _t->queryEventDescription((*reinterpret_cast< Event(*)>(_a[1]))); break;
        case 13: _t->cleanup(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Event >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Event >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SqliteClient::*)(char * * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SqliteClient::connectionResult)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SqliteClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SqliteClient::connectedToDatabase)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SqliteClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SqliteClient::invalidDatabase)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SqliteClient::*)(char * * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SqliteClient::metadataResults)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SqliteClient::*)(long long * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SqliteClient::statResults)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SqliteClient::*)(Event );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SqliteClient::receivedEvent)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SqliteClient::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SqliteClient::receivedEventDescription)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SqliteClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SqliteClient::dbProcessingFinished)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SqliteClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SqliteClient.data,
    qt_meta_data_SqliteClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SqliteClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SqliteClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SqliteClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SqliteClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void SqliteClient::connectionResult(char * * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SqliteClient::connectedToDatabase()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SqliteClient::invalidDatabase()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SqliteClient::metadataResults(char * * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SqliteClient::statResults(long long * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SqliteClient::receivedEvent(Event _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SqliteClient::receivedEventDescription(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SqliteClient::dbProcessingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
