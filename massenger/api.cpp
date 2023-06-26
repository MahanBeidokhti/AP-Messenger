#include "api.h"

API::API(const QString &Host, QObject *parent)
    : QObject{parent}
{
    host = Host;
    mngr = new QNetworkAccessManager(this);
    data = new QByteArray();
}

void API::sign(const QString &username,const  QString &password,const  QString &Fname,const  QString &Lname)
{
    QString command = host+"/signup?username="+username+"&password="+password;
    if(!Fname.isEmpty())
        command += "&firstname="+Fname;
    if(!Lname.isEmpty())
        command += "&lastname="+Lname;
    rep = mngr->get(QNetworkRequest(QUrl(command)));
    connect(rep,&QNetworkReply::finished,this,&API::Gather);
}
