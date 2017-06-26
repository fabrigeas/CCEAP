#include "serverGui.h"
#include "ui_cceap.h"
#include "serverThread.h"

#include <QNetworkInterface>
#include <QApplication>
#include <QProcess>
#include <QDebug>



ServerGui::ServerGui(QWidget *parent) : QMainWindow(parent), ui(new Ui::CCEAP)
{

    //inig the GUI
    ui->setupUi(this);

    //hint the server's ipaddress
    ui->ip_lineEdit->setPlaceholderText("server listening to: "+getLocalIP());

    //init the model that formats the way data will be displayed in the ListView
    model = new QStringListModel(this);

    //welcome text that appears when server ui starts.
    //uses a stringlist so as to format each item to be clickable.
    QStringList List;
    List << ""
            "CCEAP protocol implementation. Copyright (C) 2016 Steffen Wendzel\n"
            "This program comes with ABSOLUTELY NO WARRANTY; for details see LICENSE file.\n"
            "This is free software, and you are welcome to redistribute it under certain conditions;\n"
            "for details see LICENSE file.\n"
            "CCEAP - Covert Channel Educational Analysis Protocol (Server)\n"
            "=> version: 0.5.2, written by: Steffen Wendzel, www.wendzel.de\n"
            "\n"
            "start the server to begin an analysis session:";

    //assigng the string list to the model and assign the model to the listview.
    //This is all that is required to display the hello world page.
    model->setStringList(List);
    ui->listView->setModel(model);

}

ServerGui::~ServerGui()
{
    delete ui;
}

//This is the handle for the button 'start server'.
void ServerGui::on_startServerButton_clicked()
{


    /*This handler instantiates the server thread.
     * and registers a handler so that the serveThread can then emit a signal back to the
     * gui once it has completed its task.
    The serverThread just executes the cceap-server with th port provided by the client.
    if client does not provide a port, a default port 4444 is used.

The server thread runs the server in background, waiting for any client connection.
After receiving and processing a clients connection, the cceap returns a string to the serverThread,
the serverThread then parses the returned string to the cceap gui in the form of a stringList that will
be placed on the ListView.*/
    ServerThread *serverThread = new ServerThread(ui->port_lineEdit->text());

    /*This registers the slot(the gui's dataReceivedFromServer(QStringList) function)
     * with a stringList parameter.
     * Once the serverThread has completed its task,
     * it will then emit a signal and return a QStringList to this gui
     * upon emiting the signal and QStringList, the function dataReceivedFromServer(QStringList)
     * will be called to process the result  QStringList.
    */
    QObject::connect(serverThread,SIGNAL(signal(QStringList)),this, SLOT(dataReceivedFromServer(QStringList)));

    //start the serverThread in background
    serverThread->start();

}

//This slot is called automatically when the serverThread emits its signal
void ServerGui::dataReceivedFromServer(QStringList list)
{
    stringList.clear();

    /*The stringList returned by the thread is already formated,
     * so this gui only needs to display it in its listview.
     *
    */
    this->stringList << list;
    this->model->setStringList(stringList);
    this->ui->listView->setModel(model);
    this->ui->listView->update();
}

//This returns the ip address to display to user so that they can connect with
QString ServerGui::getLocalIP(){
    foreach (const QHostAddress &address, QNetworkInterface::allAddresses())
        if (address.protocol() == QAbstractSocket::IPv4Protocol && address != QHostAddress(QHostAddress::LocalHost))
             return address.toString();
    return "127.0.0.1";
}
