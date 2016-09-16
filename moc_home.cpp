/****************************************************************************
** Meta object code from reading C++ file 'home.h'
**
** Created: Wed Apr 10 10:57:27 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "home.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'home.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Home[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x08,
      30,    5,    5,    5, 0x08,
      42,    5,    5,    5, 0x08,
      55,    5,    5,    5, 0x08,
      66,    5,    5,    5, 0x08,
      78,    5,    5,    5, 0x08,
      87,    5,    5,    5, 0x08,
     100,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Home[] = {
    "Home\0\0on_pushButton_clicked()\0closehome()\0"
    "login2home()\0showthis()\0checkface()\0"
    "pbshow()\0home2input()\0home2menu()\0"
};

const QMetaObject Home::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Home,
      qt_meta_data_Home, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Home::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Home::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Home::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Home))
        return static_cast<void*>(const_cast< Home*>(this));
    return QWidget::qt_metacast(_clname);
}

int Home::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_clicked(); break;
        case 1: closehome(); break;
        case 2: login2home(); break;
        case 3: showthis(); break;
        case 4: checkface(); break;
        case 5: pbshow(); break;
        case 6: home2input(); break;
        case 7: home2menu(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
