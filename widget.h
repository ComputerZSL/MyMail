#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

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
