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

void API::Gather()
{
    //check if sending request was successful, read data.
    if(rep->error()==QNetworkReply::NoError)
    {
        *data = rep->readAll();
        qDebug("pllllllll");
        emit NoError(data);
    }
    else
    {
        qDebug("pooooooo");
        data = NULL;
        emit Error(rep);
    }
    rep->deleteLater();
}
