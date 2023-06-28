#ifndef SENDMESSAGEUSER_DIALOG_H
#define SENDMESSAGEUSER_DIALOG_H

#include <QDialog>

namespace Ui {
class sendmessageuser_Dialog;
}

class sendmessageuser_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit sendmessageuser_Dialog(QWidget *parent = nullptr);
    ~sendmessageuser_Dialog();

private slots:
    void on_confirm_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_back_chat_pushButton_clicked();

private:
    Ui::sendmessageuser_Dialog *ui;
};

#endif // SENDMESSAGEUSER_DIALOG_H
