#-------------------------------------------------
#
# Project created by QtCreator 2017-06-11T11:40:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CCEAP-Server
TEMPLATE = app


SOURCES += main.cpp\
        cceap.cpp \
    mythread.cpp

HEADERS  += cceap.h \
    mythread.h

FORMS    += cceap.ui
