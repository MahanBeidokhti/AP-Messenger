#include "sendmessagechannel_dialog.h"
#include "ui_sendmessagechannel_dialog.h"

sendmessagechannel_Dialog::sendmessagechannel_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sendmessagechannel_Dialog)
{
    ui->setupUi(this);
}

sendmessagechannel_Dialog::~sendmessagechannel_Dialog()
{
    delete ui;
}
