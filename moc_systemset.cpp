/****************************************************************************
** Meta object code from reading C++ file 'systemset.h'
**
** Created: Wed Apr 10 10:57:39 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "systemset.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemset.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Systemset[] = {

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
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      27,   10,   10,   10, 0x08,
      56,   10,   10,   10, 0x08,
      80,   10,   10,   10, 0x08,
     103,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Systemset[] = {
    "Systemset\0\0tosystem2menu()\0"
    "on_systemreturnbnz_clicked()\0"
    "on_versionbnz_clicked()\0on_volumebnz_clicked()\0"
    "on_varbnz_clicked()\0"
};

const QMetaObject Systemset::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Systemset,
      qt_meta_data_Systemset, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Systemset::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Systemset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Systemset::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Systemset))
        return static_cast<void*>(const_cast< Systemset*>(this));
    return QWidget::qt_metacast(_clname);
}

int Systemset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tosystem2menu(); break;
        case 1: on_systemreturnbnz_clicked(); break;
        case 2: on_versionbnz_clicked(); break;
        case 3: on_volumebnz_clicked(); break;
        case 4: on_varbnz_clicked(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Systemset::tosystem2menu()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
