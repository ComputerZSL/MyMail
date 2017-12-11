#include "select_mail.h"
#include "ui_select_mail.h"
#include "widget.h"

#include <QWidget>

select_mail::select_mail(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::select_mail)
{
    ui->setupUi(this);
}

select_mail::~select_mail()
{
    delete ui;
}

void select_mail::on_nextPushButton_clicked()
{
    emit display(1);
}
