#-------------------------------------------------
#
# Project created by QtCreator 2016-09-13T04:07:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Projection
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

INCLUDEPATH += /usr/local/include \
                /usr/local/include/opencv \
                /usr/local/include/opencv2

LIBS += /usr/lib/x86_64-linux-gnu/libopencv_highgui.so \
    /usr/lib/x86_64-linux-gnu/libopencv_core.so \
/usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4 \
