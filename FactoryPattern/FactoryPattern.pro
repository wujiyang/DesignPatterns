QT += core
QT -= gui

TARGET = FactoryPattern
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

CONFIG(debug, debug|release) {
    DESTDIR = ../bin/debug
}else{
    DESTDIR = ../bin/release
}



SOURCES += main.cpp

HEADERS += \
#    simplefactory.h \
#    factorymethod.h \
    abstractfactory.h

