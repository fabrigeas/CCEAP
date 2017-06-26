#ifndef CCEAP_H
#define CCEAP_H
#include <QThread>
#include <QMainWindow>
#include <QStringListModel>


namespace Ui {class CCEAP;}

class CCEAP : public QMainWindow
{
    Q_OBJECT

    public:
        explicit CCEAP(QWidget *parent = 0);
        ~CCEAP();


    public slots:
        void on_startServerButton_clicked();
        void dataReceivedFromServer(QStringList stringList);

    signals:

        void signal(int newValue);


    public:
        Ui::CCEAP *ui;
        QStringListModel *model;
        QStringList stringList;


};

#endif // CCEAP_H
