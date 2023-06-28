#ifndef SENDMESSAGEGROUP_DIALOG_H
#define SENDMESSAGEGROUP_DIALOG_H

#include <QDialog>

namespace Ui {
class sendmessagegroup_Dialog;
}

class sendmessagegroup_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit sendmessagegroup_Dialog(QWidget *parent = nullptr);
    ~sendmessagegroup_Dialog();

private:
    Ui::sendmessagegroup_Dialog *ui;
};

#endif // SENDMESSAGEGROUP_DIALOG_H
