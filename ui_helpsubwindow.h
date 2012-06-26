/********************************************************************************
** Form generated from reading UI file 'helpsubwindow.ui'
**
** Created: Mon 25. Jun 18:09:02 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPSUBWINDOW_H
#define UI_HELPSUBWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_HelpSubWindow
{
public:
    QDateEdit *dateEdit;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *HelpSubWindow)
    {
        if (HelpSubWindow->objectName().isEmpty())
            HelpSubWindow->setObjectName(QString::fromUtf8("HelpSubWindow"));
        HelpSubWindow->resize(400, 300);
        dateEdit = new QDateEdit(HelpSubWindow);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(70, 120, 110, 22));
        label = new QLabel(HelpSubWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 180, 46, 13));
        label_2 = new QLabel(HelpSubWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 180, 46, 13));

        retranslateUi(HelpSubWindow);

        QMetaObject::connectSlotsByName(HelpSubWindow);
    } // setupUi

    void retranslateUi(QDialog *HelpSubWindow)
    {
        HelpSubWindow->setWindowTitle(QApplication::translate("HelpSubWindow", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("HelpSubWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("HelpSubWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HelpSubWindow: public Ui_HelpSubWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPSUBWINDOW_H
