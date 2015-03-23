#-------------------------------------------------
#
# Project created by QtCreator 2015-03-18T18:44:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Pro2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    usuario.cpp \
    producto.cpp \
    empleado.cpp \
    cliente.cpp \
    gerente.cpp \
    managerwindow.cpp \
    clientlostpass.cpp \
    clientwindow.cpp \
    workerpass.cpp \
    workerwindow.cpp \
    factura.cpp \
    addemp.cpp \
    addcliente.cpp \
    addproducto.cpp \
    error.cpp \
    aprobado.cpp \
    workerpasschanged.cpp

HEADERS  += mainwindow.h \
    usuario.h \
    producto.h \
    empleado.h \
    cliente.h \
    gerente.h \
    managerwindow.h \
    clientlostpass.h \
    clientwindow.h \
    workerpass.h \
    workerwindow.h \
    factura.h \
    addemp.h \
    addcliente.h \
    addproducto.h \
    error.h \
    aprobado.h \
    workerpasschanged.h

FORMS    += mainwindow.ui \
    managerwindow.ui \
    clientlostpass.ui \
    clientwindow.ui \
    workerpass.ui \
    workerwindow.ui \
    factura.ui \
    addemp.ui \
    addcliente.ui \
    addproducto.ui \
    error.ui \
    workerpasschanged.ui
