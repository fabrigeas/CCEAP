#include "mythread.h"
#include <QDebug>

#include <QApplication>
#include <QProcess>
#include <QDebug>

#include "cceap.h"
#include "ui_cceap.h"


//MyThread::MyThread(Ui::CCEAP *ui,QStringListModel *m) : uui(ui),model(m){}
MyThread::MyThread(QString p):port(p) {}
void MyThread::run()
{
   // qDebug() << "thread running";


    QStringList list;

    list << "server started on port: "+port;
            "\nwaiting for clients ...";
    emit signal(list);
    qDebug() << "./server -P "+port;
    QProcess process;
    process.start("./server -P "+port);
    process.waitForFinished(-1);


    QString output = process.readAllStandardOutput();
    //list << process.readAllStandardError();
    //list << process.readAll();

    QRegExp rx("received");
    list = output.split(rx);
    //list << output;
    qDebug() << output;
    emit signal(list);


}
