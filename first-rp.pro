#-------------------------------------------------
#
# Project created by QtCreator 2016-10-09T00:30:54
#
#-------------------------------------------------

QT       -= gui

TARGET = first-rp
TEMPLATE = lib

DEFINES += FIRSTRP_LIBRARY

SOURCES += firstrp.cpp

HEADERS += firstrp.h\
        first-rp_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
