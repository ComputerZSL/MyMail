#include <iostream>

#include <QWidget>
#include <QDebug>

#include "widget.h"
#include "log_in.h"
#include "select_mail.h"
#include "ui_log_in.h"
#include "widget2_mail.h"

log_in::log_in(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::log_in)
{
    ui->setupUi(this);
    mail_address = ui->mail_address;
    password = ui->password;



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
    MailAddress = mail_address->text();
    Password = password->text();

    if(Login()){
        emit close();
        widget2_mail *Client = new widget2_mail();
        Client->show();
        this->close();
    }else {
        qDebug()<<tr("登录失败");
    }


}

void log_in::selectMail(int data){
    MailType = data;
    memset(SmtpServer,0,20);
    memset(PopServer,0,20);

    switch (MailType) {
    case QQ_MAIL:
        strcat(SmtpServer,"smtp.163.com");
        strcat(PopServer,"pop3.163.com");
        SmtpPort = 25;
        PopPort = 110;
        break;
    case YAHOO_MAIL:
        strcat(SmtpServer,"smtp.163.com");
        strcat(PopServer,"pop3.163.com");
        SmtpPort = 25;
        PopPort = 110;
        break;
    case WY_MAIL:
        strcat(SmtpServer,"smtp.163.com");
        strcat(PopServer,"pop3.163.com");
        SmtpPort = 25;
        PopPort = 110;
        break;
    default:
        break;
    }

}


bool log_in::Login(){
    int ret;
    QByteArray temp1,temp2;
    mailSocket socket;

    temp1 = MailAddress.toLatin1();
    char* login_mail = temp1.data();

    temp2 = Password.toLatin1();
    char* login_passwd = temp2.data();


    ret = socket.Connect(SmtpServer,SmtpPort);
    if (ret != 1) {
        qDebug()<<"Client : Connect 连接失败";
    }
    mailManager manager(&socket);

    if (manager.login_smtp(login_mail, login_passwd)) {
        return true;
    }else {
        return false;
    }



}
