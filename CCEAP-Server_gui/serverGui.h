#ifndef CCEAP_H
#define CCEAP_H
#include <QThread>
#include <QMainWindow>
#include <QStringListModel>


namespace Ui {class CCEAP;}

class ServerGui : public QMainWindow
{
    Q_OBJECT

    public:
        explicit ServerGui(QWidget *parent = 0);
        ~ServerGui();
        QString getLocalIP();
        void display(QString);
        void display(QStringList);
        void initMenuBar();


    public slots:
        void on_startServerButton_clicked();
        void dataReceivedFromServer(QStringList stringList);

        void aboutCceap();
        void developers();
        void participate();
        void help();

    signals:

        void signal(int newValue);


    private:
        Ui::CCEAP *ui;
        QStringListModel *model;
        QStringList stringList;



};

#endif // CCEAP_H
