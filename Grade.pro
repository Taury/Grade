#-------------------------------------------------
#
# Project created by QtCreator 2019-05-18T11:00:45
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Grade
TEMPLATE = app


SOURCES += main.cpp\
        grade.cpp \
    gpa.cpp \
    mytablemodel.cpp

HEADERS  += grade.h \
    gpa.h \
    mytablemodel.h

FORMS    += grade.ui \
    gpa.ui
