#include "widget.h"
// #include "ui_widget.h"
#include "select_mail.h"
#include "log_in.h"
#include "widget2_mail.h"

#include <QStackedLayout>
#include <QPushButton>
#include <QVBoxLayout>

Widget::Widget(QWidget *parent) :
    QWidget(parent)
{
    setFixedSize(400, 400);
    Select_mail = new select_mail;
    Log_in = new log_in;
    stackLayout = new QStackedLayout;
    stackLayout->addWidget(Select_mail);
    stackLayout->addWidget(Log_in);
    connect(Select_mail, &select_mail::display, stackLayout, &QStackedLayout::setCurrentIndex);             // 0
    connect(Log_in, &log_in::display, stackLayout, &QStackedLayout::setCurrentIndex);             // 1

    mainLayout = new QVBoxLayout;
    mainLayout->addLayout(stackLayout);
    setLayout(mainLayout);

    Log_in->setAttribute(Qt::WA_DeleteOnClose);
}

Widget::~Widget()
{
}
