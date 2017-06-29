#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QMainWindow>
#include <QThread>
#include <QString>
#include <QStringListModel>
#include <QApplication>
#include <QProcess>

namespace Ui {class CCEAP;}

class Thead : public QThread
{
    Q_OBJECT
    public:
        explicit Thead();
        void run();

    signals:
        void signal(QStringList);

    private:
        QStringListModel *model;

};

#endif // MYTHREAD_H
