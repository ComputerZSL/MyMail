#include "widget2_mail.h"
#include "ui_widget2_mail.h"
#include "mail_client.h"
#include "mail_details.h"

#include <QStackedLayout>
#include <QPushButton>
#include <QVBoxLayout>

widget2_mail::widget2_mail(QWidget *parent) :
    QWidget(parent)
{
    setFixedSize(780, 600);
    mail_client = new Mail_Client;
    Mail_Details = new mail_details;
    stackLayout = new QStackedLayout;
    stackLayout->addWidget(mail_client);
    stackLayout->addWidget(Mail_Details);
    connect(mail_client, &Mail_Client::display, stackLayout, &QStackedLayout::setCurrentIndex);             // 0
    connect(Mail_Details, &mail_details::display, stackLayout, &QStackedLayout::setCurrentIndex);             // 1

    mainLayout = new QVBoxLayout;
    mainLayout->addLayout(stackLayout);
    mainLayout->setContentsMargins(0,0,0,0);
    mainLayout->setSpacing(0);
    setLayout(mainLayout);
}

widget2_mail::~widget2_mail()
{
}
