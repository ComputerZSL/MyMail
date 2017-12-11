#ifndef WIDGET2_MAIL_H
#define WIDGET2_MAIL_H

#include <QWidget>

class Mail_Client;
class mail_details;
class QStackedLayout;
class QVBoxLayout;

namespace Ui {
class widget2_mail;
}

class widget2_mail : public QWidget
{
    Q_OBJECT

public:
    explicit widget2_mail(QWidget *parent = 0);
    ~widget2_mail();



private:
     Mail_Client *mail_client;
     mail_details *Mail_Details;
     QStackedLayout *stackLayout;
     QVBoxLayout *mainLayout;
};

#endif // WIDGET2_MAIL_H
