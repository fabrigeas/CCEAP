#include "cceap.h"
#include "ui_cceap.h"

#include <QProcess>
#include <QDebug>

CCEAP::CCEAP(QWidget *parent) :QMainWindow(parent),ui(new Ui::CCEAP)
{
    ui->setupUi(this);

    model = new QStringListModel(this);
    //model->setStringList(list);
    ui->listView->setModel(model);


    //connect(ui->send_button, SIGNAL (released()), this, SLOT (on_actionSend_triggered()));
}

CCEAP::~CCEAP()
{
    delete ui;
}

void CCEAP::on_actionSend_triggered()
{
    QString parameters="";
    QString list;

    QString temp;

    /*
// read user inputs

//    parameters.insert("P",ui->P_lineEdit->text());
//    parameters.insert("D",ui->D_lineEdit->text());

//    parameters.insert("v",""+ui->v_checkBox->isChecked());
//    parameters.insert("t",ui->t_plainTextEdit->toPlainText());
//    parameters.insert("c",ui->c_spinBox->text());
//    parameters.insert("i",ui->i_spinbox->text());
//    parameters.insert("p",ui->p_lineEdit->text());
//    parameters.insert("x",ui->x_lineEdit->text());
//    parameters.insert("s",ui->s_plainTextEdit->toPlainText());
//    parameters.insert("o",ui->o_lineEdit->text());

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

    parameters += " -D "+ui->D_lineEdit->text();
    list += "\n'-D'  Destination IP x to connect to: "+ui->D_lineEdit->text();

    parameters += " -P "+ui->P_lineEdit->text();
    list += "\n'-P' TCP port x to connect to: "+ui->P_lineEdit->text();



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

    QProcess process;
    process.start(command);
    process.waitForFinished(-1);


    //display program's output in a formated layout, separating each output with a horizontal line
    result <<  "Program output for call number :"\
               "\n"+
               process.readAllStandardOutput()+
               "\n"+parameters+
               "\n"+list+
               "\n"+process.readAllStandardError()+""
    "---------------------------------------------------------------------------------------------------------------";

    //update display
    model->setStringList(result);
    ui->listView->setModel(model);
    ui->listView->scrollToBottom();
    ui->listView->update();

}

char* CCEAP::qStringToCharPtr(QString str){
    char*  cstr = new char[str.length()];
    for(int i =0; i < str.length(); i++)
        cstr[i] = str.at(i).toLatin1();
    return cstr;
}

void CCEAP::on_commandLinkButton_clicked()
{
    on_actionSend_triggered();
}

void CCEAP::on_comboBox_currentIndexChanged(int index)
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
