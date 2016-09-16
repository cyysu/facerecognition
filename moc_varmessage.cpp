/****************************************************************************
** Meta object code from reading C++ file 'varmessage.h'
**
** Created: Wed Apr 10 10:57:46 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "varmessage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'varmessage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Varmessage[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      27,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Varmessage[] = {
    "Varmessage\0\0tovar2system()\0"
    "on_pushButton_clicked()\0"
};

const QMetaObject Varmessage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Varmessage,
      qt_meta_data_Varmessage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Varmessage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Varmessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Varmessage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Varmessage))
        return static_cast<void*>(const_cast< Varmessage*>(this));
    return QWidget::qt_metacast(_clname);
}

int Varmessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tovar2system(); break;
        case 1: on_pushButton_clicked(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Varmessage::tovar2system()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
