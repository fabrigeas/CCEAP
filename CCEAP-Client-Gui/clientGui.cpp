#include "clientGui.h"
#include "ui_cceap.h"
#include "thread.h"
#include "thread.h"

#include <QProcess>
#include <QDebug>

ClientGui::ClientGui(QWidget *parent) :QMainWindow(parent),ui(new Ui::CCEAP)
{
    //init the gui
    ui->setupUi(this);
    initMenuBar();

    model = new QStringListModel(this);
    ui->listView->setModel(model);
    ui->i_label->setVisible(false);
    ui->i_spinbox->setVisible(false);
    ui->s_label->setVisible(false);
    ui->s_plainTextEdit->setVisible(false);

    //validate ipaddress
    QRegExp rx( "[0-9]{1,3}\\.[0-9]{1,3}\\.[0-9]{1,3}\\.[0-9]{1,3}" );
    QRegExpValidator regValidator( rx, 0 );
    ui->D_lineEdit->setValidator( &regValidator );


    QString command = "./client -h";

    // determine if the architecture is windows or unix, then run the approptiate command
    #if (defined (_WIN32) || defined (_WIN64))
        command = "start client.exe -h ";
        qDebug() << "running on Windows!";
    #elif (defined (LINUX) || defined (__linux__))
        command = "./client -h ";
        qDebug() << runninng on Linux!";
    #else
        command = "./client -h ";
        qDebug() << runninng on Linux!";

    #endif
    execute(command);
}

ClientGui::~ClientGui()
{
    delete ui;
}

void ClientGui::execute(QString command){
    Thead *thread = new Thead(command);
    QObject::connect(thread,SIGNAL(signal(QStringList)),this, SLOT(dataReceived(QStringList)));
    thread->start();
}
void ClientGui::executeParse(QString command){
    Thead *thread = new Thead(command);
    QObject::connect(thread,SIGNAL(signal(QStringList)),this, SLOT(parseData(QStringList)));
    thread->start();
}

char* ClientGui::qStringToCharPtr(QString str){
    char*  cstr = new char[str.length()];
    for(int i =0; i < str.length(); i++)
        cstr[i] = str.at(i).toLatin1();
    return cstr;
}

void ClientGui::clcearScreen()
{

    //clear display
    result.clear();
    model->setStringList(result);
    ui->listView->setModel(model);
    ui->listView->scrollToBottom();
    ui->listView->update();
}

void ClientGui::display(QString data){

    result.clear();
    result << data;
    model->setStringList(result);
    ui->listView->setModel(model);
    ui->listView->scrollToBottom();
    ui->listView->scrollToTop();
    ui->listView->update();
}

void ClientGui::display(QStringList data){

    result.clear();
    model->setStringList(data);
    ui->listView->setModel(model);
    ui->listView->scrollToBottom();
    ui->listView->update();
}

bool ClientGui::isIPAddress(QString ipaddr)
{
    qDebug() <<ipaddr;
    QRegExp rx( "[0-9]{1,3}\\.[0-9]{1,3}\\.[0-9]{1,3}\\.[0-9]{1,3}" );
    QRegExpValidator regValidator( rx, 0 );

    return true;
}

