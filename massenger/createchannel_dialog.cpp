#include "createchannel_dialog.h"
#include "ui_createchannel_dialog.h"

createchannel_Dialog::createchannel_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createchannel_Dialog)
{
    ui->setupUi(this);
    ui->chat_groupBox->hide();
}

createchannel_Dialog::~createchannel_Dialog()
{
    delete ui;
}

void createchannel_Dialog::on_confirm_pushButton_clicked()
{
    ui->chat_groupBox->show();
    ui->channelinformation_groupBox->hide();
}


void createchannel_Dialog::on_back_pushButton_clicked()
{
    hide();
}


void createchannel_Dialog::on_confirm_pushButton_2_clicked()
{
    ui->chat_groupBox->show();
    ui->channelinformation_groupBox->hide();
}


void createchannel_Dialog::on_back_pushButton_2_clicked()
{
    hide();
}


void createchannel_Dialog::on_back_chat_pushButton_clicked()
{
    ui->chat_groupBox->hide();
    ui->channelinformation_groupBox->show();
}
