#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
<<<<<<< HEAD:msngr/mainwindow.h
=======
#include "chat_dialog.h"
#include "menu_dialog.h"


>>>>>>> origin/H-start:massenger/mainwindow.h

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

<<<<<<< HEAD:msngr/mainwindow.h
private:
    Ui::MainWindow *ui;
=======
private slots:
    void on_btn_log_clicked();
    void on_bottom_sign_page_clicked();
    void on_bottom_log_page_clicked();
    void on_Button_back_log_clicked();
    void on_Button_back_sign_clicked();

    void on_bottom_sign_clicked();

    void on_bottom_log_clicked();

private:
    Ui::MainWindow *ui;

    menu_Dialog *menu_dialog;

>>>>>>> origin/H-start:massenger/mainwindow.h
};
#endif // MAINWINDOW_H
