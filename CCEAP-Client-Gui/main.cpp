#include "clientGui.h"
#include <QApplication>
#include <QProcess>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    ClientGui clientGui;


    clientGui.show();

    return application.exec();

}
