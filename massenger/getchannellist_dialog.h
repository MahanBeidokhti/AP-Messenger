#ifndef GETCHANNELLIST_DIALOG_H
#define GETCHANNELLIST_DIALOG_H

#include <QDialog>

namespace Ui {
class getchannellist_Dialog;
}

class getchannellist_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit getchannellist_Dialog(QWidget *parent = nullptr);
    ~getchannellist_Dialog();

private:
    Ui::getchannellist_Dialog *ui;
};

#endif // GETCHANNELLIST_DIALOG_H
