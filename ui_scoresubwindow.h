/********************************************************************************
** Form generated from reading UI file 'scoresubwindow.ui'
**
** Created: Mon 25. Jun 18:09:02 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCORESUBWINDOW_H
#define UI_SCORESUBWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ScoreSubWindow
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;

    void setupUi(QDialog *ScoreSubWindow)
    {
        if (ScoreSubWindow->objectName().isEmpty())
            ScoreSubWindow->setObjectName(QString::fromUtf8("ScoreSubWindow"));
        ScoreSubWindow->resize(400, 300);
        verticalLayout = new QVBoxLayout(ScoreSubWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(ScoreSubWindow);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);


        retranslateUi(ScoreSubWindow);

        QMetaObject::connectSlotsByName(ScoreSubWindow);
    } // setupUi

    void retranslateUi(QDialog *ScoreSubWindow)
    {
        ScoreSubWindow->setWindowTitle(QApplication::translate("ScoreSubWindow", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ScoreSubWindow: public Ui_ScoreSubWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCORESUBWINDOW_H
