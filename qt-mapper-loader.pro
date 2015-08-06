#-------------------------------------------------
#
# Project created by QtCreator 2015-08-04T14:32:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt-mapper-loader
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mapperjsonconfig.cpp \
    linkview.cpp \
    signallist.cpp \
    listtab.cpp

HEADERS  += mainwindow.h \
    mapperjsonconfig.h \
    linkview.h \
    signallist.h \
    listtab.h

FORMS    += mainwindow.ui \
    linkview.ui \
    signallist.ui
