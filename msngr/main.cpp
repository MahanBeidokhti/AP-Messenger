#include "mainwindow.h"
#include "logsign_page.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    logsign_page w;
    w.show();
    return a.exec();
}
