/****************************************************************************
** Meta object code from reading C++ file 'administrator.h'
**
** Created: Wed Apr 10 10:57:31 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "administrator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'administrator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Administrator[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   14,   14,   14, 0x08,
      68,   14,   14,   14, 0x08,
      80,   14,   14,   14, 0x08,
      98,   14,   14,   14, 0x08,
     112,   14,   14,   14, 0x08,
     127,   14,   14,   14, 0x08,
     155,   14,   14,   14, 0x08,
     183,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Administrator[] = {
    "Administrator\0\0toadminstrotomenu()\0"
    "on_addadministratorbnz_clicked()\0"
    "showrecog()\0showinformation()\0"
    "writetodata()\0dealaddadmin()\0"
    "on_adminreturnbnz_clicked()\0"
    "on_deleteadminbnz_clicked()\0"
    "on_modifyadminbnz_clicked()\0"
};

const QMetaObject Administrator::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Administrator,
      qt_meta_data_Administrator, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Administrator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Administrator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Administrator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Administrator))
        return static_cast<void*>(const_cast< Administrator*>(this));
    return QWidget::qt_metacast(_clname);
}

int Administrator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: toadminstrotomenu(); break;
        case 1: on_addadministratorbnz_clicked(); break;
        case 2: showrecog(); break;
        case 3: showinformation(); break;
        case 4: writetodata(); break;
        case 5: dealaddadmin(); break;
        case 6: on_adminreturnbnz_clicked(); break;
        case 7: on_deleteadminbnz_clicked(); break;
        case 8: on_modifyadminbnz_clicked(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Administrator::toadminstrotomenu()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
