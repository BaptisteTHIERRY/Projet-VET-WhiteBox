/****************************************************************************
** Meta object code from reading C++ file 'tmgraphview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "tmgraphview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tmgraphview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TMGraphView_t {
    QByteArrayData data[13];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TMGraphView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TMGraphView_t qt_meta_stringdata_TMGraphView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TMGraphView"
QT_MOC_LITERAL(1, 12, 14), // "positionChange"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "view_address"
QT_MOC_LITERAL(4, 41, 9), // "view_time"
QT_MOC_LITERAL(5, 51, 20), // "cursorPositionChange"
QT_MOC_LITERAL(6, 72, 23), // "eventDescriptionQueried"
QT_MOC_LITERAL(7, 96, 5), // "Event"
QT_MOC_LITERAL(8, 102, 2), // "ev"
QT_MOC_LITERAL(9, 105, 15), // "onEventReceived"
QT_MOC_LITERAL(10, 121, 21), // "onConnectedToDatabase"
QT_MOC_LITERAL(11, 143, 22), // "onDBProcessingFinished"
QT_MOC_LITERAL(12, 166, 14) // "onWindowResize"

    },
    "TMGraphView\0positionChange\0\0view_address\0"
    "view_time\0cursorPositionChange\0"
    "eventDescriptionQueried\0Event\0ev\0"
    "onEventReceived\0onConnectedToDatabase\0"
    "onDBProcessingFinished\0onWindowResize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TMGraphView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       5,    2,   54,    2, 0x06 /* Public */,
       6,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   62,    2, 0x0a /* Public */,
      10,    0,   65,    2, 0x0a /* Public */,
      11,    0,   66,    2, 0x0a /* Public */,
      12,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,    3,    4,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,    3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TMGraphView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TMGraphView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->positionChange((*reinterpret_cast< unsigned long long(*)>(_a[1])),(*reinterpret_cast< unsigned long long(*)>(_a[2]))); break;
        case 1: _t->cursorPositionChange((*reinterpret_cast< unsigned long long(*)>(_a[1])),(*reinterpret_cast< unsigned long long(*)>(_a[2]))); break;
        case 2: _t->eventDescriptionQueried((*reinterpret_cast< Event(*)>(_a[1]))); break;
        case 3: _t->onEventReceived((*reinterpret_cast< Event(*)>(_a[1]))); break;
        case 4: _t->onConnectedToDatabase(); break;
        case 5: _t->onDBProcessingFinished(); break;
        case 6: _t->onWindowResize(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Event >(); break;
            }
            break;
        case 3:
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
            using _t = void (TMGraphView::*)(unsigned long long , unsigned long long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TMGraphView::positionChange)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TMGraphView::*)(unsigned long long , unsigned long long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TMGraphView::cursorPositionChange)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TMGraphView::*)(Event );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TMGraphView::eventDescriptionQueried)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TMGraphView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TMGraphView.data,
    qt_meta_data_TMGraphView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TMGraphView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TMGraphView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TMGraphView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TMGraphView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void TMGraphView::positionChange(unsigned long long _t1, unsigned long long _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TMGraphView::cursorPositionChange(unsigned long long _t1, unsigned long long _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TMGraphView::eventDescriptionQueried(Event _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
