#-------------------------------------------------
#
# Project created by QtCreator 2014-04-01T10:10:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LED_Cube
TEMPLATE = app


SOURCES += main.cpp\
        led_cube_main.cpp \
    LED_Cube_Project_Classes.cpp \
    loading.cpp

HEADERS  += led_cube_main.h \
    LED_Cube_Project_Classes.h \
    loading.h

FORMS    += led_cube_main.ui \
    loading.ui

RESOURCES += \
    images.qrc
