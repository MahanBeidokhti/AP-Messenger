#ifndef SENDMESSAGEGROUP_DIALOG_H
#define SENDMESSAGEGROUP_DIALOG_H

#include <QDialog>
#include "api.h"
#include <QFile>
#include <QTextStream>
#include "message.h"

namespace Ui {
class sendmessagegroup_Dialog;
}

class sendmessagegroup_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit sendmessagegroup_Dialog(QWidget *parent = nullptr);
    ~sendmessagegroup_Dialog();

private slots:
    void on_confirm_pushButton_clicked();
    void on_back_pushButton_clicked();
    void on_back_chat_pushButton_clicked();
    void ChatLoader(QByteArray *data);
    void ChatError(QNetworkReply *rep);
    void on_send_pushButton_clicked();
    void SendLoader(QByteArray *data);
    void SendError(QNetworkReply *rep);

private:
    Ui::sendmessagegroup_Dialog *ui;
    API *ap;
};

#endif // SENDMESSAGEGROUP_DIALOG_H
