#include "cceap.h"
#include <QApplication>


/*The app's entry point simply starts the server-gui*/
int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    CCEAP serverGui;
    serverGui.show();

    return application.exec();
}
