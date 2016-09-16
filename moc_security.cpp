/****************************************************************************
** Meta object code from reading C++ file 'security.h'
**
** Created: Wed Apr 10 10:57:30 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "security.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'security.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Security[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      28,    9,    9,    9, 0x08,
      50,    9,    9,    9, 0x08,
      81,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Security[] = {
    "Security\0\0tosecurity2menu()\0"
    "on_adminbnz_clicked()\0"
    "on_securityreturnbnz_clicked()\0"
    "on_secritypwd_clicked()\0"
};

const QMetaObject Security::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Security,
      qt_meta_data_Security, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Security::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Security::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Security::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Security))
        return static_cast<void*>(const_cast< Security*>(this));
    return QWidget::qt_metacast(_clname);
}

int Security::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tosecurity2menu(); break;
        case 1: on_adminbnz_clicked(); break;
        case 2: on_securityreturnbnz_clicked(); break;
        case 3: on_secritypwd_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Security::tosecurity2menu()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
