#include "getuserlist_dialog.h"
#include "ui_getuserlist_dialog.h"

getuserlist_Dialog::getuserlist_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::getuserlist_Dialog)
{
    ui->setupUi(this);
}

getuserlist_Dialog::~getuserlist_Dialog()
{
    delete ui;
}

void getuserlist_Dialog::on_pushButton_clicked()
{
    hide();
}

