TEMPLATE = lib
CONFIG += dll
QT -= gui core

TARGET = ExternCDll
DESTDIR = ../bin

DEFINES += EXTERNCDLL_LIBRARY

SOURCES += externcdll.cpp

HEADERS += externcdll.h
