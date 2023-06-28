#ifndef MENU_DIALOG_H
#define MENU_DIALOG_H

#include <QDialog>
#include "sendmessageuser_dialog.h"
#include "sendmessagegroup_dialog.h"
#include "sendmessagechannel_dialog.h"



namespace Ui {
class menu_Dialog;
}

class menu_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit menu_Dialog(QWidget *parent = nullptr);
    ~menu_Dialog();

private slots:
    void on_SMS_user_pushButton_clicked();

    void on_SMS_group_pushButton_clicked();

    void on_SMS_channel_pushButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::menu_Dialog *ui;
    sendmessageuser_Dialog *sendMessageUser_dialog;
    sendmessagegroup_Dialog *sendMessageGroup_dialog;
    sendmessagechannel_Dialog *sendMessageChannel_dialog;

};

#endif // MENU_DIALOG_H
