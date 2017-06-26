#-------------------------------------------------
#
# Project created by QtCreator 2017-06-11T11:40:16
#
#-------------------------------------------------

QT       += core gui
QT += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CCEAP-Server
TEMPLATE = app


SOURCES += main.cpp\
        cceap.cpp \
    serverThread.cpp

HEADERS  += cceap.h \
    serverThread.h

FORMS    += cceap.ui
