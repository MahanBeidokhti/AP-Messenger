#include "joingroup_dialog.h"
#include "ui_joingroup_dialog.h"

joingroup_Dialog::joingroup_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::joingroup_Dialog)
{
    ui->setupUi(this);
}

joingroup_Dialog::~joingroup_Dialog()
{
    delete ui;
}
