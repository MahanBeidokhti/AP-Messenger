#include "sendmessagegroup_dialog.h"
#include "ui_sendmessagegroup_dialog.h"

sendmessagegroup_Dialog::sendmessagegroup_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sendmessagegroup_Dialog)
{
    ui->setupUi(this);
    ui->chat_groupBox->hide();

}

sendmessagegroup_Dialog::~sendmessagegroup_Dialog()
{
    delete ui;
}

void sendmessagegroup_Dialog::on_confirm_pushButton_clicked()
{
    ui->chat_groupBox->show();
    ui->groupname_groupBox->hide();
}

void sendmessagegroup_Dialog::on_back_pushButton_clicked()
{
    hide();
}

void sendmessagegroup_Dialog::on_back_chat_pushButton_clicked()
{
    ui->chat_groupBox->hide();
    ui->groupname_groupBox->show();
}

