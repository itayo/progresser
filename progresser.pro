#-------------------------------------------------
#
# Project created by QtCreator 2017-04-22T11:11:25
#
#-------------------------------------------------

QT       += core gui thread

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11
QMAKE_CXXFLAGS += -std=c++11
TARGET = progresser
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    task.cpp \
    taskcountup.cpp \
    taskbase.cpp \
    taskhandler.cpp \
    taskhandlerinterface.cpp

HEADERS  += mainwindow.h \
    task.h \
    taskcountup.h \
    taskbase.h \
    taskhandler.h \
    taskhandlerinterface.h

FORMS    += mainwindow.ui
