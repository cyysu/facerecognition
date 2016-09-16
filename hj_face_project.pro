#-------------------------------------------------
#
# Project created by QtCreator 2013-01-07T10:38:02
#
#-------------------------------------------------

QT       += core gui

QT      += sql

#INCLUDEPATH     += /usr/local/arm/opencv-armv7real210/include/opencv

#LIBS    += -L/usr/local/arm/opencv-armv7real210/lib -lcv \
##                                                    #-lhighgui \
##                                                    #-lcxcore \
#                                                    -larmreal210face7552 \
##                                                    #-ljpeg


INCLUDEPATH     += /usr/local/arm/include/

LIBS    += -L/usr/local/arm/lib/ -lcv \
                                 -lhighgui \
                                 -lcxcore \
#                                 -larmreal210face7552 \
                                 -larm-A8face7552
#                                  -ljpeg


TARGET = hj_face_project
TEMPLATE = app


SOURCES += main.cpp\
    recognition.cpp \
    avthread.cpp \
    user.cpp \
    adduser.cpp \
    recfailtip.cpp \
    mainmenu.cpp \
    mainkeyboard.cpp \
    login.cpp \
    numkeylogin.cpp \
    home.cpp \
    numkeyboard.cpp \
    informationface.cpp \
    recsuccession.cpp \
    security.cpp \
    administrator.cpp \
    addadminisrator.cpp \
    inputpwd.cpp \
    advancedsetup.cpp \
    baseset.cpp \
    systemtime.cpp \
    networkset.cpp \
    systemset.cpp \
    version.cpp \
    generaluser.cpp \
    finduser.cpp \
    doorpwd.cpp \
    capacity.cpp \
    application.cpp \
    pingb.cpp \
    varmessage.cpp \
    data.cpp \
    dealdata.cpp


HEADERS  += \
    recognition.h \
    avthread.h \
    user.h \
    adduser.h \
    mainkeyboard.h \
    common.h \
    recfailtip.h \
    mainmenu.h \
    login.h \
    numkeylogin.h \
    home.h \
    numkeyboard.h \
    informationface.h \
    recsuccession.h \
    security.h \
    administrator.h \
    addadminisrator.h \
    inputpwd.h \
    advancedsetup.h \
    baseset.h \
    systemtime.h \
    networkset.h \
    systemset.h \
    version.h \
    generaluser.h \
    finduser.h \
    doorpwd.h \
    capacity.h \
    application.h \
    pingb.h \
    varmessage.h \
    data.h \
    dealdata.h



FORMS    += \
    recognition.ui \
    user.ui \
    adduser.ui \
    mainkeyboard.ui \
    recfailtip.ui \
    mainmenu.ui \
    login.ui \
    numkeylogin.ui \
    home.ui \
    numkeyboard.ui \
    informationface.ui \
    recsuccession.ui \
    security.ui \
    administrator.ui \
    addadminisrator.ui \
    inputpwd.ui \
    advancedsetup.ui \
    baseset.ui \
    systemtime.ui \
    networkset.ui \
    systemset.ui \
    version.ui \
    generaluser.ui \
    finduser.ui \
    doorpwd.ui \
    capacity.ui \
    pingb.ui \
    varmessage.ui



RESOURCES += \
    resource.qrc
