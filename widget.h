#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include "mailSocket.h"
#include "mailManager.h"

#define QQ_MAIL 10001
#define YAHOO_MAIL 10002
#define WY_MAIL 10003

class select_mail;
class log_in;
class QStackedLayout;
class QVBoxLayout;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    select_mail *Select_mail;
    log_in *Log_in;
    QStackedLayout *stackLayout;
    QVBoxLayout *mainLayout;

};

#endif // WIDGET_H
