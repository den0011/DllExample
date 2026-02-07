TEMPLATE = lib
CONFIG += dll
QT -= gui

TARGET = SimpleDll
DESTDIR = ../bin

DEFINES += SIMPLEDLL_LIBRARY

SOURCES += simpledll.cpp

HEADERS += simpledll.h
