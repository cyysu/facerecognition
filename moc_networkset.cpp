/****************************************************************************
** Meta object code from reading C++ file 'networkset.h'
**
** Created: Wed Apr 10 10:57:38 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "networkset.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkset.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Networkset[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   11,   11,   11, 0x08,
      61,   11,   11,   11, 0x08,
      83,   11,   11,   11, 0x08,
     107,   11,   11,   11, 0x08,
     131,   11,   11,   11, 0x08,
     154,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Networkset[] = {
    "Networkset\0\0tonetwork2advice()\0"
    "on_networkreturnbnz_clicked()\0"
    "on_ip_input_clicked()\0on_mask_input_clicked()\0"
    "on_rout_input_clicked()\0on_dns_input_clicked()\0"
    "setip(QString)\0"
};

const QMetaObject Networkset::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Networkset,
      qt_meta_data_Networkset, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Networkset::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Networkset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Networkset::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Networkset))
        return static_cast<void*>(const_cast< Networkset*>(this));
    return QWidget::qt_metacast(_clname);
}

int Networkset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tonetwork2advice(); break;
        case 1: on_networkreturnbnz_clicked(); break;
        case 2: on_ip_input_clicked(); break;
        case 3: on_mask_input_clicked(); break;
        case 4: on_rout_input_clicked(); break;
        case 5: on_dns_input_clicked(); break;
        case 6: setip((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Networkset::tonetwork2advice()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
