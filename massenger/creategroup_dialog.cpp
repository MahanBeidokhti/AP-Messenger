#include "creategroup_dialog.h"
#include "ui_creategroup_dialog.h"

creategroup_Dialog::creategroup_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::creategroup_Dialog)
{
    ui->setupUi(this);
    ui->chat_groupBox->hide();
}

creategroup_Dialog::~creategroup_Dialog()
{
    delete ui;
}

void creategroup_Dialog::on_confirm_pushButton_clicked()
{
    ui->chat_groupBox->show();
    ui->groupinformation_groupBox->hide();
}


void creategroup_Dialog::on_back_pushButton_clicked()
{
    hide();
}


void creategroup_Dialog::on_confirm_pushButton_2_clicked()
{
    ui->chat_groupBox->show();
    ui->groupinformation_groupBox->hide();
}


void creategroup_Dialog::on_back_pushButton_2_clicked()
{
    hide();
}


void creategroup_Dialog::on_back_chat_pushButton_clicked()
{
    ui->chat_groupBox->hide();
    ui->groupinformation_groupBox->show();
}

