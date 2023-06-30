#ifndef GETCHANNELLIST_DIALOG_H
#define GETCHANNELLIST_DIALOG_H

#include <QDialog>
#include "api.h"
#include <QFile>
#include <QTextStream>


namespace Ui {
class getchannellist_Dialog;
}

class getchannellist_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit getchannellist_Dialog(QWidget *parent = nullptr);
    ~getchannellist_Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::getchannellist_Dialog *ui;
};

#endif // GETCHANNELLIST_DIALOG_H
