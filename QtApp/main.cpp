#include "mainwindow.h"
#include <QApplication>
#include "main_frame.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Main_Frame w;
    w.show();

    return a.exec();
}
