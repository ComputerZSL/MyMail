#include "mail_details.h"
#include "ui_mail_details.h"

#include <QWidget>

mail_details::mail_details(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mail_details)
{
    ui->setupUi(this);
}

mail_details::~mail_details()
{
    delete ui;
}

void mail_details::on_backto_client_clicked()
{
    emit display(0);
}
