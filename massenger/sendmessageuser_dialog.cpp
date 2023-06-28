#include "sendmessageuser_dialog.h"
#include "ui_sendmessageuser_dialog.h"

sendmessageuser_Dialog::sendmessageuser_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sendmessageuser_Dialog)
{
    ui->setupUi(this);
    ui->chat_groupBox->hide();

}

sendmessageuser_Dialog::~sendmessageuser_Dialog()
{
    delete ui;
}

void sendmessageuser_Dialog::on_confirm_pushButton_clicked()
{
   ui->chat_groupBox->show();
   ui->username_groupBox->hide();
}


void sendmessageuser_Dialog::on_back_pushButton_clicked()
{
   hide();
}


void sendmessageuser_Dialog::on_pushButton_clicked()
{
    ui->chat_groupBox->hide();
    ui->username_groupBox->show();
}

