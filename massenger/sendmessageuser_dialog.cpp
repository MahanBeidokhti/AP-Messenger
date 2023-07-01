#include "sendmessageuser_dialog.h"
#include "ui_sendmessageuser_dialog.h"
#include <iostream>
#include <string>


using namespace std;

sendmessageuser_Dialog::sendmessageuser_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sendmessageuser_Dialog)
{
    ui->setupUi(this);
    ui->chat_groupBox->hide();
    ap = new API(("http://api.barafardayebehtar.ml:8080"));
}

sendmessageuser_Dialog::~sendmessageuser_Dialog()
{
    delete ui;
}

void sendmessageuser_Dialog::on_confirm_pushButton_clicked()
{
   QString username = ui->username_lineEdit->text();
   QString tok;
   QFile tokenFile("token.txt");
   if (!tokenFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
      qDebug()<<"file cant be open";
   }
   else{
       QTextStream stream(&tokenFile);
       stream>>tok;
   }
   ap->chatload(username,tok,"user");
   connect(ap,&API::UCG_Succ,this,&::sendmessageuser_Dialog::UserChatLoader);
   connect(ap,&API::UCG_Fail,this,&::sendmessageuser_Dialog::UserChatError);
   ui->chat_groupBox->show();
   ui->username_groupBox->hide();
}


void sendmessageuser_Dialog::on_back_pushButton_clicked()
{
   hide();
}

void sendmessageuser_Dialog::on_back_chat_pushButton_clicked()
{
    ui->chat_groupBox->hide();
    ui->username_groupBox->show();
}

void sendmessageuser_Dialog::UserChatLoader(QByteArray *data)
{
    QJsonDocument JAnswer = QJsonDocument::fromJson(*data);
    QJsonObject JV = JAnswer.object();
    QJsonObject JV2;
    QString code =  JV.value("code").toString();
    qDebug()<< code << "  okokok";
    //file : writing JV.Value("Block ") to messages file and adding theme to qlistview

    QFile messageFile("msgfile.json");
    //QTextStream stream(&messageFile);

//    string msg = JV.value("message").toString().toStdString();
//    string a;
//    for( int i = 12 ; msg[i] != '-' ; i++)
//         a += msg[i];

//    int b = stoi(a);
     if (!messageFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
          qDebug()<<"file cant be open";
      }
      else{
           messageFile.write(JAnswer.toJson());
           messageFile.close();
      }



}

void sendmessageuser_Dialog::UserChatError(QNetworkReply *rep)
{
    ui->username_lineEdit->setPlaceholderText(rep->errorString());
}

void sendmessageuser_Dialog::on_send_pushButton_clicked()
{
    QString token;
    QFile tokenFile("token.txt");
    if (!tokenFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
       qDebug()<<"file cant be open";
    }
    else{
        QTextStream stream(&tokenFile);
        stream>>token;
    }
    qDebug()<<token;
    ap->sendMessage(ui->send_lineEdit->text(),ui->username_lineEdit->text(),token,"uesr");
    connect(ap,&API::Send_UCG_Succ,this,&::sendmessageuser_Dialog::UserSendLoader);
    connect(ap,&API::Send_UCG_Fail,this,&::sendmessageuser_Dialog::UserSendError);
}

void sendmessageuser_Dialog::UserSendLoader(QByteArray *data)
{
    QJsonDocument JAnswer = QJsonDocument::fromJson(*data);
    QJsonObject JV = JAnswer.object();
    QString code =  JV.value("code").toString();
    QString message = JV.value("message").toString();
    qDebug()<<code;
    qDebug()<<message;
}

void sendmessageuser_Dialog::UserSendError(QNetworkReply *rep)
{
    qDebug()<<rep->errorString();
}
