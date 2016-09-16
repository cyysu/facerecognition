/****************************************************************************
** Meta object code from reading C++ file 'inputpwd.h'
**
** Created: Mon Jun 3 11:38:11 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "inputpwd.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputpwd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Inputpwd[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      28,    9,    9,    9, 0x05,
      45,    9,    9,    9, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Inputpwd[] = {
    "Inputpwd\0\0toinputpwdlogin()\0"
    "toinputpwdhome()\0toinputpwdmenu()\0"
};

const QMetaObject Inputpwd::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Inputpwd,
      qt_meta_data_Inputpwd, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Inputpwd::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Inputpwd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Inputpwd::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Inputpwd))
        return static_cast<void*>(const_cast< Inputpwd*>(this));
    return QWidget::qt_metacast(_clname);
}

int Inputpwd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: toinputpwdlogin(); break;
        case 1: toinputpwdhome(); break;
        case 2: toinputpwdmenu(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Inputpwd::toinputpwdlogin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Inputpwd::toinputpwdhome()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Inputpwd::toinputpwdmenu()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
