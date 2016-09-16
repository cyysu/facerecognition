/****************************************************************************
** Meta object code from reading C++ file 'doorpwd.h'
**
** Created: Wed Apr 10 10:57:43 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "doorpwd.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'doorpwd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Doorpwd[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      26,    8,    8,    8, 0x08,
      57,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Doorpwd[] = {
    "Doorpwd\0\0todoorpwd2secr()\0"
    "on_lineEdit_selectionChanged()\0"
    "on_dooretunbnz_clicked()\0"
};

const QMetaObject Doorpwd::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Doorpwd,
      qt_meta_data_Doorpwd, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Doorpwd::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Doorpwd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Doorpwd::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Doorpwd))
        return static_cast<void*>(const_cast< Doorpwd*>(this));
    return QWidget::qt_metacast(_clname);
}

int Doorpwd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: todoorpwd2secr(); break;
        case 1: on_lineEdit_selectionChanged(); break;
        case 2: on_dooretunbnz_clicked(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Doorpwd::todoorpwd2secr()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
