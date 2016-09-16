/****************************************************************************
** Meta object code from reading C++ file 'recognition.h'
**
** Created: Mon Jun 3 11:38:02 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "recognition.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recognition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Recognition[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      27,   12,   12,   12, 0x05,
      33,   12,   12,   12, 0x05,
      51,   12,   12,   12, 0x05,
      62,   12,   12,   12, 0x05,
      77,   12,   12,   12, 0x05,
      91,   12,   12,   12, 0x05,
     106,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     128,  121,   12,   12, 0x08,
     148,   12,   12,   12, 0x08,
     175,   12,   12,   12, 0x08,
     189,   12,   12,   12, 0x08,
     200,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Recognition[] = {
    "Recognition\0\0passwordtip()\0pwt()\0"
    "informationshow()\0savedata()\0"
    "torecog2home()\0tohome2menu()\0"
    "tolong2input()\0tohome2input()\0result\0"
    "recsuccessfunc(int)\0on_recog2homebtn_clicked()\0"
    "recfaildeal()\0shibdeal()\0paintrect()\0"
};

const QMetaObject Recognition::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Recognition,
      qt_meta_data_Recognition, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Recognition::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Recognition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Recognition::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Recognition))
        return static_cast<void*>(const_cast< Recognition*>(this));
    return QWidget::qt_metacast(_clname);
}

int Recognition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: passwordtip(); break;
        case 1: pwt(); break;
        case 2: informationshow(); break;
        case 3: savedata(); break;
        case 4: torecog2home(); break;
        case 5: tohome2menu(); break;
        case 6: tolong2input(); break;
        case 7: tohome2input(); break;
        case 8: recsuccessfunc((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: on_recog2homebtn_clicked(); break;
        case 10: recfaildeal(); break;
        case 11: shibdeal(); break;
        case 12: paintrect(); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Recognition::passwordtip()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Recognition::pwt()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Recognition::informationshow()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Recognition::savedata()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Recognition::torecog2home()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Recognition::tohome2menu()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void Recognition::tolong2input()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void Recognition::tohome2input()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}
QT_END_MOC_NAMESPACE
