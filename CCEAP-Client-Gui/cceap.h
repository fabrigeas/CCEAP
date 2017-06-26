#ifndef CCEAP_H
#define CCEAP_H

#include <QMainWindow>
#include <QStringListModel>
#include <QAbstractItemView>

namespace Ui {
class CCEAP;
}

class CCEAP : public QMainWindow
{
    Q_OBJECT

public:
    explicit CCEAP(QWidget *parent = 0);
    ~CCEAP();
    char* qStringToCharPtr(QString str);

private slots:
    void on_actionSend_triggered();

    void on_commandLinkButton_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::CCEAP *ui;
    QStringListModel *model;
    QStringList list,result;
};

#endif // CCEAP_H
