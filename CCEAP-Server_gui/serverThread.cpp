#include "serverThread.h"
#include <QDebug>

#include <QApplication>
#include <QProcess>
#include <QDebug>

#include "cceap.h"
#include "ui_cceap.h"



ServerThread::ServerThread(QString p):port(p) {}
void ServerThread::run()
{

    QStringList list;

    list << "server started on port: "+port;
            "\nwaiting for clients ...";

    //signal GUI that server has successfully started
    emit signal(list);

    qDebug() << "./server -P "+port;

    /*QProcess is used to execute an external program.
     * An alternative would be using a system call,
     * but because we still need to process the output of the external prograam
     * we need to start a process instead and
     * waitFirFinish blocks the code to wait for cceapServer to exit and return its
     * output before thisThread can proceed.
     * This is required because we need to process the output of the cceapServer.
    */

    QProcess cceapServer;
    cceapServer.start("./server -P "+port);

    //forces this.Thead to wait for output of cceapServer
    cceapServer.waitForFinished(-1);

    // read all cceapServer's outputs
    QString stdout = cceapServer.readAllStandardOutput();
    QString stderror = cceapServer.readAllStandardOutput();

    //list << process.readAllStandardError();
    //list << process.readAll();

    /*The output of cceapServer is a string, howver the GUI needs alist of packets
     * of list of error to display to users, so the stdout string must be split into a StringList
     * before been returned.
     * In the cceapServer output, each packet begins with received Data ...
     * so we use such pattern as delimiter to split the String into an String list
     *
    */
    QRegExp rx("received");
    list = stdout.split(rx);
    qDebug() << stderror;

    //return tha processed data(StringList) to the GUI then exit
    emit signal(list);


}
