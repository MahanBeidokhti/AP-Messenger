#include "joinchannel_dialog.h"
#include "ui_joinchannel_dialog.h"

joinchannel_Dialog::joinchannel_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::joinchannel_Dialog)
{
    ui->setupUi(this);
    ui->chat_groupBox->hide();

}

joinchannel_Dialog::~joinchannel_Dialog()
{
    delete ui;
}

void joinchannel_Dialog::on_confirm_pushButton_clicked()
{
    ui->chat_groupBox->show();
    ui->channelinformation_groupBox->hide();
}


void joinchannel_Dialog::on_back_pushButton_clicked()
{
    hide();
}


void joinchannel_Dialog::on_back_chat_pushButton_clicked()
{
    ui->chat_groupBox->hide();
    ui->channelinformation_groupBox->show();
}

