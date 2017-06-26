#include "cceap.h"
#include "ui_cceap.h"
#include "mythread.h"

#include <QApplication>
#include <QProcess>
#include <QDebug>


CCEAP::CCEAP(QWidget *parent) : QMainWindow(parent), ui(new Ui::CCEAP)
{
    this->ui->setupUi(this);


    this->model = new QStringListModel(this);
    QStringList List;
    List << "Clair de Lune" << "Reverie" << "Prelude";
    model->setStringList(List);
    this->ui->listView->setModel(model);




}

CCEAP::~CCEAP()
{
    delete ui;
}

void CCEAP::on_startServerButton_clicked()
{
    //ui->ip_lineEdit->setDisabled(true);
    //ui->port_lineEdit->setDisabled(true);

    //MyThread server(ui,model);
    //server.run();

    MyThread *mythread = new MyThread(ui->port_lineEdit->text());
    QObject::connect(mythread,SIGNAL(signal(QStringList)),this, SLOT(dataReceivedFromServer(QStringList)));
    mythread->start();

}

void CCEAP::dataReceivedFromServer(QStringList list)
{
    stringList << list;
    model->setStringList(stringList);
    ui->listView->setModel(model);
    ui->listView->update();
}
