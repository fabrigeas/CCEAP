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
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CCEAP
{
public:
    QAction *actionImport;
    QAction *actionExport;
    QAction *actionClose;
    QAction *actionAbout_CCEAP;
    QAction *actionDeveloper;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *ip_lineEdit;
    QLineEdit *port_lineEdit;
    QCommandLinkButton *startServerButton;
    QListView *listView;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CCEAP)
    {
        if (CCEAP->objectName().isEmpty())
            CCEAP->setObjectName(QStringLiteral("CCEAP"));
        CCEAP->resize(800, 600);
        CCEAP->setMaximumSize(QSize(1280, 960));
        actionImport = new QAction(CCEAP);
        actionImport->setObjectName(QStringLiteral("actionImport"));
        actionExport = new QAction(CCEAP);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        actionClose = new QAction(CCEAP);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionAbout_CCEAP = new QAction(CCEAP);
        actionAbout_CCEAP->setObjectName(QStringLiteral("actionAbout_CCEAP"));
        actionDeveloper = new QAction(CCEAP);
        actionDeveloper->setObjectName(QStringLiteral("actionDeveloper"));
        centralWidget = new QWidget(CCEAP);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        ip_lineEdit = new QLineEdit(frame);
        ip_lineEdit->setObjectName(QStringLiteral("ip_lineEdit"));
        ip_lineEdit->setEnabled(false);

        horizontalLayout_2->addWidget(ip_lineEdit);

        port_lineEdit = new QLineEdit(frame);
        port_lineEdit->setObjectName(QStringLiteral("port_lineEdit"));

        horizontalLayout_2->addWidget(port_lineEdit);

        startServerButton = new QCommandLinkButton(frame);
        startServerButton->setObjectName(QStringLiteral("startServerButton"));

        horizontalLayout_2->addWidget(startServerButton);


        gridLayout->addWidget(frame, 0, 1, 1, 2);

        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setEnabled(true);
        QFont font;
        font.setFamily(QStringLiteral("Courier 10 Pitch"));
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        listView->setFont(font);
        listView->setLineWidth(1);
        listView->setAutoScrollMargin(16);

        gridLayout->addWidget(listView, 1, 1, 1, 2);

        CCEAP->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CCEAP);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
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

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionImport);
        menuFile->addAction(actionExport);
        menuFile->addAction(actionClose);
        menuHelp->addAction(actionAbout_CCEAP);
        menuHelp->addAction(actionDeveloper);

        retranslateUi(CCEAP);

        QMetaObject::connectSlotsByName(CCEAP);
    } // setupUi

    void retranslateUi(QMainWindow *CCEAP)
    {
        CCEAP->setWindowTitle(QApplication::translate("CCEAP", "CCEAP-Server", 0));
        actionImport->setText(QApplication::translate("CCEAP", "Import", 0));
        actionExport->setText(QApplication::translate("CCEAP", "Export", 0));
        actionClose->setText(QApplication::translate("CCEAP", "Exit", 0));
        actionAbout_CCEAP->setText(QApplication::translate("CCEAP", "about CCEAP", 0));
        actionDeveloper->setText(QApplication::translate("CCEAP", "developer", 0));
#ifndef QT_NO_TOOLTIP
        ip_lineEdit->setToolTip(QApplication::translate("CCEAP", "<html><head/><body><p>If runnung both client and server on the same computer, use</p><p>127.0.0.1 for servers ip</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        ip_lineEdit->setText(QString());
        ip_lineEdit->setPlaceholderText(QApplication::translate("CCEAP", "default is: 127.0.0.1", 0));
        port_lineEdit->setText(QString());
        port_lineEdit->setPlaceholderText(QApplication::translate("CCEAP", "default port is 4444", 0));
        startServerButton->setText(QApplication::translate("CCEAP", "start server", 0));
        menuFile->setTitle(QApplication::translate("CCEAP", "File", 0));
        menuEdit->setTitle(QApplication::translate("CCEAP", "Edit", 0));
        menuHelp->setTitle(QApplication::translate("CCEAP", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class CCEAP: public Ui_CCEAP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCEAP_H
