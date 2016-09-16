/****************************************************************************
** Meta object code from reading C++ file 'numkeyboard.h'
**
** Created: Wed Apr 10 10:57:28 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "numkeyboard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'numkeyboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Numkeyboard[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      27,   12,   12,   12, 0x05,
      43,   12,   12,   12, 0x05,
      55,   12,   12,   12, 0x05,
      71,   12,   12,   12, 0x05,
      93,   12,   12,   12, 0x05,
     114,   12,   12,   12, 0x05,
     135,   12,   12,   12, 0x05,
     157,   12,   12,   12, 0x05,
     178,   12,   12,   12, 0x05,
     199,   12,   12,   12, 0x05,
     222,   12,   12,   12, 0x05,
     245,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     267,   12,   12,   12, 0x08,
     291,   12,   12,   12, 0x08,
     315,   12,   12,   12, 0x08,
     339,   12,   12,   12, 0x08,
     363,   12,   12,   12, 0x08,
     387,   12,   12,   12, 0x08,
     411,   12,   12,   12, 0x08,
     435,   12,   12,   12, 0x08,
     459,   12,   12,   12, 0x08,
     483,   12,   12,   12, 0x08,
     507,   12,   12,   12, 0x08,
     531,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Numkeyboard[] = {
    "Numkeyboard\0\0toclosehome()\0tofind(QString)\0"
    "todoorpwd()\0tobase(QString)\0"
    "tosysyearset(QString)\0tosysmonset(QString)\0"
    "tosysdayset(QString)\0tosyshourset(QString)\0"
    "tosysminset(QString)\0tonetworkip(QString)\0"
    "tonetworkmask(QString)\0tonetworkrout(QString)\0"
    "tonetworkdns(QString)\0on_numButton1_clicked()\0"
    "on_numButton2_clicked()\0on_numButton3_clicked()\0"
    "on_numButton4_clicked()\0on_numButton5_clicked()\0"
    "on_numButton6_clicked()\0on_numButton7_clicked()\0"
    "on_numButton8_clicked()\0on_numButton9_clicked()\0"
    "on_numButtonx_clicked()\0on_numButton0_clicked()\0"
    "on_numButtonj_clicked()\0"
};

const QMetaObject Numkeyboard::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Numkeyboard,
      qt_meta_data_Numkeyboard, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Numkeyboard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Numkeyboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Numkeyboard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Numkeyboard))
        return static_cast<void*>(const_cast< Numkeyboard*>(this));
    return QWidget::qt_metacast(_clname);
}

int Numkeyboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: toclosehome(); break;
        case 1: tofind((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: todoorpwd(); break;
        case 3: tobase((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: tosysyearset((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: tosysmonset((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: tosysdayset((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: tosyshourset((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: tosysminset((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: tonetworkip((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: tonetworkmask((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: tonetworkrout((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: tonetworkdns((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: on_numButton1_clicked(); break;
        case 14: on_numButton2_clicked(); break;
        case 15: on_numButton3_clicked(); break;
        case 16: on_numButton4_clicked(); break;
        case 17: on_numButton5_clicked(); break;
        case 18: on_numButton6_clicked(); break;
        case 19: on_numButton7_clicked(); break;
        case 20: on_numButton8_clicked(); break;
        case 21: on_numButton9_clicked(); break;
        case 22: on_numButtonx_clicked(); break;
        case 23: on_numButton0_clicked(); break;
        case 24: on_numButtonj_clicked(); break;
        default: ;
        }
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void Numkeyboard::toclosehome()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Numkeyboard::tofind(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Numkeyboard::todoorpwd()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Numkeyboard::tobase(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Numkeyboard::tosysyearset(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Numkeyboard::tosysmonset(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Numkeyboard::tosysdayset(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Numkeyboard::tosyshourset(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Numkeyboard::tosysminset(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Numkeyboard::tonetworkip(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Numkeyboard::tonetworkmask(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Numkeyboard::tonetworkrout(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Numkeyboard::tonetworkdns(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_END_MOC_NAMESPACE
