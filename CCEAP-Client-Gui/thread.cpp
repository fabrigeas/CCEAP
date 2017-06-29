#include "thread.h"
#include <QDebug>

#include <QApplication>
#include <QProcess>
#include <QDebug>

#include "thread.h"
#include "ui_cceap.h"



Thead::Thead(){}

void Thead::run()
{
    qDebug() << "thread running";
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
    thread.start("./client -h ");

    //forces this.Thead to wait for output of cceapServer
    thread.waitForFinished(-1);

    /*read all cceapServer's outputs
     * both readAllStandardOutput and readAllStandardOutput
     * are returned in 'readAllStandardOutput'
     * so no need to read both of them
    */
    QString stdout = thread.readAllStandardOutput();

    /*The output of cceap is a string, however the GUI needs alist QStringList
     * of list of error to display to users, so the stdout string must be split into a StringList
     * before been returned.
     * In the cceapServer output, each packet begins with received Data ...
     * so we use such pattern as delimiter to split the String into an String list
     *
    */
    QRegExp rx("received");
    list = stdout.split(rx);


    //return tha processed data(StringList) to the GUI then exit
    emit signal(list);


}

