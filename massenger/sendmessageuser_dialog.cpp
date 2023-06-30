#include "sendmessageuser_dialog.h"
#include "ui_sendmessageuser_dialog.h"

sendmessageuser_Dialog::sendmessageuser_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sendmessageuser_Dialog)
{
    ui->setupUi(this);
    ui->chat_groupBox->hide();

}

sendmessageuser_Dialog::~sendmessageuser_Dialog()
{
    delete ui;
}

void sendmessageuser_Dialog::on_confirm_pushButton_clicked()
{
   QString username = ui->username_lineEdit->text();
   ap = new API(("http://api.barafardayebehtar.ml:8080"));
   //file
   QString tok;
   ap->chatuser(username,tok);
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
    QString code =  JV.value("code").toString();
    //file...
}

void sendmessageuser_Dialog::UserChatError(QNetworkReply *rep)
{

}
