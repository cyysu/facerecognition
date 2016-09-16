/****************************************************************************
** Meta object code from reading C++ file 'adduser.h'
**
** Created: Wed Apr 10 10:57:20 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "adduser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adduser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Adduser[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      27,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,    8,    8,    8, 0x08,
      71,    8,    8,    8, 0x08,
     104,    8,    8,    8, 0x08,
     129,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Adduser[] = {
    "Adduser\0\0requirefaceshow()\0returnuser()\0"
    "on_lineEdit_selectionChanged()\0"
    "on_lineEdit_4_selectionChanged()\0"
    "on_requireface_clicked()\0"
    "on_returnbutton_clicked()\0"
};

const QMetaObject Adduser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Adduser,
      qt_meta_data_Adduser, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Adduser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Adduser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Adduser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Adduser))
        return static_cast<void*>(const_cast< Adduser*>(this));
    return QWidget::qt_metacast(_clname);
}

int Adduser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: requirefaceshow(); break;
        case 1: returnuser(); break;
        case 2: on_lineEdit_selectionChanged(); break;
        case 3: on_lineEdit_4_selectionChanged(); break;
        case 4: on_requireface_clicked(); break;
        case 5: on_returnbutton_clicked(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Adduser::requirefaceshow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Adduser::returnuser()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
