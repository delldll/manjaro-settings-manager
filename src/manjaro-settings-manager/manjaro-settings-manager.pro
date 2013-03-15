#-------------------------------------------------
#
# Project created by QtCreator 2013-03-13T01:28:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = manjaro-settings-manager-gui
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    toolbarstylewidget.cpp \
    listwidget.cpp \
    pages/page_languagepackages.cpp \
    pagewidget.cpp \
    applydialog.cpp

HEADERS  += mainwindow.h \
    toolbarstylewidget.h \
    listwidget.h \
    pages/page_languagepackages.h \
    pagewidget.h \
    const.h \
    applydialog.h

FORMS    += mainwindow.ui \
    pages/page_languagepackages.ui \
    applydialog.ui

RESOURCES += \
    resources.qrc

unix:!macx: LIBS += -L$$OUT_PWD/../global/ -lglobal

INCLUDEPATH += $$PWD/../global
DEPENDPATH += $$PWD/../global

unix:!macx: PRE_TARGETDEPS += $$OUT_PWD/../global/libglobal.a



target.path = /usr/bin
INSTALLS += target