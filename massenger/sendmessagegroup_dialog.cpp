#include "sendmessagegroup_dialog.h"
#include "ui_sendmessagegroup_dialog.h"

sendmessagegroup_Dialog::sendmessagegroup_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sendmessagegroup_Dialog)
{
    ui->setupUi(this);
}

sendmessagegroup_Dialog::~sendmessagegroup_Dialog()
{
    delete ui;
}
