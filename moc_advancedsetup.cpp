/****************************************************************************
** Meta object code from reading C++ file 'advancedsetup.h'
**
** Created: Wed Apr 10 10:57:35 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "advancedsetup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'advancedsetup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Advancedsetup[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   14,   14,   14, 0x08,
      66,   14,   14,   14, 0x08,
      90,   14,   14,   14, 0x08,
     117,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Advancedsetup[] = {
    "Advancedsetup\0\0toadviceset2menu()\0"
    "on_advicesetreturnbnz_clicked()\0"
    "on_basesetbnz_clicked()\0"
    "on_systemtimebnz_clicked()\0"
    "on_networkbnz_clicked()\0"
};

const QMetaObject Advancedsetup::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Advancedsetup,
      qt_meta_data_Advancedsetup, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Advancedsetup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Advancedsetup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Advancedsetup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Advancedsetup))
        return static_cast<void*>(const_cast< Advancedsetup*>(this));
    return QWidget::qt_metacast(_clname);
}

int Advancedsetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: toadviceset2menu(); break;
        case 1: on_advicesetreturnbnz_clicked(); break;
        case 2: on_basesetbnz_clicked(); break;
        case 3: on_systemtimebnz_clicked(); break;
        case 4: on_networkbnz_clicked(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Advancedsetup::toadviceset2menu()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
