#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    animation = new QPropertyAnimation (ui->btn_log, "geometry");
//    animation->setDuration(200);
//    animation->setStartValue(ui->btn_log->geometry());
//    animation->setEndValue(QRect(ui->btn_log->rect()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_log_clicked()
{
//    animation->start();
}

