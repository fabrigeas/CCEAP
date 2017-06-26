#include "clientGui.h"
#include <QApplication>
#include <QProcess>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ClientGui w;


    w.show();


    //QProcess process;
    //process.start("./server -P 1112");
    //process.waitForFinished(-1); // will wait forever until finished

   // QString stdout = process.readAllStandardOutput();
   // QString stderr = process.readAllStandardError();

    //qDebug() << qPrintable(stdout);
    //qDebug() << qPrintable(stderr);



//    system("./server -h");


    return a.exec();

}
