#include "serverThread.h"
#include <QDebug>

#include <QApplication>
#include <QProcess>
#include <QDebug>

#include "serverGui.h"
#include "ui_cceap.h"



ServerThread::ServerThread(QString p):command(p) {}

void ServerThread::run()
{

    QStringList list;

    /*
    //veryfy that port number is valid, if not use defaul port number
    if(port.length()==4 && port.at(0).isDigit()&&port.at(1).isDigit()&&port.at(2).isDigit()&&port.at(3).isDigit()){
        list << "server started on port: "+port;
                "\nwaiting for clients ...";

        //signal GUI that server has successfully started

    }
    else{
        list << "Error !! The port number that you have provided is invalid.\n"
             "please check it.\n";
    }

    emit signal(list);
    */


    /*QProcess is used to execute an external program.
     * An alternative would be using a system call,
     * but because we still need to process the output of the external prograam
     * we need to start a process instead and
     * waitFirFinish blocks the code to wait for cceapServer to exit and return its
     * output before thisThread can proceed.
     * This is required because we need to process the output of the cceapServer.
    */

    QProcess cceapServer;
    cceapServer.start(command);

    //forces this.Thead to wait for output of cceapServer
    cceapServer.waitForFinished(-1);

    /*read all cceapServer's outputs
     * both readAllStandardOutput and readAllStandardOutput
     * are returned in 'readAllStandardOutput'
     * so no need to read both of them
    */
    QString stdout = cceapServer.readAllStandardOutput();
    //QString stderror = cceapServer.readAllStandardOutput();


    /*The output of cceapServer is a string, howver the GUI needs alist of packets
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

/* This function checks that the given port is valid,
 * if not valid, returns the default port
*/
QString validateIp(QString port){

    //veryfy that port number is valid, if not use defaul port number
    if(port.length()==4)
        if(port.at(0).isDigit()&&port.at(1).isDigit()&&port.at(2).isDigit()&&port.at(3).isDigit()) ;
        else port="4444";
    else port="4444";
    return port;
}
