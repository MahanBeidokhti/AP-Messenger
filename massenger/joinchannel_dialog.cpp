#include "joinchannel_dialog.h"
#include "ui_joinchannel_dialog.h"

joinchannel_Dialog::joinchannel_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::joinchannel_Dialog)
{
    ui->setupUi(this);
}

joinchannel_Dialog::~joinchannel_Dialog()
{
    delete ui;
}
