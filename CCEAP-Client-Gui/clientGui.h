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
        void display(QStringList);
        void initMenuBar();

        bool isIPAddress(QString);

    public slots:
        void clcearScreen();
        void dataReceived(QStringList);
        void parseData(QStringList);

        //Menubar actions
        void aboutCceap();
        void developers();
        void participate();
        void help();

        void on_sendDataB_clicked();

        void on_clearScreenB_clicked();

        void on_seqNoType_currentIndexChanged(int index);

private:
        Ui::CCEAP *ui;
        QStringListModel *model;
        QStringList list,result;


};

#endif // CCEAP_H
