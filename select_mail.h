#ifndef SELECT_MAIL_H
#define SELECT_MAIL_H

#include <QWidget>

class log_in;

namespace Ui {
class select_mail;
}

class select_mail : public QWidget
{
    Q_OBJECT

public:
    explicit select_mail(QWidget *parent = 0);
    ~select_mail();

signals:
    void display(int number);

private slots:
    void on_nextPushButton_clicked();

private:
    Ui::select_mail *ui;
    log_in *Log_in;
};

#endif // SELECT_MAIL_H
