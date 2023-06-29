#ifndef CREATECHANNEL_DIALOG_H
#define CREATECHANNEL_DIALOG_H

#include <QDialog>
#include "api.h"


namespace Ui {
class createchannel_Dialog;
}

class createchannel_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit createchannel_Dialog(QWidget *parent = nullptr);
    ~createchannel_Dialog();

private slots:
    void on_confirm_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_confirm_pushButton_2_clicked();

    void on_back_pushButton_2_clicked();

    void on_back_chat_pushButton_clicked();

private:
    Ui::createchannel_Dialog *ui;
};

#endif // CREATECHANNEL_DIALOG_H
