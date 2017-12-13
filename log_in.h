#ifndef LOG_IN_H
#define LOG_IN_H

#include <QWidget>
#include <QLineEdit>
#include <QString>
#include <QByteArray>

namespace Ui {
class log_in;
}

class log_in : public QWidget
{
    Q_OBJECT

public:
    explicit log_in(QWidget *parent = 0);
    ~log_in();

signals:
    void display(int number);

private slots:
    void on_previousPushButton_clicked();

    void on_nextPushButton_clicked();

public slots:
    void selectMail(int data);

private:
    bool Login();

private:
    Ui::log_in *ui;
    QLineEdit *mail_address;
    QLineEdit *password;

    int MailType;
    char SmtpServer[20];
    char PopServer[20];
    int SmtpPort;
    int PopPort;
    bool UseSSL;

    QString MailAddress;
    QString Password;
};

#endif // LOG_IN_H
