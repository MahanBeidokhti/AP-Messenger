#ifndef API_H
#define API_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QByteArray>
#include <QUrl>
#include <QJsonDocument>
#include <QJsonObject>
#include <QString>

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

    //getting user chats
    void chatload(const QString &username, const QString &token, const QString &type);
    //sending user message
    void sendMessage(const QString &body, const QString &username,const QString &token, const QString &type);
    //creating channel and group
    void creator(const QString &token, const QString &name, const QString &title, const QString &type);

signals:
    //signal for situation wich one of the log or sign commands are corrupted
    void NoError(QByteArray* data);
    //signal of a situation wich there is no error and you want to use the response of the server
    void Error(QNetworkReply* data);
    //User successful/fail
    void UCG_Succ(QByteArray* data);
    void UCG_Fail(QNetworkReply* data);
    //Sending message to User
    void Send_UCG_Succ(QByteArray* data);
    void Send_UCG_Fail(QNetworkReply* data);
    //groupe successful/fail
    void G_Succ(QByteArray* data);
    void G_Fail(QNetworkReply* data);
    //Sending message to groupe
    void Send_G_Succ(QByteArray* data);
    void Send_G_Fail(QNetworkReply* data);
    //channel successful/fail
    void C_Succ(QByteArray* data);
    void C_Fail(QNetworkReply* data);
    //Sending message to channel
    void Send_C_Succ(QByteArray* data);
    void Send_C_Fail(QNetworkReply* data);
    //creator connection check
    void Creat_C_Succ(QByteArray *data);
    void Creat_C_Fail(QNetworkReply* data);
    void Creat_G_Succ(QByteArray *data);
    void Creat_G_Fail(QNetworkReply* data);

private slots:
    //slot for gathering the server results
    void Gather();
    //User slot for gathering data in getting messages list
    void GetChat_Gather();
    //User slot for gathering data in sending message
    void SendChat_Gather();
    //Groupe slot for gathering data in getting messages list
    void GetChat_Gather_G();
    //Groupe slot for gathering data in sending message
    void SendChat_Gather_G();
    //Groupe slot for gathering data in getting messages list
    void GetChat_Gather_C();
    //Groupe slot for gathering data in sending message
    void SendChat_Gather_C();
    //Group slot for gathering data in creating group
    void Creat_Gather_G();
    //channel slot for gathering data in creating channel
    void Creat_Gather_C();

private:
    //variable wich allows us to send request to the http server (api)
    QNetworkAccessManager* manager;
    //variable wich allows us to recieve the response from the http server (api)
    QNetworkReply* rep;
    //variable for storing the server responses
    QByteArray* data;
    //host name (api.barafardayebehtar.ml:8080)
    QString host;

};

#endif // API_H
