/****************************************************************************
** Meta object code from reading C++ file 'systemtime.h'
**
** Created: Wed Apr 10 10:57:37 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "systemtime.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemtime.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Systemtime[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   11,   11,   11, 0x08,
      59,   11,   11,   11, 0x08,
      84,   11,   11,   11, 0x08,
     110,   11,   11,   11, 0x08,
     134,   11,   11,   11, 0x08,
     159,   11,   11,   11, 0x08,
     183,   11,   11,   11, 0x08,
     201,   11,   11,   11, 0x08,
     218,   11,   11,   11, 0x08,
     235,   11,   11,   11, 0x08,
     253,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Systemtime[] = {
    "Systemtime\0\0tosystem2advice()\0"
    "on_systemreturnbnz_clicked()\0"
    "on_year_intput_clicked()\0"
    "on_month_intput_clicked()\0"
    "on_day_intput_clicked()\0"
    "on_hour_intput_clicked()\0"
    "on_min_intput_clicked()\0dealyear(QString)\0"
    "dealmon(QString)\0dealday(QString)\0"
    "dealhour(QString)\0dealmin(QString)\0"
};

const QMetaObject Systemtime::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Systemtime,
      qt_meta_data_Systemtime, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Systemtime::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Systemtime::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Systemtime::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Systemtime))
        return static_cast<void*>(const_cast< Systemtime*>(this));
    return QWidget::qt_metacast(_clname);
}

int Systemtime::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tosystem2advice(); break;
        case 1: on_systemreturnbnz_clicked(); break;
        case 2: on_year_intput_clicked(); break;
        case 3: on_month_intput_clicked(); break;
        case 4: on_day_intput_clicked(); break;
        case 5: on_hour_intput_clicked(); break;
        case 6: on_min_intput_clicked(); break;
        case 7: dealyear((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: dealmon((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: dealday((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: dealhour((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: dealmin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Systemtime::tosystem2advice()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
