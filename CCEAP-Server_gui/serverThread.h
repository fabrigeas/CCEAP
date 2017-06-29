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
        explicit ServerThread(QString);
        void run();
        QString validatePortNumber(QString);
        void initMenuBar();

    signals:
        void signal(QStringList);

    private:
        Ui::CCEAP *uui;
        QStringListModel *model;
        QString port;
};

#endif // MYTHREAD_H
