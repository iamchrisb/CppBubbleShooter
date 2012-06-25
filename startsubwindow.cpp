#include "startsubwindow.h"
#include "ui_startsubwindow.h"

StartSubWindow::StartSubWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StartSubWindow)
{
    ui->setupUi(this);
}

StartSubWindow::~StartSubWindow()
{
    delete ui;
}
