#include "joingroup_dialog.h"
#include "ui_joingroup_dialog.h"

joingroup_Dialog::joingroup_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::joingroup_Dialog)
{
    ui->setupUi(this);
    ui->chat_groupBox->hide();
}

joingroup_Dialog::~joingroup_Dialog()
{
    delete ui;
}

void joingroup_Dialog::on_confirm_pushButton_clicked()
{
    ui->chat_groupBox->show();
    ui->groupinformation_groupBox->hide();
}


void joingroup_Dialog::on_back_pushButton_clicked()
{
    hide();
}


void joingroup_Dialog::on_back_chat_pushButton_clicked()
{
    ui->chat_groupBox->hide();
    ui->groupinformation_groupBox->show();
}

