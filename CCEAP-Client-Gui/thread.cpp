#include "thread.h"
#include <QDebug>

#include <QApplication>
#include <QProcess>
#include <QDebug>

#include "thread.h"
#include "ui_cceap.h"



Thead::Thead(){}
Thead::Thead(QString data):command(data){}

void Thead::run()
{
    QStringList list;

    /*QProcess is used to execute an external program.
     * An alternative would be using a system call,
     * but because we still need to process the output of the external prograam
     * we need to start a process instead and
     * waitFirFinish blocks the code to wait for cceapServer to exit and return its
     * output before thisThread can proceed.
     * This is required because we need to process the output of the cceapServer.
    */

    QProcess thread;
    thread.start(command);

    //forces this.Thead to wait for output of cceapServer
    thread.waitForFinished(-1);


    list << thread.readAllStandardOutput() << thread.readAllStandardError();

    qDebug() << command;

    //return tha processed data(StringList) to the GUI then exit
    emit signal(list);


}

