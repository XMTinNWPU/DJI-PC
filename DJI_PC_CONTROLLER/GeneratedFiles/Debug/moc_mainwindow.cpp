/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[32];
    char stringdata0[591];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 25), // "interrupt_video_receiving"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 29), // "interrupt_telemetry_receiving"
QT_MOC_LITERAL(4, 68, 25), // "interrupt_control_sending"
QT_MOC_LITERAL(5, 94, 12), // "showRawFrame"
QT_MOC_LITERAL(6, 107, 11), // "frame_bytes"
QT_MOC_LITERAL(7, 119, 9), // "frame_num"
QT_MOC_LITERAL(8, 129, 6), // "format"
QT_MOC_LITERAL(9, 136, 13), // "showTelemetry"
QT_MOC_LITERAL(10, 150, 9), // "Telemetry"
QT_MOC_LITERAL(11, 160, 1), // "t"
QT_MOC_LITERAL(12, 162, 13), // "saveTelemetry"
QT_MOC_LITERAL(13, 176, 19), // "setMinMaxVelocities"
QT_MOC_LITERAL(14, 196, 15), // "QVector<double>"
QT_MOC_LITERAL(15, 212, 10), // "velocities"
QT_MOC_LITERAL(16, 223, 22), // "on_connect_btn_clicked"
QT_MOC_LITERAL(17, 246, 13), // "log_connected"
QT_MOC_LITERAL(18, 260, 20), // "on_video_box_toggled"
QT_MOC_LITERAL(19, 281, 13), // "video_enabled"
QT_MOC_LITERAL(20, 295, 21), // "videoReceivingStopped"
QT_MOC_LITERAL(21, 317, 24), // "on_telemetry_box_toggled"
QT_MOC_LITERAL(22, 342, 17), // "telemetry_enabled"
QT_MOC_LITERAL(23, 360, 25), // "telemetryReceivingStopped"
QT_MOC_LITERAL(24, 386, 23), // "on_controls_box_toggled"
QT_MOC_LITERAL(25, 410, 15), // "control_enabled"
QT_MOC_LITERAL(26, 426, 21), // "controlSendingStopped"
QT_MOC_LITERAL(27, 448, 20), // "updateVelocitiesEdit"
QT_MOC_LITERAL(28, 469, 30), // "on_pitch_slider_sliderReleased"
QT_MOC_LITERAL(29, 500, 29), // "on_roll_slider_sliderReleased"
QT_MOC_LITERAL(30, 530, 26), // "on_yaw_dial_sliderReleased"
QT_MOC_LITERAL(31, 557, 33) // "on_throttle_slider_sliderRele..."

    },
    "MainWindow\0interrupt_video_receiving\0"
    "\0interrupt_telemetry_receiving\0"
    "interrupt_control_sending\0showRawFrame\0"
    "frame_bytes\0frame_num\0format\0showTelemetry\0"
    "Telemetry\0t\0saveTelemetry\0setMinMaxVelocities\0"
    "QVector<double>\0velocities\0"
    "on_connect_btn_clicked\0log_connected\0"
    "on_video_box_toggled\0video_enabled\0"
    "videoReceivingStopped\0on_telemetry_box_toggled\0"
    "telemetry_enabled\0telemetryReceivingStopped\0"
    "on_controls_box_toggled\0control_enabled\0"
    "controlSendingStopped\0updateVelocitiesEdit\0"
    "on_pitch_slider_sliderReleased\0"
    "on_roll_slider_sliderReleased\0"
    "on_yaw_dial_sliderReleased\0"
    "on_throttle_slider_sliderReleased"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x06 /* Public */,
       3,    0,  115,    2, 0x06 /* Public */,
       4,    0,  116,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    3,  117,    2, 0x0a /* Public */,
       9,    1,  124,    2, 0x0a /* Public */,
      12,    1,  127,    2, 0x0a /* Public */,
      13,    1,  130,    2, 0x0a /* Public */,
      16,    0,  133,    2, 0x08 /* Private */,
      17,    0,  134,    2, 0x08 /* Private */,
      18,    1,  135,    2, 0x08 /* Private */,
      20,    0,  138,    2, 0x08 /* Private */,
      21,    1,  139,    2, 0x08 /* Private */,
      23,    0,  142,    2, 0x08 /* Private */,
      24,    1,  143,    2, 0x08 /* Private */,
      26,    0,  146,    2, 0x08 /* Private */,
      27,    0,  147,    2, 0x08 /* Private */,
      28,    0,  148,    2, 0x08 /* Private */,
      29,    0,  149,    2, 0x08 /* Private */,
      30,    0,  150,    2, 0x08 /* Private */,
      31,    0,  151,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::UInt, QMetaType::QString,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->interrupt_video_receiving(); break;
        case 1: _t->interrupt_telemetry_receiving(); break;
        case 2: _t->interrupt_control_sending(); break;
        case 3: _t->showRawFrame((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 4: _t->showTelemetry((*reinterpret_cast< Telemetry(*)>(_a[1]))); break;
        case 5: _t->saveTelemetry((*reinterpret_cast< Telemetry(*)>(_a[1]))); break;
        case 6: _t->setMinMaxVelocities((*reinterpret_cast< QVector<double>(*)>(_a[1]))); break;
        case 7: _t->on_connect_btn_clicked(); break;
        case 8: _t->log_connected(); break;
        case 9: _t->on_video_box_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->videoReceivingStopped(); break;
        case 11: _t->on_telemetry_box_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->telemetryReceivingStopped(); break;
        case 13: _t->on_controls_box_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->controlSendingStopped(); break;
        case 15: _t->updateVelocitiesEdit(); break;
        case 16: _t->on_pitch_slider_sliderReleased(); break;
        case 17: _t->on_roll_slider_sliderReleased(); break;
        case 18: _t->on_yaw_dial_sliderReleased(); break;
        case 19: _t->on_throttle_slider_sliderReleased(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::interrupt_video_receiving)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::interrupt_telemetry_receiving)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::interrupt_control_sending)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::interrupt_video_receiving()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MainWindow::interrupt_telemetry_receiving()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void MainWindow::interrupt_control_sending()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
