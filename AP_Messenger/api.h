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
    explicit API(QString host, QObject *parent = nullptr);
    void sign(QString username, QString password, QString Fname, QString Lname);
    void log(QString username, QString password);
signals:
    void NoError(QByteArray* data);
    void Error(QByteArray* data);
    void Gather();
private:
    QNetworkAccessManager* mngr;
    QNetworkReply* rep;
    QByteArray* data;
    QString host;
};

#endif // API_H
