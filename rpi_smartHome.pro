#-------------------------------------------------
#
# Project created by QtCreator 2017-10-05T13:13:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = rpi_smartHome
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui


target.path = /home/pi/
INSTALLS += target
