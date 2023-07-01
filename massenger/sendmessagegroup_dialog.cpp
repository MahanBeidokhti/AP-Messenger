#include "sendmessagegroup_dialog.h"
#include "ui_sendmessagegroup_dialog.h"
#include <string>
#include <QEventLoop>

using namespace std;

sendmessagegroup_Dialog::sendmessagegroup_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sendmessagegroup_Dialog)
{
    ui->setupUi(this);
    ui->chat_groupBox->hide();
    ap = new API(("http://api.barafardayebehtar.ml:8080"));
}

sendmessagegroup_Dialog::~sendmessagegroup_Dialog()
{
    delete ui;
}

void sendmessagegroup_Dialog::on_confirm_pushButton_clicked()
{
    QString username = ui->groupname_lineEdit->text();
    QString tok;
    QFile tokenFile("token.txt");
    if (!tokenFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
       qDebug()<<"file cant be open";
    }
    else{
        QTextStream stream(&tokenFile);
        stream>>tok;
    }
    ap->chatload(username,tok,"group");
    connect(ap,&API::G_Succ,this,&::sendmessagegroup_Dialog::GroupeChatLoader);
    connect(ap,&API::G_Fail,this,&::sendmessagegroup_Dialog::GroupeChatError);
    ui->chat_groupBox->show();
    ui->groupname_groupBox->hide();
}

void sendmessagegroup_Dialog::on_back_pushButton_clicked()
{
    hide();
}

void sendmessagegroup_Dialog::on_back_chat_pushButton_clicked()
{
    ui->chat_groupBox->hide();
    ui->groupname_groupBox->show();
}


void sendmessagegroup_Dialog::GroupeChatLoader(QByteArray *data)
{
     ui->name_label->setText(ui->groupname_lineEdit->text());
     QJsonDocument JAnswer = QJsonDocument::fromJson(*data);
     QJsonObject JV = JAnswer.object();
     QString code =  JV.value("code").toString();
     qDebug()<< code;
     QString filename = ui->groupname_lineEdit->text() + "_chat.json" ;
     QFile messageFile(filename);
     if (!messageFile.open(QIODevice::WriteOnly))
     {
         qDebug()<<"file cant be open";
     }
     else
     {

         messageFile.write(JAnswer.toJson());
         messageFile.close();
         ui->message_textEdit->clear();
         string msg = JV.value("message").toString().toStdString();
         string a;
         for( int i = 11 ; msg[i] != '-' ; i++)
             a += msg[i];
         int b = stoi(a);
         for( int i = 0 ; i < b ; i++)
         {
             QString blck = QString::fromStdString("block " + to_string(i));
             QString message = JV.value(blck).toObject().value("src").toString() + " : " + JV.value(blck).toObject().value("body").toString() + " (" + JV.value(blck).toObject().value("date").toString() + ")\n";
             ui->message_textEdit->append(message);
         }
    }
}

void sendmessagegroup_Dialog::GroupeChatError(QNetworkReply *rep)
{
    qDebug()<<rep->errorString();
    ui->name_label->setText(ui->groupname_lineEdit->text() + "(offline)" );
    QJsonDocument JAnswer;
    QJsonObject JV;

    QString filename = ui->groupname_lineEdit->text() + "_chat.json" ;
    QFile messageFile(filename);
    if (!messageFile.open(QIODevice::ReadOnly) )
    {
        qDebug()<<"file cant be open";
    }
    else
    {
        QByteArray jsonData = messageFile.readAll();
        JAnswer = QJsonDocument::fromJson(jsonData);
        JV = JAnswer.object();
        messageFile.close();

        string msg = JV.value("message").toString().toStdString();
        string a;
        for( int i = 11 ; msg[i] != '-' ; i++)
            a += msg[i];

        int b = stoi(a);

        for( int i = 0 ; i < b ; i++)
        {
            QString blck = QString::fromStdString("block " + to_string(i));
            QString message = JV.value(blck).toObject().value("src").toString() + " : " + JV.value(blck).toObject().value("body").toString() + "(" + JV.value(blck).toObject().value("date").toString() + ")\n";
            ui->message_textEdit->append(message);
        }
    }
}

void sendmessagegroup_Dialog::on_send_pushButton_clicked()
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

    ap = new API(("http://api.barafardayebehtar.ml:8080"));

    ap->sendMessage(ui->send_lineEdit->text(),ui->groupname_lineEdit->text(),token,"user");
    connect(ap,&API::Send_G_Succ,this,&::sendmessagegroup_Dialog::GroupeSendLoader);
    connect(ap,&API::Send_G_Fail,this,&::sendmessagegroup_Dialog::GroupeSendError);

    ap->chatload(ui->groupname_lineEdit->text(),token,"user");
    connect(ap,&API::G_Succ,this,&::sendmessagegroup_Dialog::GroupeChatLoader);
    connect(ap,&API::G_Fail,this,&::sendmessagegroup_Dialog::GroupeChatError);


}

void sendmessagegroup_Dialog::GroupeSendLoader(QByteArray *data)
{
    QJsonDocument JAnswer = QJsonDocument::fromJson(*data);
    QJsonObject JV = JAnswer.object();
    QString code =  JV.value("code").toString();
    QString message = JV.value("message").toString();
    qDebug()<<code;
    qDebug()<<message;
}

void sendmessagegroup_Dialog::GroupeSendError(QNetworkReply *rep)
{
    qDebug()<<rep->errorString();
}
