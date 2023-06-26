#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // hide
    ui->Login_Box->hide();
    ui->Signin_Box->hide();
    //centeral alignments
    ui->Signin_Box->setAlignment(Qt::AlignHCenter);
    ui->Login_Box->setAlignment(Qt::AlignHCenter);
    ui->main_box->setAlignment(Qt::AlignHCenter);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_log_clicked()
{
//    animation->start();
}


void MainWindow::on_bottom_sign_page_clicked()
{
    //show signin page
    ui->main_box->hide();
    ui->Signin_Box->show();
    //writing informations on signin page
    QString username = ui->input_username_sign->text();
    QString password = ui->input_password_sign->text();
    QString first_name = ui->input_firstname->text();
    QString last_name = ui->input_lastname->text();
}


void MainWindow::on_bottom_log_page_clicked()
{
    //show login page
    ui->main_box->hide();
    ui->Login_Box->show();
    //writing informations on login page
    QString username = ui->input_username_log->text();
    QString password = ui->input_password_log->text();
}

void MainWindow::on_Button_back_sign_clicked()
{
    ui->Signin_Box->hide();
    ui->main_box->show();
}

void MainWindow::on_Button_back_log_clicked()
{
    ui->Login_Box->hide();
    ui->main_box->show();
}




