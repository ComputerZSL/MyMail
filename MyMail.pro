#-------------------------------------------------
#
# Project created by QtCreator 2017-11-27T08:37:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyMail
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += /usr/local/Cellar/openssl/1.0.2n/include

LIBS += -L/usr/local/Cellar/openssl/1.0.2n/lib -lcrypto
LIBS += -L/usr/local/Cellar/openssl/1.0.2n/lib -lssl

SOURCES += \
        main.cpp \
        widget.cpp \
    select_mail.cpp \
    log_in.cpp \
    mail_client.cpp \
    widget2_mail.cpp \
    mail_details.cpp \
    mailSocket.cpp \
    mailManager.cpp \
    base64.cpp

HEADERS += \
        widget.h \
    log_in.h \
    select_mail.h \
    mail_client.h \
    widget2_mail.h \
    mail_details.h \
    mailSocket.h \
    mailManager.h \
    base64.h

FORMS += \
    select_mail.ui \
    log_in.ui \
    mail_client.ui \
    widget2_mail.ui \
    mail_details.ui

RESOURCES += \
    qq_mail.qrc \
    yahoo_mail.qrc \
    163_mail.qrc \
    client.qrc \
    icon.qrc

DISTFILES += \
    images/unread_sign.svg
