#-------------------------------------------------
#
# Project created by QtCreator 2017-02-15T09:03:48
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = simplevan
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    student.cpp \
    database.cpp

HEADERS  += mainwindow.h \
    student.h \
    database.h

FORMS    += mainwindow.ui
