#ifndef SENDMESSAGECHANNEL_DIALOG_H
#define SENDMESSAGECHANNEL_DIALOG_H

#include <QDialog>

namespace Ui {
class sendmessagechannel_Dialog;
}

class sendmessagechannel_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit sendmessagechannel_Dialog(QWidget *parent = nullptr);
    ~sendmessagechannel_Dialog();

private:
    Ui::sendmessagechannel_Dialog *ui;
};

#endif // SENDMESSAGECHANNEL_DIALOG_H
