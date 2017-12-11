#ifndef MAIL_CLIENT_H
#define MAIL_CLIENT_H

#include <QWidget>
#include <QList>

class QToolButton;
class mail_details;

namespace Ui {
class Mail_Client;
}

class Mail_Client : public QWidget
{
    Q_OBJECT

public:
    explicit Mail_Client(QWidget *parent = 0);
    ~Mail_Client();

private slots:
    void changeButtonStatus();

    void on_write_bar_clicked();

    void on_inbox_2_clicked();

    void on_title_clicked();

signals:
    void display(int number);

private:
    Ui::Mail_Client *ui;
    QList<QToolButton *> buttons;
    mail_details *Mail_Details;

    void initButtons();
};

#endif // MAIL_CLIENT_H
