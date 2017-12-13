#ifndef SELECT_MAIL_H
#define SELECT_MAIL_H

#include <QWidget>

#include <QDebug>
#include <QString>
#include <QButtonGroup>
#include <QRadioButton>

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
    void selectMail(int mail);

private slots:
    void on_nextPushButton_clicked();

private:
    Ui::select_mail *ui;
    log_in *Log_in;

    QButtonGroup *group;
    QRadioButton *WY_Button;
    QRadioButton *QQ_Button;
    QRadioButton *Yahoo_Button;
};

#endif // SELECT_MAIL_H
