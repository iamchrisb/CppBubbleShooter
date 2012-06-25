/********************************************************************************
** Form generated from reading UI file 'startsubwindow.ui'
**
** Created: Mon 25. Jun 11:29:47 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTSUBWINDOW_H
#define UI_STARTSUBWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGraphicsView>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StartSubWindow
{
public:
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *StartSubWindow)
    {
        if (StartSubWindow->objectName().isEmpty())
            StartSubWindow->setObjectName(QString::fromUtf8("StartSubWindow"));
        StartSubWindow->resize(400, 300);
        verticalLayout = new QVBoxLayout(StartSubWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        graphicsView = new QGraphicsView(StartSubWindow);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(StartSubWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(StartSubWindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(StartSubWindow);

        QMetaObject::connectSlotsByName(StartSubWindow);
    } // setupUi

    void retranslateUi(QDialog *StartSubWindow)
    {
        StartSubWindow->setWindowTitle(QApplication::translate("StartSubWindow", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("StartSubWindow", "Zur\303\274ck", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("StartSubWindow", "Pause", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StartSubWindow: public Ui_StartSubWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTSUBWINDOW_H
