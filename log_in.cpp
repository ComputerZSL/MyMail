#include <QWidget>

#include "widget.h"
#include "log_in.h"
#include "ui_log_in.h"
#include "widget2_mail.h"

log_in::log_in(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::log_in)
{
    ui->setupUi(this);
}

log_in::~log_in()
{
    delete ui;
}

void log_in::on_previousPushButton_clicked()
{
    emit display(0);
}

void log_in::on_nextPushButton_clicked()
{
    emit close();
    widget2_mail *Client = new widget2_mail();
    Client->show();
    this->close();

}
