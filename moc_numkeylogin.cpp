/****************************************************************************
** Meta object code from reading C++ file 'numkeylogin.h'
**
** Created: Mon Jun 3 11:38:07 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "numkeylogin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'numkeylogin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Numkeylogin[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      28,   12,   12,   12, 0x05,
      44,   12,   12,   12, 0x05,
      62,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      77,   12,   12,   12, 0x08,
     101,   12,   12,   12, 0x08,
     125,   12,   12,   12, 0x08,
     149,   12,   12,   12, 0x08,
     173,   12,   12,   12, 0x08,
     197,   12,   12,   12, 0x08,
     221,   12,   12,   12, 0x08,
     245,   12,   12,   12, 0x08,
     269,   12,   12,   12, 0x08,
     293,   12,   12,   12, 0x08,
     317,   12,   12,   12, 0x08,
     341,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Numkeylogin[] = {
    "Numkeylogin\0\0tologin2menu()\0tologin2recog()\0"
    "toinputpwdlogin()\0tologin2home()\0"
    "on_numButton0_clicked()\0on_numButton1_clicked()\0"
    "on_numButton2_clicked()\0on_numButton3_clicked()\0"
    "on_numButtonx_clicked()\0on_numButton4_clicked()\0"
    "on_numButton5_clicked()\0on_numButton6_clicked()\0"
    "on_numButton7_clicked()\0on_numButton8_clicked()\0"
    "on_numButton9_clicked()\0on_numButtonj_clicked()\0"
};

const QMetaObject Numkeylogin::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Numkeylogin,
      qt_meta_data_Numkeylogin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Numkeylogin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Numkeylogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Numkeylogin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Numkeylogin))
        return static_cast<void*>(const_cast< Numkeylogin*>(this));
    return QWidget::qt_metacast(_clname);
}

int Numkeylogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tologin2menu(); break;
        case 1: tologin2recog(); break;
        case 2: toinputpwdlogin(); break;
        case 3: tologin2home(); break;
        case 4: on_numButton0_clicked(); break;
        case 5: on_numButton1_clicked(); break;
        case 6: on_numButton2_clicked(); break;
        case 7: on_numButton3_clicked(); break;
        case 8: on_numButtonx_clicked(); break;
        case 9: on_numButton4_clicked(); break;
        case 10: on_numButton5_clicked(); break;
        case 11: on_numButton6_clicked(); break;
        case 12: on_numButton7_clicked(); break;
        case 13: on_numButton8_clicked(); break;
        case 14: on_numButton9_clicked(); break;
        case 15: on_numButtonj_clicked(); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Numkeylogin::tologin2menu()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Numkeylogin::tologin2recog()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Numkeylogin::toinputpwdlogin()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Numkeylogin::tologin2home()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
