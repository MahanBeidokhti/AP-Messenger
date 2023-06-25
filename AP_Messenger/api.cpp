#include "api.h"

API::API(QString Host, QObject *parent)
    : QObject{parent}
{
    host = Host;
    mngr = new QNetworkAccessManager(this);
    data = new QByteArray();
}

void API::sign(QString username, QString password, QString Fname, QString Lname)
{
    QString command = host+"/signup?username="+username+"&password="+password;
    if(!Fname.isEmpty())
        command += "&firstname="+Fname;
    if(!Lname.isEmpty())
        command += "&lastname="+Lname;
    rep = mngr->get(QNetworkRequest(QUrl(command)));
    connect(rep,&QNetworkReply::finished(),this,&API::Gather());
}
