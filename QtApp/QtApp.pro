#-------------------------------------------------
#
# Project created by QtCreator 2020-08-15T19:43:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtApp
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    display_panel.cpp \
    alt_panel.cpp \
    right_toolbar.cpp \
    down_toolbar.cpp \
    up_display.cpp \
    main_frame.cpp

HEADERS += \
        mainwindow.h \
    display_panel.h \
    alt_panel.h \
    right_toolbar.h \
    down_toolbar.h \
    up_display.h \
    main_frame.h

FORMS += \
        mainwindow.ui \
    display_panel.ui \
    alt_panel.ui \
    right_toolbar.ui \
    down_toolbar.ui \
    up_display.ui \
    main_frame.ui

RESOURCES += \
    images.qrc
