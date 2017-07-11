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
        void execute(QString);
        void executeParse(QString);

        bool isIPAddress(QString);

    public slots:
        void clcearScreen();
        void dataReceivedSlot(QStringList);
        void parsedDataReceivedSlot(QStringList);

        //Menubar actions
        void aboutCceapMenuBarHandler();
        void developersMenuBarHandler();
        void participateMenuBarHandler();
        void helpMenuBarHandler();

        void on_sendDataB_clicked();

        void on_clearScreenB_clicked();

        void on_seqNoType_currentIndexChanged(int index);

private:
        Ui::CCEAP *ui;
        QStringListModel *model;
        QStringList list,result;


};

#endif // CCEAP_H
