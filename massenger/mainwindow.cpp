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
    ui->log_welcome->hide();
    ui->log_error->hide();
    //centeral alignments
    ui->Signin_Box->setAlignment(Qt::AlignHCenter);
    ui->Login_Box->setAlignment(Qt::AlignHCenter);
    ui->main_box->setAlignment(Qt::AlignHCenter);
    ap = new API("http://api.barafardayebehtar.ml:8080");
    //use of reader if login or sign in was successful
    connect(ap,&API::NoError,this,&::MainWindow::reader);
    //use of errorer if login or signin was failed
    connect(ap,&API::Error,this,&::MainWindow::errorer);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_bottom_sign_page_clicked()
{
    //show signin page
    ui->main_box->hide();
    ui->Signin_Box->show();
}


void MainWindow::on_bottom_log_page_clicked()
{
    //show login page
    ui->main_box->hide();
    ui->Login_Box->show();
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

void MainWindow::reader(QByteArray *data)
{
    qDebug("heloooooooooooooooo");
    QJsonDocument JAnswer = QJsonDocument::fromJson(*data);
    QJsonObject JV = JAnswer.object();
    QString code =  JV.value("code").toString();
    QString message =JV.value("message").toString();
    qDebug()<<code<<message;
    if(code == "200")
    {
        ui->log_welcome->setText(message);
        ui->log_welcome->show();
    }
}

void MainWindow::errorer(QNetworkReply *rep)
{
    ui->log_error->setText(rep->errorString());
    ui->log_error->show();
}

void MainWindow::on_bottom_log_clicked()
{
    QString usrnm = ui->input_username_log->text();
    QString pswrd = ui->input_password_log->text();
    ap->log(usrnm,pswrd);
    ui->input_username_log->clear();
    ui->input_password_log->clear();
}

