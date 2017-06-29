#ifndef CCEAP_H
#define CCEAP_H

#include <QMainWindow>
#include <QStringListModel>
#include <QAbstractItemView>

namespace Ui {
class CCEAP;
}

class ClientGui : public QMainWindow
{
    Q_OBJECT

    public:
        explicit ClientGui(QWidget *parent = 0);
        ~ClientGui();
        char* qStringToCharPtr(QString str);
        void display(QString);
        void initMenuBar();
        void display(QStringList);
        bool isIPAddress(QString);

    private slots:
        void sendData();
        void seqNoTypeChanged(int index);
        void clcearScreen();
        void dataReceived(QStringList);

        //Menubar actions
        void aboutCceap();
        void developers();
        void participate();
        void help();

    private:
        Ui::CCEAP *ui;
        QStringListModel *model;
        QStringList list,result;


};

#endif // CCEAP_H
