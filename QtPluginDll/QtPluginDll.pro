TEMPLATE = lib
CONFIG += plugin
QT += core
QT -= gui

TARGET = QtPluginDll
DESTDIR = ../bin

SOURCES += qtplugindll.cpp

HEADERS += qtplugindll.h \
           plugininterface.h
