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

void API::chatuser(const QString &username, const QString &token)
{
    QString command = host+"/getuserchats?token="+token+"&dst="+username;
    rep = manager->get(QNetworkRequest(QUrl(command)));
    connect(rep,&QNetworkReply::finished,this,&API::GetChat_Gather);
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
