/****************************************************************************
** Meta object code from reading C++ file 'mainmenu.h'
**
** Created: Wed Apr 10 10:57:23 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainmenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Mainmenu[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      25,    9,    9,    9, 0x08,
      51,    9,    9,    9, 0x08,
      75,    9,    9,    9, 0x08,
     101,    9,    9,    9, 0x08,
     127,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Mainmenu[] = {
    "Mainmenu\0\0tomenu2login()\0"
    "on_pushButton_2_clicked()\0"
    "on_menureturn_clicked()\0"
    "on_security_bnz_clicked()\0"
    "on_advicesetbnz_clicked()\0"
    "on_systemsetbnz_clicked()\0"
};

const QMetaObject Mainmenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Mainmenu,
      qt_meta_data_Mainmenu, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Mainmenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Mainmenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Mainmenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Mainmenu))
        return static_cast<void*>(const_cast< Mainmenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int Mainmenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tomenu2login(); break;
        case 1: on_pushButton_2_clicked(); break;
        case 2: on_menureturn_clicked(); break;
        case 3: on_security_bnz_clicked(); break;
        case 4: on_advicesetbnz_clicked(); break;
        case 5: on_systemsetbnz_clicked(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Mainmenu::tomenu2login()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
