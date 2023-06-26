#ifndef API_H
#define API_H

#include <QObject>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QByteArray>
#include <QUrl>

class API : public QObject
{
    Q_OBJECT
public:
    //constructor
    explicit API(const QString &Host, QObject *parent = nullptr);
    //sending sign in command to server and gathering the results
    void sign(const QString &username ,const QString &password ,const QString &Fname,const QString &Lname);
    //sending Log in command to server and gathering the results
    void log(const QString &username ,const QString &password);
signals:
    //signal for situation wich one of the log or sign commands are corrupted
    void NoError(QByteArray* data);
    //signal of a situation wich there is no error and you want to use the response of the server
    void Error(QByteArray* data);
    //signal of gathering the server results
    void Gather();
private:
    //variable wich allows us to send request to the http server (api)
    QNetworkAccessManager* mngr;
    //variable wich allows us to recieve the response from the http server (api)
    QNetworkReply* rep;
    //variable for storing the server responses
    QByteArray* data;
    //host name (api.barafardayebehtar.ml:8080)
    QString host;
};

#endif // API_H
