#ifndef ERRORVIEWCONTROLLER_H
#define ERRORVIEWCONTROLLER_H

#include <QWidget>

namespace Ui {
class ErrorViewController;
}

class ErrorViewController : public QWidget
{
    Q_OBJECT

public:
    explicit ErrorViewController(QWidget *parent = 0);
    ~ErrorViewController();

private slots:
    void on_pushButton_clicked();
    void displayError(
        const QString errmsg,
        const bool user_error);

private:
    Ui::ErrorViewController *ui;
};

#endif // ERRORVIEWCONTROLLER_H
