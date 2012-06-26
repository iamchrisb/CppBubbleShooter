#include "setupsubwindow.h"
#include "ui_setupsubwindow.h"

SetupSubWindow::SetupSubWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetupSubWindow)
{
    ui->setupUi(this);
}

SetupSubWindow::~SetupSubWindow()
{
    delete ui;
}
