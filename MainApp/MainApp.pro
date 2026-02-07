TEMPLATE = app
QT += core
QT -= gui

CONFIG += console
CONFIG -= app_bundle

TARGET = MainApp
DESTDIR = ../bin

SOURCES += main.cpp

# Подключение SimpleDll
INCLUDEPATH += ../SimpleDll
LIBS += -L../bin -lSimpleDll

# Подключение ExternCDll
INCLUDEPATH += ../ExternCDll
LIBS += -L../bin -lExternCDll

# Подключение интерфейса плагина
INCLUDEPATH += ../QtPluginDll

HEADERS += \
    ../SimpleDll/simpledll.h \
    ../ExternCDll/externcdll.h \
    ../QtPluginDll/plugininterface.h
