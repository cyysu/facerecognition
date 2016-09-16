/****************************************************************************
** Meta object code from reading C++ file 'user.h'
**
** Created: Wed Apr 10 10:57:19 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "user.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'user.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_User[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x05,
      19,    5,    5,    5, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,    5,    5,    5, 0x08,
      59,    5,    5,    5, 0x08,
      73,    5,    5,    5, 0x08,
      85,    5,    5,    5, 0x08,
     103,    5,    5,    5, 0x08,
     129,    5,    5,    5, 0x08,
     159,    5,    5,    5, 0x08,
     189,    5,    5,    5, 0x08,
     214,    5,    5,    5, 0x08,
     230,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_User[] = {
    "User\0\0returnmenu()\0returngeneral()\0"
    "on_pushButton_clicked()\0dealadduser()\0"
    "showrecog()\0showinformation()\0"
    "on_pushButton_5_clicked()\0"
    "on_deleteuserbutton_clicked()\0"
    "on_modifyuserbutton_clicked()\0"
    "on_userfindbnz_clicked()\0updatauser(int)\0"
    "hideuser()\0"
};

const QMetaObject User::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_User,
      qt_meta_data_User, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &User::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *User::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *User::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_User))
        return static_cast<void*>(const_cast< User*>(this));
    return QWidget::qt_metacast(_clname);
}

int User::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: returnmenu(); break;
        case 1: returngeneral(); break;
        case 2: on_pushButton_clicked(); break;
        case 3: dealadduser(); break;
        case 4: showrecog(); break;
        case 5: showinformation(); break;
        case 6: on_pushButton_5_clicked(); break;
        case 7: on_deleteuserbutton_clicked(); break;
        case 8: on_modifyuserbutton_clicked(); break;
        case 9: on_userfindbnz_clicked(); break;
        case 10: updatauser((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: hideuser(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void User::returnmenu()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void User::returngeneral()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
