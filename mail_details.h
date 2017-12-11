#ifndef MAIL_DETAILS_H
#define MAIL_DETAILS_H

#include <QWidget>

namespace Ui {
class mail_details;
}

class mail_details : public QWidget
{
    Q_OBJECT

public:
    explicit mail_details(QWidget *parent = 0);
    ~mail_details();

signals:
    void display(int number);

private slots:
    void on_backto_client_clicked();

private:
    Ui::mail_details *ui;
};

#endif // MAIL_DETAILS_H
