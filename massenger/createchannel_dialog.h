#ifndef CREATECHANNEL_DIALOG_H
#define CREATECHANNEL_DIALOG_H

#include <QDialog>

namespace Ui {
class createchannel_Dialog;
}

class createchannel_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit createchannel_Dialog(QWidget *parent = nullptr);
    ~createchannel_Dialog();

private:
    Ui::createchannel_Dialog *ui;
};

#endif // CREATECHANNEL_DIALOG_H
