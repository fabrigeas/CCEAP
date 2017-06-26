#include "clientGui.h"
#include "ui_cceap.h"

#include <QProcess>
#include <QDebug>

ClientGui::ClientGui(QWidget *parent) :QMainWindow(parent),ui(new Ui::CCEAP)
{
    //init the gui
    ui->setupUi(this);

    model = new QStringListModel(this);
    ui->listView->setModel(model);

    //validate ipaddress
    QRegExp rx( "[0-9]{1,3}\\.[0-9]{1,3}\\.[0-9]{1,3}\\.[0-9]{1,3}" );
    QRegExpValidator regValidator( rx, 0 );
    ui->D_lineEdit->setValidator( &regValidator );
}

ClientGui::~ClientGui()
{
    delete ui;
}

void ClientGui::on_actionSend_triggered()
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

//parse port number
    QString port,tmp = ui->P_lineEdit->text();
    if(tmp.length()==4 && tmp.at(0).isDigit() && tmp.at(1).isDigit() && tmp.at(3).isDigit() && tmp.at(3).isDigit())
        port=tmp;
    else
        port= "4444";
    parameters += " -P "+port;
    list += "\n'-P' TCP port x to connect to: "+port;




//parse ip address
    QString ip = ui->D_lineEdit->text();
    if(ip.length()<6)
        ip="127.0.0.1";

    parameters += " -D "+ip;
    list += "\n'-D'  Destination IP x to connect to: "+ip;


    if(ui->v_checkBox->isChecked()){
        parameters += " -v ";
        list += "\n'-v' verbose mode: true";
    }
    else list += "\n'-v' verbose mode: false";

    parameters += " -c "+QString::number(ui->c_spinBox->value());
    list += "\n'-c' Number of packets to send: "+QString::number(ui->c_spinBox->value());

    parameters += " -u "+QString::number(ui->u_spinBox->value());
    list += "\n'-u' Dummy' value in the main header: "+QString::number(ui->u_spinBox->value());


    if(ui->i_label->isVisible()){
        parameters += " -i "+QString::number(ui->i_spinbox->value());
        list += "\n'-i' Sequence number x to use for CCEAP: "+QString::number(ui->i_spinbox->value());
    }
    else{
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
    char* command = qStringToCharPtr("./client "+parameters);

    //system(command);

    /* Start a process.
     * this process is used by qt to execute an external program.
     * use waitForFinished to force this thread to wait for clientProcess
     * to return before proceeding
    */
    QProcess clientProcess;
    clientProcess.start(command);
    clientProcess.waitForFinished(-1);


    //display program's output in a formated layout, separating each output with a horizontal line
    result <<  "Program output for call number :"\
               "\n"+
               clientProcess.readAllStandardOutput()+
               "\n"+parameters+
               "\n"+list+
               "\n"
               "\n"+clientProcess.readAllStandardError()+""
    "---------------------------------------------------------------------------------------------------------------";

    display(result);

}

char* ClientGui::qStringToCharPtr(QString str){
    char*  cstr = new char[str.length()];
    for(int i =0; i < str.length(); i++)
        cstr[i] = str.at(i).toLatin1();
    return cstr;
}

void ClientGui::on_commandLinkButton_clicked()
{
    on_actionSend_triggered();
}

/*event handlre for changed in seqNumber options
 * this simply enables the ui cotrol corresponding to users choice
*/
void ClientGui::on_comboBox_currentIndexChanged(int index)
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

void ClientGui::on_pushButton_2_clicked()
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

    QRegExp rx( "[0-9]{1,3}\\.[0-9]{1,3}\\.[0-9]{1,3}\\.[0-9]{1,3}" );
    QRegExpValidator regValidator( rx, 0 );

    return true;
}
