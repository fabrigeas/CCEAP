#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QMainWindow>
#include <QThread>
#include <QString>
#include <QStringListModel>
#include <QApplication>
#include <QProcess>

namespace Ui {class CCEAP;}

class ServerThread : public QThread
{
    Q_OBJECT
    public:
        //explicit MyThread(Ui::CCEAP *ui,QStringListModel *m);
        explicit ServerThread(QString port);
        void run();

    signals:
        void signal(QStringList stringList);

    private:
        Ui::CCEAP *uui;
        QStringListModel *model;
        QString port;
};

#endif // MYTHREAD_H
