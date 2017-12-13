#include "select_mail.h"
#include "ui_select_mail.h"
#include "widget.h"

#include <QWidget>

select_mail::select_mail(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::select_mail)
{
    ui->setupUi(this);
    group = new QButtonGroup(this);
    WY_Button = ui->WY_Button;
    QQ_Button = ui->qq_Button;
    Yahoo_Button = ui->yahoo_Button;
    group->addButton(WY_Button);
    group->addButton(QQ_Button);
    group->addButton(Yahoo_Button);
}

select_mail::~select_mail()
{
    delete ui;
}

void select_mail::on_nextPushButton_clicked()
{
    bool isChoosed = false;
    QList<QAbstractButton*> list = group->buttons();
    foreach (QAbstractButton *pButton, list){
        if(pButton->isChecked()){
            QString objectName = pButton->objectName();
            if(objectName == tr("WY_Button")){
                selectMail(WY_MAIL);
                isChoosed = true;
            }else if (objectName == tr("qq_Button")) {
                selectMail(QQ_MAIL);
                isChoosed = true;
            }else if (objectName == tr("yahoo_Button")) {
                selectMail(YAHOO_MAIL);
                isChoosed = true;
            }
        }
    }
    if(isChoosed){
        emit display(1);
    }else {
        //显示警告框
        qDebug("请选择一种邮件");
    }
}
