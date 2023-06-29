#include "getgrouplist_dialog.h"
#include "ui_getgrouplist_dialog.h"

getgrouplist_Dialog::getgrouplist_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::getgrouplist_Dialog)
{
    ui->setupUi(this);
}

getgrouplist_Dialog::~getgrouplist_Dialog()
{
    delete ui;
}

void getgrouplist_Dialog::on_pushButton_clicked()
{
    hide();
}

