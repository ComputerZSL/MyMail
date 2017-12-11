#ifndef LOG_IN_H
#define LOG_IN_H

#include <QWidget>

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

private:
    Ui::log_in *ui;
};

#endif // LOG_IN_H
