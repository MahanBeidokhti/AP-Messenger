#ifndef LOGSIGN_PAGE_H
#define LOGSIGN_PAGE_H

#include "api.h"
#include <QDialog>

namespace Ui {
class logsign_page;
}

class logsign_page : public QDialog
{
    Q_OBJECT

public:
    explicit logsign_page(QWidget *parent = nullptr);
    ~logsign_page();

private slots:
    void on_bottom_sign_page_clicked();
    void on_bottom_log_page_clicked();
    void on_Button_back_log_clicked();
    void on_Button_back_sign_clicked();
    //reading data and saving to file
    void reader(QByteArray *data);
    void errorer(QNetworkReply *rep);
    void on_bottom_log_clicked();

private:
    Ui::logsign_page *ui;
    API *ap;

};

#endif // LOGSIGN_PAGE_H
