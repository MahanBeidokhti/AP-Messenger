#include "menu_dialog.h"
#include "ui_menu_dialog.h"

menu_Dialog::menu_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu_Dialog)
{
    ui->setupUi(this);
}

menu_Dialog::~menu_Dialog()
{
    delete ui;
}

void menu_Dialog::on_SMS_user_pushButton_clicked()
{
    sendMessageUser_dialog = new sendmessageuser_Dialog();
    sendMessageUser_dialog->show();
    connect(sendMessageUser_dialog, SIGNAL(clicked()),this , SLOT(connected()));
}


void menu_Dialog::on_SMS_group_pushButton_clicked()
{
    sendMessageGroup_dialog = new sendmessagegroup_Dialog();
    sendMessageGroup_dialog->show();
}


void menu_Dialog::on_SMS_channel_pushButton_clicked()
{
    sendMessageChannel_dialog = new sendmessagechannel_Dialog();
    sendMessageChannel_dialog->show();
}


void menu_Dialog::on_pushButton_clicked()
{
    hide();
}

