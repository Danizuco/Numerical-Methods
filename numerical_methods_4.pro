#-------------------------------------------------
#
# Project created by QtCreator 2017-11-16T13:38:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = numerical_methods_4
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
        numerical_methods_4.cpp \
        e_gausiana.cpp \
        euler.cpp \
        g_seidel.cpp \
        integ.cpp \
        interplacion.cpp \
        n_r.cpp \
        punto_fijo.cpp \
        r_l_m.cpp \
        r_lineal.cpp \
        rungekutta.cpp  \
        derivacion.cpp
HEADERS += \
        numerical_methods_4.h \
        e_gausiana.h \
        euler.h \
        g_seidel.h \
        integ.h \
        interplacion.h \
        n_r.h \
        punto_fijo.h \
         r_l_m.h \
        r_lineal.h \
        rungekutta.h  \
        derivacion.h
FORMS += \
        numerical_methods_4.ui \
        e_gausiana.ui \
        euler.ui \
        g_seidel.ui \
        integ.ui \
        interplacion.ui \
        n_r.ui \
        punto_fijo.ui \
         r_l_m.ui \
        r_lineal.ui \
        rungekutta.ui  \
        derivacion.ui
