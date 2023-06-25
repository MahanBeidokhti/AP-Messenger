#ifndef API_H
#define API_H

#include <QObject>

class API : public QObject
{
    Q_OBJECT
public:
    explicit API(QObject *parent = nullptr);

signals:

};

#endif // API_H
