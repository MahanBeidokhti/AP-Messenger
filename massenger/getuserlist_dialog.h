#ifndef GETUSERLIST_DIALOG_H
#define GETUSERLIST_DIALOG_H

#include <QDialog>
#include "api.h"
#include <QFile>
#include <QTextStream>


namespace Ui {
class getuserlist_Dialog;
}

class getuserlist_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit getuserlist_Dialog(QWidget *parent = nullptr);
    ~getuserlist_Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::getuserlist_Dialog *ui;
};

#endif // GETUSERLIST_DIALOG_H
