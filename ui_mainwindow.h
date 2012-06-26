/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon 25. Jun 18:09:02 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *startButton;
    QPushButton *scoreButton;
    QPushButton *setupButton;
    QPushButton *helpButton;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(405, 558);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(120, 110, 171, 61));
        scoreButton = new QPushButton(centralWidget);
        scoreButton->setObjectName(QString::fromUtf8("scoreButton"));
        scoreButton->setGeometry(QRect(120, 180, 171, 61));
        setupButton = new QPushButton(centralWidget);
        setupButton->setObjectName(QString::fromUtf8("setupButton"));
        setupButton->setGeometry(QRect(120, 250, 171, 61));
        helpButton = new QPushButton(centralWidget);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setGeometry(QRect(120, 320, 171, 61));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 405, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(startButton, SIGNAL(clicked()), MainWindow, SLOT(openStartSubWindow()));
        QObject::connect(setupButton, SIGNAL(clicked()), MainWindow, SLOT(openSetupSubWindow()));
        QObject::connect(scoreButton, SIGNAL(clicked()), MainWindow, SLOT(openScoreSubWindow()));
        QObject::connect(helpButton, SIGNAL(clicked()), MainWindow, SLOT(openHelpSubWindow()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("MainWindow", "START", 0, QApplication::UnicodeUTF8));
        scoreButton->setText(QApplication::translate("MainWindow", "SCORE", 0, QApplication::UnicodeUTF8));
        setupButton->setText(QApplication::translate("MainWindow", "SETUP", 0, QApplication::UnicodeUTF8));
        helpButton->setText(QApplication::translate("MainWindow", "HELP", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
