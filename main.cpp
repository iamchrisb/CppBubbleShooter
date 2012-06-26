#include <QtGui/QApplication>
#include "mainwindow.h"
#include "QPushButton"
#include "QHBoxLayout"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow *w = new MainWindow(&a);
//    MainWindow w(&a);
    MainWindow w;
//    QWidget *parent = new QWidget();
//    QPushButton *button1 = new QPushButton("go ahead");
//    QHBoxLayout *layout = new QHBoxLayout();
//    layout->addWidget(button1);
//    parent->show();
    w.show();
    
    return a.exec();
}
