/****************************************************************************
** Meta object code from reading C++ file 'mainkeyboard.h'
**
** Created: Wed Apr 10 10:57:21 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainkeyboard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainkeyboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Mainkeyboard[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      32,   13,   13,   13, 0x05,
      40,   13,   13,   13, 0x05,
      58,   13,   13,   13, 0x05,
      74,   13,   13,   13, 0x05,
      97,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     118,   13,   13,   13, 0x08,
     128,   13,   13,   13, 0x08,
     138,   13,   13,   13, 0x08,
     148,   13,   13,   13, 0x08,
     158,   13,   13,   13, 0x08,
     168,   13,   13,   13, 0x08,
     178,   13,   13,   13, 0x08,
     188,   13,   13,   13, 0x08,
     198,   13,   13,   13, 0x08,
     208,   13,   13,   13, 0x08,
     218,   13,   13,   13, 0x08,
     240,   13,   13,   13, 0x08,
     262,   13,   13,   13, 0x08,
     284,   13,   13,   13, 0x08,
     306,   13,   13,   13, 0x08,
     328,   13,   13,   13, 0x08,
     350,   13,   13,   13, 0x08,
     372,   13,   13,   13, 0x08,
     394,   13,   13,   13, 0x08,
     416,   13,   13,   13, 0x08,
     438,   13,   13,   13, 0x08,
     460,   13,   13,   13, 0x08,
     483,   13,   13,   13, 0x08,
     507,   13,   13,   13, 0x08,
     529,   13,   13,   13, 0x08,
     551,   13,   13,   13, 0x08,
     573,   13,   13,   13, 0x08,
     595,   13,   13,   13, 0x08,
     618,   13,   13,   13, 0x08,
     640,   13,   13,   13, 0x08,
     662,   13,   13,   13, 0x08,
     684,   13,   13,   13, 0x08,
     707,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Mainkeyboard[] = {
    "Mainkeyboard\0\0setvalue(QString)\0backs()\0"
    "sendname(QString)\0sendid(QString)\0"
    "adminsendname(QString)\0adminsendid(QString)\0"
    "update1()\0update2()\0update3()\0update4()\0"
    "update5()\0update6()\0update7()\0update8()\0"
    "update9()\0inputzw()\0on_Button_1_clicked()\0"
    "on_Buttonz1_clicked()\0on_Buttonz2_clicked()\0"
    "on_Buttonz3_clicked()\0on_Buttonz4_clicked()\0"
    "on_Buttonz5_clicked()\0on_Buttonz6_clicked()\0"
    "on_Buttonz7_clicked()\0on_Buttonz8_clicked()\0"
    "on_Button_2_clicked()\0on_Button_3_clicked()\0"
    "on_Button_xh_clicked()\0on_Button_add_clicked()\0"
    "on_Button_4_clicked()\0on_Button_5_clicked()\0"
    "on_Button_6_clicked()\0on_Button_0_clicked()\0"
    "on_Button_qh_clicked()\0on_Button_7_clicked()\0"
    "on_Button_8_clicked()\0on_Button_9_clicked()\0"
    "on_Button_jh_clicked()\0on_Button_sub_clicked()\0"
};

const QMetaObject Mainkeyboard::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Mainkeyboard,
      qt_meta_data_Mainkeyboard, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Mainkeyboard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Mainkeyboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Mainkeyboard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Mainkeyboard))
        return static_cast<void*>(const_cast< Mainkeyboard*>(this));
    return QWidget::qt_metacast(_clname);
}

int Mainkeyboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setvalue((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: backs(); break;
        case 2: sendname((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: sendid((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: adminsendname((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: adminsendid((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: update1(); break;
        case 7: update2(); break;
        case 8: update3(); break;
        case 9: update4(); break;
        case 10: update5(); break;
        case 11: update6(); break;
        case 12: update7(); break;
        case 13: update8(); break;
        case 14: update9(); break;
        case 15: inputzw(); break;
        case 16: on_Button_1_clicked(); break;
        case 17: on_Buttonz1_clicked(); break;
        case 18: on_Buttonz2_clicked(); break;
        case 19: on_Buttonz3_clicked(); break;
        case 20: on_Buttonz4_clicked(); break;
        case 21: on_Buttonz5_clicked(); break;
        case 22: on_Buttonz6_clicked(); break;
        case 23: on_Buttonz7_clicked(); break;
        case 24: on_Buttonz8_clicked(); break;
        case 25: on_Button_2_clicked(); break;
        case 26: on_Button_3_clicked(); break;
        case 27: on_Button_xh_clicked(); break;
        case 28: on_Button_add_clicked(); break;
        case 29: on_Button_4_clicked(); break;
        case 30: on_Button_5_clicked(); break;
        case 31: on_Button_6_clicked(); break;
        case 32: on_Button_0_clicked(); break;
        case 33: on_Button_qh_clicked(); break;
        case 34: on_Button_7_clicked(); break;
        case 35: on_Button_8_clicked(); break;
        case 36: on_Button_9_clicked(); break;
        case 37: on_Button_jh_clicked(); break;
        case 38: on_Button_sub_clicked(); break;
        default: ;
        }
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void Mainkeyboard::setvalue(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Mainkeyboard::backs()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Mainkeyboard::sendname(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Mainkeyboard::sendid(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Mainkeyboard::adminsendname(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Mainkeyboard::adminsendid(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
