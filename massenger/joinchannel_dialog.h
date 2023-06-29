#ifndef JOINCHANNEL_DIALOG_H
#define JOINCHANNEL_DIALOG_H

#include <QDialog>

namespace Ui {
class joinchannel_Dialog;
}

class joinchannel_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit joinchannel_Dialog(QWidget *parent = nullptr);
    ~joinchannel_Dialog();

private:
    Ui::joinchannel_Dialog *ui;
};

#endif // JOINCHANNEL_DIALOG_H
