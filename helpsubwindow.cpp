#include "helpsubwindow.h"
#include "ui_helpsubwindow.h"

HelpSubWindow::HelpSubWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelpSubWindow)
{
    ui->setupUi(this);
}

HelpSubWindow::~HelpSubWindow()
{
    delete ui;
}
