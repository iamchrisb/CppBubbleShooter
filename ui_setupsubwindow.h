/********************************************************************************
** Form generated from reading UI file 'setupsubwindow.ui'
**
** Created: Mon 25. Jun 15:57:02 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPSUBWINDOW_H
#define UI_SETUPSUBWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>

QT_BEGIN_NAMESPACE

class Ui_SetupSubWindow
{
public:
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *SetupSubWindow)
    {
        if (SetupSubWindow->objectName().isEmpty())
            SetupSubWindow->setObjectName(QString::fromUtf8("SetupSubWindow"));
        SetupSubWindow->resize(400, 300);
        horizontalSlider = new QSlider(SetupSubWindow);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(120, 120, 160, 19));
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(SetupSubWindow);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(120, 160, 160, 19));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        label = new QLabel(SetupSubWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 130, 46, 13));
        label_2 = new QLabel(SetupSubWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 160, 46, 13));

        retranslateUi(SetupSubWindow);

        QMetaObject::connectSlotsByName(SetupSubWindow);
    } // setupUi

    void retranslateUi(QDialog *SetupSubWindow)
    {
        SetupSubWindow->setWindowTitle(QApplication::translate("SetupSubWindow", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SetupSubWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SetupSubWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SetupSubWindow: public Ui_SetupSubWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPSUBWINDOW_H
