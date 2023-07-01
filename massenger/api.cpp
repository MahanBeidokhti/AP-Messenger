#include "api.h"

API::API(const QString &Host, QObject *parent)
    : QObject{parent}
{
    host = Host;
    manager = new QNetworkAccessManager(this);
    data = new QByteArray();
}

void API::sign(const QString &username,const  QString &password,const  QString &Fname,const  QString &Lname)
{
    //making requist for sending to server.
    QString command = host+"/signup?username="+username+"&password="+password;
    //checking Ekhtyari variables
    if(!Fname.isEmpty())
        command += "&firstname="+Fname;
    if(!Lname.isEmpty())
        command += "&lastname="+Lname;
    //storing requist result in "rep" variable.
    rep = manager->get(QNetworkRequest(QUrl(command)));
    connect(rep,&QNetworkReply::finished,this,&API::Gather);
}

void API::log(const QString &username ,const QString &password)
{
    QString command = host+"/login?username="+username+"&password="+password;
    rep = manager->get(QNetworkRequest(QUrl(command)));
    connect(rep,&QNetworkReply::finished,this,&API::Gather);
}

void API::chatload(const QString &username, const QString &token, const QString &type)
{
    QString command = host+"/get"+type+"chats?token="+token+"&dst="+username;
    rep = manager->get(QNetworkRequest(QUrl(command)));
    if (type == "user")
    {
        connect(rep,&QNetworkReply::finished,this,&API::GetChat_Gather);
    }
    else if(type == "channel")
    {
        connect(rep,&QNetworkReply::finished,this,&API::GetChat_Gather_C);
    }
    else if(type == "group")
    {
        connect(rep,&QNetworkReply::finished,this,&API::GetChat_Gather_G);
    }

}

void API::sendMessage(const QString &body, const QString &username,const QString &token, const QString &type)
{
    QString command = host+"/sendmessage"+type+"?token="+token+"&dst="+username+"&body="+body;
    rep = manager->get(QNetworkRequest(QUrl(command)));
    if (type == "user")
    {
        connect(rep,&QNetworkReply::finished,this,&API::SendChat_Gather);
    }
    else if(type == "channel")
    {
        connect(rep,&QNetworkReply::finished,this,&API::SendChat_Gather_C);
    }
    else if(type == "group")
    {
        connect(rep,&QNetworkReply::finished,this,&API::SendChat_Gather_G);
    }
}

void API::Gather()
{
    //check if sending request was successful, read data.
    if(rep->error()==QNetworkReply::NoError)
    {
        *data = rep->readAll();
        emit NoError(data);
    }
    else
    {
        data = NULL;
        emit Error(rep);
    }
    rep->deleteLater();
}

void API::GetChat_Gather()
{
    if(rep->error()==QNetworkReply::NoError)
    {
        *data = rep->readAll();
        emit UCG_Succ(data);
    }
    else
    {
        data = NULL;
        emit UCG_Fail(rep);
    }
    rep->deleteLater();
}

void API::SendChat_Gather()
{
    if(rep->error()==QNetworkReply::NoError)
    {
        *data = rep->readAll();
        emit Send_UCG_Succ(data);
    }
    else
    {
        data = NULL;
        emit Send_UCG_Fail(rep);
    }
    rep->deleteLater();
}

void API::GetChat_Gather_G()
{
    if(rep->error()==QNetworkReply::NoError)
    {
        *data = rep->readAll();
        emit G_Succ(data);
    }
    else
    {
        data = NULL;
        emit G_Fail(rep);
    }
    rep->deleteLater();
}

void API::SendChat_Gather_G()
{
    if(rep->error()==QNetworkReply::NoError)
    {
        *data = rep->readAll();
        emit Send_G_Succ(data);
    }
    else
    {
        data = NULL;
        emit Send_G_Fail(rep);
    }
    rep->deleteLater();
}

void API::GetChat_Gather_C()
{
    if(rep->error()==QNetworkReply::NoError)
    {
        *data = rep->readAll();
        emit C_Succ(data);
    }
    else
    {
        data = NULL;
        emit C_Fail(rep);
    }
    rep->deleteLater();
}

void API::SendChat_Gather_C()
{
    if(rep->error()==QNetworkReply::NoError)
    {
        *data = rep->readAll();
        emit Send_C_Succ(data);
    }
    else
    {
        data = NULL;
        emit Send_C_Fail(rep);
    }
    rep->deleteLater();
}
