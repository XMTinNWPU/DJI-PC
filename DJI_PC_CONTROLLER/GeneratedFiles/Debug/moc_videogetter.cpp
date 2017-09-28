/****************************************************************************
** Meta object code from reading C++ file 'videogetter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../videogetter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videogetter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VideoGetter_t {
    QByteArrayData data[9];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoGetter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoGetter_t qt_meta_stringdata_VideoGetter = {
    {
QT_MOC_LITERAL(0, 0, 11), // "VideoGetter"
QT_MOC_LITERAL(1, 12, 8), // "gotFrame"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 15), // "raw_frame_bytes"
QT_MOC_LITERAL(4, 38, 9), // "frame_num"
QT_MOC_LITERAL(5, 48, 6), // "format"
QT_MOC_LITERAL(6, 55, 8), // "finished"
QT_MOC_LITERAL(7, 64, 5), // "start"
QT_MOC_LITERAL(8, 70, 9) // "interrupt"

    },
    "VideoGetter\0gotFrame\0\0raw_frame_bytes\0"
    "frame_num\0format\0finished\0start\0"
    "interrupt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoGetter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x06 /* Public */,
       1,    2,   46,    2, 0x26 /* Public | MethodCloned */,
       6,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   52,    2, 0x0a /* Public */,
       8,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::UInt, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::UInt,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VideoGetter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VideoGetter *_t = static_cast<VideoGetter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gotFrame((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->gotFrame((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 2: _t->finished(); break;
        case 3: _t->start(); break;
        case 4: _t->interrupt(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VideoGetter::*_t)(QByteArray , quint32 , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoGetter::gotFrame)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (VideoGetter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoGetter::finished)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject VideoGetter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VideoGetter.data,
      qt_meta_data_VideoGetter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VideoGetter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoGetter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VideoGetter.stringdata0))
        return static_cast<void*>(const_cast< VideoGetter*>(this));
    return QObject::qt_metacast(_clname);
}

int VideoGetter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void VideoGetter::gotFrame(QByteArray _t1, quint32 _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void VideoGetter::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
