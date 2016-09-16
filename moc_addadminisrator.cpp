/****************************************************************************
** Meta object code from reading C++ file 'addadminisrator.h'
**
** Created: Mon Jun 3 11:38:10 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "addadminisrator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addadminisrator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Addadminisrator[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      35,   16,   16,   16, 0x05,
      54,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      65,   16,   16,   16, 0x08,
     101,   16,   16,   16, 0x08,
     137,   16,   16,   16, 0x08,
     170,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Addadminisrator[] = {
    "Addadminisrator\0\0requirefaceshow()\0"
    "toaddadmin2admin()\0savedata()\0"
    "on_adminnameline_selectionChanged()\0"
    "on_admincardline_selectionChanged()\0"
    "on_adminrequirefacebnz_clicked()\0"
    "on_addadminbnz_clicked()\0"
};

const QMetaObject Addadminisrator::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Addadminisrator,
      qt_meta_data_Addadminisrator, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Addadminisrator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Addadminisrator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Addadminisrator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Addadminisrator))
        return static_cast<void*>(const_cast< Addadminisrator*>(this));
    return QWidget::qt_metacast(_clname);
}

int Addadminisrator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: requirefaceshow(); break;
        case 1: toaddadmin2admin(); break;
        case 2: savedata(); break;
        case 3: on_adminnameline_selectionChanged(); break;
        case 4: on_admincardline_selectionChanged(); break;
        case 5: on_adminrequirefacebnz_clicked(); break;
        case 6: on_addadminbnz_clicked(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Addadminisrator::requirefaceshow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Addadminisrator::toaddadmin2admin()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Addadminisrator::savedata()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
