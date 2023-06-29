#include "createchannel_dialog.h"
#include "ui_createchannel_dialog.h"

createchannel_Dialog::createchannel_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createchannel_Dialog)
{
    ui->setupUi(this);
}

createchannel_Dialog::~createchannel_Dialog()
{
    delete ui;
}
