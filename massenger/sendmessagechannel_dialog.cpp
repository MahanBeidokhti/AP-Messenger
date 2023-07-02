#include "sendmessagechannel_dialog.h"
#include "ui_sendmessagechannel_dialog.h"

sendmessagechannel_Dialog::sendmessagechannel_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sendmessagechannel_Dialog)
{
    ui->setupUi(this);
    ui->chat_groupBox->hide();
}

sendmessagechannel_Dialog::~sendmessagechannel_Dialog()
{
    delete ui;
}

void sendmessagechannel_Dialog::on_confirm_pushButton_clicked()
{
    ui->chat_groupBox->show();
    ui->channelname_groupBox->hide();
}


void sendmessagechannel_Dialog::on_back_pushButton_clicked()
{
    hide();
}


void sendmessagechannel_Dialog::on_back_chat_pushButton_clicked()
{
    ui->chat_groupBox->hide();
    ui->channelname_groupBox->show();
}

