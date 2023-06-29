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

void menu_Dialog::on_creategroup_pushButton_clicked()
{
    creategroup_dialog = new creategroup_Dialog();
    creategroup_dialog->show();
}


void menu_Dialog::on_createchannel_pushButton_clicked()
{
    createchannel_dialog = new createchannel_Dialog();
    createchannel_dialog->show();
}


void menu_Dialog::on_joingroup_pushButton_clicked()
{
    joingroup_dialog = new joingroup_Dialog();
    joingroup_dialog->show();
}


void menu_Dialog::on_joinchannel_pushButton_clicked()
{
    joinchannel_dialog = new joinchannel_Dialog();
    joinchannel_dialog->show();
}


void menu_Dialog::on_getuserlist_pushButton_clicked()
{
    getuserlist_dialog = new getuserlist_Dialog();
    getuserlist_dialog->show();
}


void menu_Dialog::on_getgrouplist_pushButton_clicked()
{
    getgrouplist_dialog = new getgrouplist_Dialog();
    getgrouplist_dialog->show();
}

void menu_Dialog::on_getchannellist_pushButton_clicked()
{
    getchannellist_dialog = new getchannellist_Dialog();
    getchannellist_dialog->show();
}

