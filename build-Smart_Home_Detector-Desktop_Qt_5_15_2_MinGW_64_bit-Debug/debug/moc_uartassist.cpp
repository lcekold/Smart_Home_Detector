/****************************************************************************
** Meta object code from reading C++ file 'uartassist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Smart_Home_Detector/uartassist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uartassist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UartAssist_t {
    QByteArrayData data[17];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UartAssist_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UartAssist_t qt_meta_stringdata_UartAssist = {
    {
QT_MOC_LITERAL(0, 0, 10), // "UartAssist"
QT_MOC_LITERAL(1, 11, 10), // "OpenSerior"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "StartSend"
QT_MOC_LITERAL(4, 33, 16), // "ToWidgetShowData"
QT_MOC_LITERAL(5, 50, 18), // "on_BtnOpen_clicked"
QT_MOC_LITERAL(6, 69, 18), // "on_BtnSend_clicked"
QT_MOC_LITERAL(7, 88, 23), // "on_SerialPort_readyRead"
QT_MOC_LITERAL(8, 112, 4), // "data"
QT_MOC_LITERAL(9, 117, 24), // "on_TeditRecv_textChanged"
QT_MOC_LITERAL(10, 142, 26), // "on_BtnDetactSerial_clicked"
QT_MOC_LITERAL(11, 169, 22), // "on_BtnClearRcv_clicked"
QT_MOC_LITERAL(12, 192, 23), // "on_BtnClearSend_clicked"
QT_MOC_LITERAL(13, 216, 18), // "UartAssistShowData"
QT_MOC_LITERAL(14, 235, 4), // "Temp"
QT_MOC_LITERAL(15, 240, 4), // "Humi"
QT_MOC_LITERAL(16, 245, 5) // "Light"

    },
    "UartAssist\0OpenSerior\0\0StartSend\0"
    "ToWidgetShowData\0on_BtnOpen_clicked\0"
    "on_BtnSend_clicked\0on_SerialPort_readyRead\0"
    "data\0on_TeditRecv_textChanged\0"
    "on_BtnDetactSerial_clicked\0"
    "on_BtnClearRcv_clicked\0on_BtnClearSend_clicked\0"
    "UartAssistShowData\0Temp\0Humi\0Light"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UartAssist[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    1,   70,    2, 0x06 /* Public */,
       4,    3,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   80,    2, 0x08 /* Private */,
       6,    0,   81,    2, 0x08 /* Private */,
       7,    1,   82,    2, 0x08 /* Private */,
       9,    0,   85,    2, 0x08 /* Private */,
      10,    0,   86,    2, 0x08 /* Private */,
      11,    0,   87,    2, 0x08 /* Private */,
      12,    0,   88,    2, 0x08 /* Private */,
      13,    3,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   14,   15,   16,

       0        // eod
};

void UartAssist::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UartAssist *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OpenSerior(); break;
        case 1: _t->StartSend((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->ToWidgetShowData((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 3: _t->on_BtnOpen_clicked(); break;
        case 4: _t->on_BtnSend_clicked(); break;
        case 5: _t->on_SerialPort_readyRead((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 6: _t->on_TeditRecv_textChanged(); break;
        case 7: _t->on_BtnDetactSerial_clicked(); break;
        case 8: _t->on_BtnClearRcv_clicked(); break;
        case 9: _t->on_BtnClearSend_clicked(); break;
        case 10: _t->UartAssistShowData((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UartAssist::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UartAssist::OpenSerior)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UartAssist::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UartAssist::StartSend)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UartAssist::*)(double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UartAssist::ToWidgetShowData)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UartAssist::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_UartAssist.data,
    qt_meta_data_UartAssist,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UartAssist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UartAssist::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UartAssist.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int UartAssist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void UartAssist::OpenSerior()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UartAssist::StartSend(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UartAssist::ToWidgetShowData(double _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
