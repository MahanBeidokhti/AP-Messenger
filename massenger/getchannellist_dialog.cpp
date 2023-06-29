#include "getchannellist_dialog.h"
#include "ui_getchannellist_dialog.h"

getchannellist_Dialog::getchannellist_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::getchannellist_Dialog)
{
    ui->setupUi(this);
}

getchannellist_Dialog::~getchannellist_Dialog()
{
    delete ui;
}
