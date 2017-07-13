#include "serverGui.h"
#include <QApplication>


/*The app's entry point simply starts the server-gui*/
int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    ServerGui serverGui;
    serverGui.show();

    return application.exec();
}
