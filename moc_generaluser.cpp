/****************************************************************************
** Meta object code from reading C++ file 'generaluser.h'
**
** Created: Wed Apr 10 10:57:41 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "generaluser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'generaluser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Generaluser[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      28,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   12,   12,   12, 0x08,
      67,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Generaluser[] = {
    "Generaluser\0\0tologin2user()\0tologin2home()\0"
    "on_generalbnz_clicked()\0"
    "on_returnhomebnz_clicked()\0"
};

const QMetaObject Generaluser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Generaluser,
      qt_meta_data_Generaluser, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Generaluser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Generaluser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Generaluser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Generaluser))
        return static_cast<void*>(const_cast< Generaluser*>(this));
    return QWidget::qt_metacast(_clname);
}

int Generaluser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tologin2user(); break;
        case 1: tologin2home(); break;
        case 2: on_generalbnz_clicked(); break;
        case 3: on_returnhomebnz_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Generaluser::tologin2user()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Generaluser::tologin2home()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
