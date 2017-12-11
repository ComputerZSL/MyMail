#include "mail_client.h"
#include "ui_mail_client.h"
#include "widget2_mail.h"

#include <QWidget>

Mail_Client::Mail_Client(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Mail_Client)
{
    ui->setupUi(this);
    initButtons();
}

Mail_Client::~Mail_Client()
{
    delete ui;
}

void Mail_Client::initButtons() {
    // 把按钮放在一个list里为了方便管理
    buttons.append(ui->inbox_2);
    buttons.append(ui->sent_2);
    buttons.append(ui->trash_2);

    foreach (QToolButton *b, buttons) {
        connect(b, SIGNAL(clicked()), this, SLOT(changeButtonStatus()));
    }

    ui->inbox_2->setProperty("first", "true");
    ui->inbox_2->click(); // 第二个按钮被按下, 即设置它的current属性为true
}

void Mail_Client::changeButtonStatus() {
    // 用按钮的current属性来控制被按下按钮的外观.
    // 当按钮被按下时, 设置其current属性为true,
    // 其他按钮的current属性为false, 为了更新按钮的外观.
    foreach (QToolButton *b, buttons) {
        b->setProperty("current", "false");
        b->setStyleSheet("QToolButton{background-color:rgb(247, 249, 249);color:rgb(84, 95, 102);font:11px;border-style:none;padding: 0px 20px;}"); // 刷新按钮的样式
    }


    QToolButton *source = qobject_cast<QToolButton *>(sender());
    source->setProperty("current", "true");
    source->setStyleSheet("background-color: rgb(255, 255, 255); ");
}

void Mail_Client::on_write_bar_clicked()
{
    ui->main_box->setCurrentWidget(ui->main_boxPage1);
}

void Mail_Client::on_inbox_2_clicked()
{
    ui->main_box->setCurrentWidget(ui->main_boxPage2);
}

void Mail_Client::on_trash_2_clicked()
{
    ui->main_box->setCurrentWidget(ui->main_boxPage3);
}

void Mail_Client::on_title_clicked()
{
    emit display(1);
}