void ClientGui::initMenuBar(){ //Initialize the menubar
    ui->menuHelp->addAction("about CCEAP", this, SLOT(aboutCceap()));
    ui->menuHelp->addAction("developers", this, SLOT(developers()));
    ui->menuHelp->addAction("participate", this, SLOT(participate()));
    ui->menuHelp->addAction("help", this, SLOT(help()));
}
void ClientGui::aboutCceap(){
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

    message << "\mwww.wendzel.de (wendzel (at) hs-worms (dot) de). Research on \n"
               "steganographic/covert channel teaching in higher education is currently performed by \n"
               "Steffen Wendzel and Wojciech Mazurczyk.";
    display(message);

}
void ClientGui::developers(){

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
void ClientGui::participate(){
    QStringList message;
    message << "Please contact Prof Wendzel to participate to CCEAP.\n";
    message << "www.wendzel.de";
    message << "wendzel@hs-worms.de";

    display(message);
}
void ClientGui::help(){
    QString command = "./client -h";

    // determine if the architecture is windows or unix, then run the approptiate command
    #if (defined (_WIN32) || defined (_WIN64))
        command = "start client.exe -h ";
        qDebug() << "running on Windows!";
    #elif (defined (LINUX) || defined (__linux__))
        command = "./client -P ";
        qDebug() << runninng on Linux!";
    #else
        command = "./client -P ";
        qDebug() << runninng on Linux!";

    #endif

    execute(command);

}
void ClientGui::dataReceived(QStringList data)
{
    display(data);
}


void ClientGui::on_sendDataB_clicked()
{

    QString parameters="";
    QString list;

    QString temp;

    /*
// read user inputs

    QString D, //x   Destination IP x to connect to
            P, //x   TCP port x to connect to
            v, //     Activate verbose mode
            t; // x   Use the inter-arrival times in 'x' between packets (x should
                //   be given in the format 'Time_1,Time_2,...' (in usec/1000)

                //Parameters specific for the CCEAP protocol:

    QString c, // x   Number of packets to send (default: 10)
            i, // x   Sequence number x to use for CCEAP
            p, // x   Duplicate the packet with the sequence number x
            x, // x   Exclude the packet with the sequence number x
            s, // x   Use a pre defined sequence numbers given in x in the form: 'Seq_1,Seq_2,Seq_3', e.g. '1,2,3', where 1 is the ISN
            d, // x   Use CCEAP destination address x
            o, // x   Optional header elements specified via x.
                   //Formatting: 'Option_1/Option_2/Option_3/...' where each
                   //option is formatted as 'Identifier,Type,Value'.
                   //Maximum of allowed options: 32
                   //Example for a string with 3 options: '1,2,3/4,5,6/7,8,9'
            u; // x   Use digit x instead of 0 as `dummy' value in the main header

    */

    //parse users inputs

    /*Parse port number.
     *A port number must be 4 charachters,
     * each character must be a digit,
     * if any of these conditions fails, use the default port number 4444.
    */
    QString port,tmp = ui->P_lineEdit->text();
    if(tmp.length()==4 && tmp.at(0).isDigit() && tmp.at(1).isDigit() && tmp.at(3).isDigit() && tmp.at(3).isDigit())
        port=tmp;
    else
        port= "4444";
    parameters += " -P "+port;
    list += "\n'-P' TCP port x to connect to: "+port;

    /*Parse Ip address.
     * An ip address must be atleast 6 charaters and at most 15
     * must contain 3 dots in which
     * the firs and last characters are digits,
     * a dot should not preceed another
    */
    QString ip = ui->D_lineEdit->text();
    if(ip.length()<6)
        ip="127.0.0.1";
    parameters += " -D "+ip;
    list += "\n'-D'  Destination IP x to connect to: "+ip;

    // is verbose enabled?
    if(ui->v_checkBox->isChecked()){
        parameters += " -v ";
        list += "\n'-v' verbose mode: true";
    }
    else list += "\n'-v' verbose mode: false";

    parameters += " -c "+QString::number(ui->c_spinBox->value());
    list += "\n'-c' Number of packets to send: "+QString::number(ui->c_spinBox->value());

    parameters += " -u "+QString::number(ui->u_spinBox->value());
    list += "\n'-u' Dummy' value in the main header: "+QString::number(ui->u_spinBox->value());

    /*User can only use predefined sequence numbers | a starting sequence number.
     * Users choice will then make the appropriate input visible
    */
    if(ui->i_label->isVisible()){
        parameters += " -i "+QString::number(ui->i_spinbox->value());
        list += "\n'-i' Sequence number x to use for CCEAP: "+QString::number(ui->i_spinbox->value());
    }
    if(ui->s_label->isVisible()){
        parameters += " -s "+ui->s_plainTextEdit->toPlainText();
        list += "\n'-s' pre defined sequence numbers: "+ui->s_plainTextEdit->toPlainText();
    }

    temp =ui->t_plainTextEdit->toPlainText();
    if(temp.length() > 1){
        parameters += " -t "+temp;
        list += "\n'-t' Inter-arrival times between packets: "+temp;
    }

    temp = QString::number(ui->p_spinBox->value());
    if(temp.length()>0){
        parameters += " -p "+temp;
        list += "\n'-p' Seq_No of packets to be duplicated : "+temp;
    }

    temp = QString::number(ui->x_spinBox->value());
    if(temp.length()>0){
        parameters += " -x "+temp;
        list += "\n'-x' Packets to be Excluded: "+temp;
    }

    temp = ui->d_lineEdit->text();
    if(temp.length()>0){
        parameters += " -d "+temp;
        list += "\n'-d' CCEAP destination address: "+temp;
    }

    temp = ui->o_lineEdit->text();
    if(temp.length()>0){
        parameters += " -o "+temp;
        list += "\n'-o' Optional header elements: "+temp;
    }


    //parse command
    char* command;

    // determine if the architecture is windows or unix, then run the approptiate command
    #if (defined (_WIN32) || defined (_WIN64))
        command = qStringToCharPtr("start client.exe "+parameters);
    #elif (defined (LINUX) || defined (__linux__))
        command = qStringToCharPtr("./client "+parameters);
    #else
        command = qStringToCharPtr("./client "+parameters);
    #endif

    executeParse(command);


    /* Start a process.
     * this process is used by qt to execute an external program.
     * use waitForFinished to force this thread to wait for clientProcess
     * to return before proceeding
    */
    /*
    QProcess clientProcess;
    clientProcess.start(command);
    clientProcess.waitForFinished(-1);*/


    //display program's output in a formated layout, separating each output with a horizontal line
    result <<  "\n"+parameters+
               "\n"+list+
               "\nyour data is been sent\n"
    ".................................................";

    display(result);
}

void ClientGui::on_clearScreenB_clicked() { clcearScreen(); }

/*event handlre for changed in seqNumber options
 * this simply enables the ui cotrol corresponding to users choice
*/
void ClientGui::on_seqNoType_currentIndexChanged(int index)
{
    if(index==1){
        ui->i_spinbox->setVisible(true);
        ui->i_label->setVisible(true);

        ui->s_plainTextEdit->setVisible(false);
        ui->s_label->setVisible(false);
    }
    else if(index==2){
        ui->i_spinbox->setVisible(false);
        ui->i_label->setVisible(false);

        ui->s_plainTextEdit->setVisible(true);
        ui->s_label->setVisible(true);
    }
    else{
        ui->i_spinbox->setVisible(false);
        ui->s_plainTextEdit->setVisible(false);
        ui->i_label->setVisible(false);
        ui->s_label->setVisible(false);
    }
}
void ClientGui::parseData(QStringList data){
    display(data);
}
