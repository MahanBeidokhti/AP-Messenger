#ifndef GETGROUPLIST_DIALOG_H
#define GETGROUPLIST_DIALOG_H

#include <QDialog>

namespace Ui {
class getgrouplist_Dialog;
}

class getgrouplist_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit getgrouplist_Dialog(QWidget *parent = nullptr);
    ~getgrouplist_Dialog();

private:
    Ui::getgrouplist_Dialog *ui;
};

#endif // GETGROUPLIST_DIALOG_H