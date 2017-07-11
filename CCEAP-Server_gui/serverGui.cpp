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
    initMenuBar();

    //hint the server's ipaddress
    ui->ip_lineEdit->setPlaceholderText("server listening to: "+getLocalIP());

    //init the model that formats the way data will be displayed in the ListView
    model = new QStringListModel(this);

    //welcome text that appears when server ui starts.
    //uses a stringlist so as to format each item to be clickable.
    QStringList List;
    model->setStringList(List);
    ui->listView->setModel(model);

    execute("-h");
}

ServerGui::~ServerGui()
{
    delete ui;
}

//This is the handle for the button 'start server'.
/*This handler instantiates the server thread.
* and registers a handler so that the serveThread can then emit a signal back to the
* gui once it has completed its task.
* The serverThread just executes the cceap-server with th port provided by the client.
* if client does not provide a port, a default port 4444 is used.*/
//clear display
void ServerGui::on_startServerButton_clicked()
{

    QString port = ui->port_lineEdit->text();
    QStringList list;
    if(port.length()==4 && port.at(0).isDigit()&&port.at(1).isDigit()&&port.at(2).isDigit()&&port.at(3).isDigit())
        list << "server started on port: "+port+""
                                                "\nwaiting for clients ...";
    else
        list << "Error !! The port number that you have provided is invalid.\n"
             "please check it.\n";
    display(list);

    execute(" -P "+port);
}

/** This slot is called automatically when the serverThread emits its signal*/
void ServerGui::dataReceivedFromServer(QStringList list)
{

    /* The stringList returned by the thread is already formated,
     * so this gui only needs to display it in its listview.
     *
    */
    this->stringList << list;
    this->model->setStringList(stringList);
    this->ui->listView->setModel(model);
    this->ui->listView->update();
}

/** This returns the ip address to display to user so that they can connect with*/
QString ServerGui::getLocalIP(){
    foreach (const QHostAddress &address, QNetworkInterface::allAddresses())
        if (address.protocol() == QAbstractSocket::IPv4Protocol && address != QHostAddress(QHostAddress::LocalHost))
             return address.toString();
    return "127.0.0.1";
}

/** display a single line string*/
void ServerGui::display(QString data){
    clear();
    QStringList result;
    result.clear();
    result << data;
    model->setStringList(result);
    ui->listView->setModel(model);
    ui->listView->scrollToBottom();
    ui->listView->update();
}

/** parse and display a string list*/
void ServerGui::display(QStringList data){
    QStringList result;
    result.clear();
    model->setStringList(data);
    ui->listView->setModel(model);
    ui->listView->scrollToBottom();
    ui->listView->update();
}

void ServerGui::initMenuBar(){
    //Initialize the menubar
    ui->menuHelp->addAction("about CCEAP", this, SLOT(aboutCceapMenuBarHandler()));
    ui->menuHelp->addAction("developers", this, SLOT(developersMenuBarHandler()));
    ui->menuHelp->addAction("participate", this, SLOT(participateMenuBarHandler()));
    ui->menuHelp->addAction("help", this, SLOT(helpMenuBarHandler()));
}
void ServerGui::aboutCceapMenuBarHandler(){
    QStringList message;
    message << "The Covert Channel Educational Analysis Protocol (CCEAP)\n"
                " is a simple network protocol designed for teaching\n"
                "covert channels (network steganography) to professionals and students.\n\n"
                "The protocol is explicitly vulnerable against several hiding patterns,\n"
                "i.e. patterns that represent hiding methods (steganographic methods that\n"
               "create covert channels).The protocol's structure is simple and self-explanatory and\n"
                "its implementation is kept at a minimum level of code lines to make it \n"
               "especially accessible to students. \n";

    message << "The documentation of the protocol and the tool can be found here";

    message << "https://github.com/cdpxe/CCEAP/tree/master/documentation\n";

    message << " In addition, there is an academic paper available for download";

    message << "http://dl.acm.org/citation.cfm?id=2989037\n";

    message << "Please send requests and feedback to the author:Steffen Wendzel,";

    message << "www.wendzel.de (wendzel (at) hs-worms (dot) de). Research on \n"
               "steganographic/covert channel teaching in higher education is currently performed by \n"
               "Steffen Wendzel and Wojciech Mazurczyk.";

    display(message);

}
void ServerGui::developersMenuBarHandler(){

    QStringList message;
    message << "TThe CCEAP program is written by Prof. Dr. Steffen Wendzel. Visit the following link";
    message << "https://github.com/cdpxe/CCEAP\n";
    message << "www.wendzel.de";
    message << "wendzel@hs-worms.de\n";

    message << "This GUI tool has been developped as Bachelor Thesis Submitted as Partial Fulfilment \n"
               "of the Requirements for the Degree of B.Sc.  in Applied computer science \n"
               "at the University of applied sciences (Hochschule Worms) \n"
               "by Feugang Kemegni Fabrice "
               "\nSubmitted Summer, 2017\nsupervised by Prof.  Dr.  Stephen Wendzel";
    message <<  "\nFabrice, Feugang Kemegni:\n";
    message <<  "fabrigeas@gmail.com\n";
    message <<  "http://fabrigeas.eu.pn/\n";
    message <<  "https://github.com/fabrigeas/bachelor-thesis\n";
    display(message);

}
void ServerGui::participateMenuBarHandler(){
    QStringList message;
    message << "Please contact Prof Wendzel to participate to CCEAP.\n";
    message << "www.wendzel.de";
    message << "wendzel@hs-worms.de";

    display(message);
}
void ServerGui::helpMenuBarHandler(){execute("-h");}
void ServerGui::execute(QString parameter){
    QString command= "./server ";
    // determine if the architecture is windows or unix, then run the approptiate command
    #if (defined (_WIN32) || defined (_WIN64))
        command = "start server.exe "+parameter;
    #elif (defined (LINUX) || defined (__linux__))
        command = "./server "+parameter;
    #else
        command = "./server "+parameter;
    #endif
    stringList.clear();
    ServerThread *serverThread = new ServerThread(command);
    QObject::connect(serverThread,SIGNAL(signal(QStringList)),this, SLOT(dataReceivedFromServer(QStringList)));
    serverThread->start();
}
void ServerGui::clear(){
    stringList.clear();
    model->setStringList(stringList);
    ui->listView->setModel(model);
    ui->listView->scrollToBottom();
    ui->listView->update();
}
