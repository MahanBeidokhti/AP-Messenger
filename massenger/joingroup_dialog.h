#ifndef JOINGROUP_DIALOG_H
#define JOINGROUP_DIALOG_H

#include <QDialog>

namespace Ui {
class joingroup_Dialog;
}

class joingroup_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit joingroup_Dialog(QWidget *parent = nullptr);
    ~joingroup_Dialog();

private:
    Ui::joingroup_Dialog *ui;
};

#endif // JOINGROUP_DIALOG_H
