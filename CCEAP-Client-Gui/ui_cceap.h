/********************************************************************************
** Form generated from reading UI file 'cceap.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCEAP_H
#define UI_CCEAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CCEAP
{
public:
    QAction *actionNew;
    QAction *actionLoad;
    QAction *actionSave;
    QAction *actionClose;
    QAction *actionExit;
    QAction *actionClear;
    QAction *actionUndi;
    QAction *actionRedo;
    QAction *actionCommit;
    QAction *actionAbout;
    QAction *actionDeveloper;
    QAction *actionContribute;
    QAction *actionSend;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *D_lineEdit;
    QLabel *label_2;
    QLineEdit *P_lineEdit;
    QCheckBox *v_checkBox;
    QSpinBox *u_spinBox;
    QLabel *display;
    QSpinBox *i_spinbox;
    QLabel *c_label;
    QSpinBox *c_spinBox;
    QPlainTextEdit *s_plainTextEdit;
    QListView *listView;
    QLabel *u_label;
    QPlainTextEdit *t_plainTextEdit;
    QLabel *i_label;
    QSpinBox *p_spinBox;
    QLabel *s_label;
    QLineEdit *o_lineEdit;
    QLabel *t_label;
    QLabel *d_label;
    QLineEdit *d_lineEdit;
    QSpinBox *x_spinBox;
    QLabel *p_label;
    QLabel *o_label;
    QPushButton *pushButton_2;
    QLabel *x_label;
    QCommandLinkButton *commandLinkButton;
    QComboBox *comboBox;
    QMenuBar *menuBar;
    QMenu *menuFILE;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CCEAP)
    {
        if (CCEAP->objectName().isEmpty())
            CCEAP->setObjectName(QStringLiteral("CCEAP"));
        CCEAP->setEnabled(true);
        CCEAP->resize(1288, 800);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CCEAP->sizePolicy().hasHeightForWidth());
        CCEAP->setSizePolicy(sizePolicy);
        CCEAP->setMinimumSize(QSize(800, 600));
        CCEAP->setMaximumSize(QSize(1288, 800));
        CCEAP->setAutoFillBackground(true);
        actionNew = new QAction(CCEAP);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionLoad = new QAction(CCEAP);
        actionLoad->setObjectName(QStringLiteral("actionLoad"));
        actionSave = new QAction(CCEAP);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionClose = new QAction(CCEAP);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionExit = new QAction(CCEAP);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionClear = new QAction(CCEAP);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        actionUndi = new QAction(CCEAP);
        actionUndi->setObjectName(QStringLiteral("actionUndi"));
        actionRedo = new QAction(CCEAP);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actionCommit = new QAction(CCEAP);
        actionCommit->setObjectName(QStringLiteral("actionCommit"));
        actionAbout = new QAction(CCEAP);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionDeveloper = new QAction(CCEAP);
        actionDeveloper->setObjectName(QStringLiteral("actionDeveloper"));
        actionContribute = new QAction(CCEAP);
        actionContribute->setObjectName(QStringLiteral("actionContribute"));
        actionSend = new QAction(CCEAP);
        actionSend->setObjectName(QStringLiteral("actionSend"));
        centralWidget = new QWidget(CCEAP);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setScaledContents(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        D_lineEdit = new QLineEdit(centralWidget);
        D_lineEdit->setObjectName(QStringLiteral("D_lineEdit"));

        gridLayout->addWidget(D_lineEdit, 0, 1, 1, 4);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 5, 1, 1);

        P_lineEdit = new QLineEdit(centralWidget);
        P_lineEdit->setObjectName(QStringLiteral("P_lineEdit"));

        gridLayout->addWidget(P_lineEdit, 0, 6, 1, 1);

        v_checkBox = new QCheckBox(centralWidget);
        v_checkBox->setObjectName(QStringLiteral("v_checkBox"));

        gridLayout->addWidget(v_checkBox, 0, 7, 1, 1);

        u_spinBox = new QSpinBox(centralWidget);
        u_spinBox->setObjectName(QStringLiteral("u_spinBox"));

        gridLayout->addWidget(u_spinBox, 2, 3, 1, 2);

        display = new QLabel(centralWidget);
        display->setObjectName(QStringLiteral("display"));

        gridLayout->addWidget(display, 0, 8, 1, 1);

        i_spinbox = new QSpinBox(centralWidget);
        i_spinbox->setObjectName(QStringLiteral("i_spinbox"));

        gridLayout->addWidget(i_spinbox, 4, 3, 1, 2);

        c_label = new QLabel(centralWidget);
        c_label->setObjectName(QStringLiteral("c_label"));

        gridLayout->addWidget(c_label, 1, 0, 1, 3);

        c_spinBox = new QSpinBox(centralWidget);
        c_spinBox->setObjectName(QStringLiteral("c_spinBox"));
        c_spinBox->setMinimum(4);
        c_spinBox->setValue(10);

        gridLayout->addWidget(c_spinBox, 1, 3, 1, 2);

        s_plainTextEdit = new QPlainTextEdit(centralWidget);
        s_plainTextEdit->setObjectName(QStringLiteral("s_plainTextEdit"));

        gridLayout->addWidget(s_plainTextEdit, 6, 3, 1, 2);

        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));

        gridLayout->addWidget(listView, 1, 5, 10, 4);

        u_label = new QLabel(centralWidget);
        u_label->setObjectName(QStringLiteral("u_label"));

        gridLayout->addWidget(u_label, 2, 0, 1, 3);

        t_plainTextEdit = new QPlainTextEdit(centralWidget);
        t_plainTextEdit->setObjectName(QStringLiteral("t_plainTextEdit"));

        gridLayout->addWidget(t_plainTextEdit, 7, 3, 1, 2);

        i_label = new QLabel(centralWidget);
        i_label->setObjectName(QStringLiteral("i_label"));

        gridLayout->addWidget(i_label, 4, 0, 1, 3);

        p_spinBox = new QSpinBox(centralWidget);
        p_spinBox->setObjectName(QStringLiteral("p_spinBox"));

        gridLayout->addWidget(p_spinBox, 9, 3, 1, 2);

        s_label = new QLabel(centralWidget);
        s_label->setObjectName(QStringLiteral("s_label"));
        s_label->setEnabled(true);

        gridLayout->addWidget(s_label, 6, 0, 1, 3);

        o_lineEdit = new QLineEdit(centralWidget);
        o_lineEdit->setObjectName(QStringLiteral("o_lineEdit"));

        gridLayout->addWidget(o_lineEdit, 11, 2, 1, 3);

        t_label = new QLabel(centralWidget);
        t_label->setObjectName(QStringLiteral("t_label"));

        gridLayout->addWidget(t_label, 7, 0, 1, 3);

        d_label = new QLabel(centralWidget);
        d_label->setObjectName(QStringLiteral("d_label"));

        gridLayout->addWidget(d_label, 8, 0, 1, 3);

        d_lineEdit = new QLineEdit(centralWidget);
        d_lineEdit->setObjectName(QStringLiteral("d_lineEdit"));

        gridLayout->addWidget(d_lineEdit, 8, 3, 1, 2);

        x_spinBox = new QSpinBox(centralWidget);
        x_spinBox->setObjectName(QStringLiteral("x_spinBox"));

        gridLayout->addWidget(x_spinBox, 10, 3, 1, 2);

        p_label = new QLabel(centralWidget);
        p_label->setObjectName(QStringLiteral("p_label"));

        gridLayout->addWidget(p_label, 9, 0, 1, 3);

        o_label = new QLabel(centralWidget);
        o_label->setObjectName(QStringLiteral("o_label"));

        gridLayout->addWidget(o_label, 11, 0, 1, 2);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 13, 2, 1, 2);

        x_label = new QLabel(centralWidget);
        x_label->setObjectName(QStringLiteral("x_label"));

        gridLayout->addWidget(x_label, 10, 0, 1, 3);

        commandLinkButton = new QCommandLinkButton(centralWidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));

        gridLayout->addWidget(commandLinkButton, 13, 4, 1, 1);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 3, 3, 1, 1);

        CCEAP->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CCEAP);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1288, 25));
        menuFILE = new QMenu(menuBar);
        menuFILE->setObjectName(QStringLiteral("menuFILE"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        CCEAP->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CCEAP);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CCEAP->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CCEAP);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CCEAP->setStatusBar(statusBar);

        menuBar->addAction(menuFILE->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFILE->addAction(actionNew);
        menuFILE->addAction(actionLoad);
        menuFILE->addAction(actionSave);
        menuFILE->addAction(actionClose);
        menuFILE->addAction(actionClear);
        menuFILE->addAction(actionExit);
        menuEdit->addAction(actionUndi);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionCommit);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionDeveloper);
        menuHelp->addAction(actionContribute);

        retranslateUi(CCEAP);

        QMetaObject::connectSlotsByName(CCEAP);
    } // setupUi

    void retranslateUi(QMainWindow *CCEAP)
    {
        CCEAP->setWindowTitle(QApplication::translate("CCEAP", "CCEAP", 0));
        actionNew->setText(QApplication::translate("CCEAP", "&new", 0));
        actionLoad->setText(QApplication::translate("CCEAP", "&load", 0));
        actionSave->setText(QApplication::translate("CCEAP", "&save", 0));
        actionClose->setText(QApplication::translate("CCEAP", "&close", 0));
        actionExit->setText(QApplication::translate("CCEAP", "&exit", 0));
        actionClear->setText(QApplication::translate("CCEAP", "clea&r", 0));
        actionUndi->setText(QApplication::translate("CCEAP", "&undi", 0));
        actionRedo->setText(QApplication::translate("CCEAP", "&redo", 0));
        actionCommit->setText(QApplication::translate("CCEAP", "&commit", 0));
        actionAbout->setText(QApplication::translate("CCEAP", "&About", 0));
        actionDeveloper->setText(QApplication::translate("CCEAP", "&Developer", 0));
        actionContribute->setText(QApplication::translate("CCEAP", "&contribute", 0));
        actionSend->setText(QApplication::translate("CCEAP", "send", 0));
#ifndef QT_NO_TOOLTIP
        actionSend->setToolTip(QApplication::translate("CCEAP", "<html><head/><body><p>click to send packets with the given parameters</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("CCEAP", "<html><head/><body><p>Destination IP x to connect to</p><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("CCEAP", "ip address", 0));
        D_lineEdit->setText(QApplication::translate("CCEAP", "127.0.0.1", 0));
        D_lineEdit->setPlaceholderText(QApplication::translate("CCEAP", "ip address or host address", 0));
        label_2->setText(QApplication::translate("CCEAP", "port", 0));
#ifndef QT_NO_TOOLTIP
        P_lineEdit->setToolTip(QApplication::translate("CCEAP", "<html><head/><body><p>TCP port x to connect to</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        P_lineEdit->setText(QApplication::translate("CCEAP", "4444", 0));
        P_lineEdit->setPlaceholderText(QApplication::translate("CCEAP", "port number", 0));
#ifndef QT_NO_TOOLTIP
        v_checkBox->setToolTip(QApplication::translate("CCEAP", "<html><head/><body><p>Activate verbose mode</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        v_checkBox->setText(QApplication::translate("CCEAP", "verbose", 0));
        display->setText(QString());
#ifndef QT_NO_TOOLTIP
        c_label->setToolTip(QApplication::translate("CCEAP", "<html><head/><body><p>number of packets to send. (default = 10)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        c_label->setText(QApplication::translate("CCEAP", "number ofpackets", 0));
        s_plainTextEdit->setPlaceholderText(QApplication::translate("CCEAP", "eg. 1,2,3,..n", 0));
#ifndef QT_NO_TOOLTIP
        u_label->setToolTip(QApplication::translate("CCEAP", "<html><head/><body><p>Use digit x instead of 0 as `dummy' value in the main header</p><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        u_label->setText(QApplication::translate("CCEAP", "dummy", 0));
#ifndef QT_NO_TOOLTIP
        i_label->setToolTip(QApplication::translate("CCEAP", "<html><head/><body><p>starting sequence number. will be incremented for each next packet</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        i_label->setText(QApplication::translate("CCEAP", "starting sequence", 0));
#ifndef QT_NO_TOOLTIP
        s_label->setToolTip(QApplication::translate("CCEAP", "<html><head/><body><p>Use a pre defined sequence numbers given in x in the form:</p><p>'Seq_1,Seq_2,Seq_3', e.g. '1,2,3', where 1 is the ISN</p><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        s_label->setText(QApplication::translate("CCEAP", "sequence numbers", 0));
        o_lineEdit->setPlaceholderText(QApplication::translate("CCEAP", "eg. for a string with 3 options: '1,2,3/4,5,6/7,8,9'", 0));
#ifndef QT_NO_TOOLTIP
        t_label->setToolTip(QApplication::translate("CCEAP", "<html><head/><body><p>Use the inter-arrival times in 'x' between packets (x should</p><p>       be given in the format 'Time_1,Time_2,...' (in usec/1000)</p><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        t_label->setText(QApplication::translate("CCEAP", "inter arrival gap", 0));
#ifndef QT_NO_TOOLTIP
        d_label->setToolTip(QApplication::translate("CCEAP", "<html><head/><body><p>duplicate packet with the given sequence number</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        d_label->setText(QApplication::translate("CCEAP", "destination addr", 0));
#ifndef QT_NO_TOOLTIP
        d_lineEdit->setToolTip(QApplication::translate("CCEAP", "<html><head/><body><p>Use CCEAP destination address x</p><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        d_lineEdit->setText(QString());
#ifndef QT_NO_TOOLTIP
        p_label->setToolTip(QApplication::translate("CCEAP", "<html><head/><body><p>duplicate packet with the given sequence number</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        p_label->setText(QApplication::translate("CCEAP", "duplicate packet", 0));
#ifndef QT_NO_TOOLTIP
        o_label->setToolTip(QApplication::translate("CCEAP", "<html><head/><body><p>Optional header elements specified via x.</p><p>       Formatting: 'Option_1/Option_2/Option_3/...' where each</p><p>       option is formatted as 'Identifier,Type,Value'.</p><p>       Maximum of allowed options: 32</p><p>       Example for a string with 3 options: '1,2,3/4,5,6/7,8,9'</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        o_label->setText(QApplication::translate("CCEAP", "optional", 0));
        pushButton_2->setText(QApplication::translate("CCEAP", "reset", 0));
#ifndef QT_NO_TOOLTIP
        x_label->setToolTip(QApplication::translate("CCEAP", "<html><head/><body><p>exclude packet with the given sequence number</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        x_label->setText(QApplication::translate("CCEAP", "exclude packet", 0));
        commandLinkButton->setText(QApplication::translate("CCEAP", "send", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("CCEAP", "default sequence numbers", 0)
         << QApplication::translate("CCEAP", "specify starting sequence number", 0)
         << QApplication::translate("CCEAP", "enter list of sequence numbers", 0)
        );
#ifndef QT_NO_TOOLTIP
        comboBox->setToolTip(QApplication::translate("CCEAP", "<html><head/><body><p>you can either provide a starting sequence numbe, or</p><p>give a predefined list of sequence numbers  to be used.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        menuFILE->setTitle(QApplication::translate("CCEAP", "&File", 0));
        menuEdit->setTitle(QApplication::translate("CCEAP", "&Edit", 0));
        menuHelp->setTitle(QApplication::translate("CCEAP", "&Help", 0));
    } // retranslateUi

};

namespace Ui {
    class CCEAP: public Ui_CCEAP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCEAP_H