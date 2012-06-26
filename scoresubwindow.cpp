#include "scoresubwindow.h"
#include "ui_scoresubwindow.h"

ScoreSubWindow::ScoreSubWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ScoreSubWindow)
{
    ui->setupUi(this);
}

ScoreSubWindow::~ScoreSubWindow()
{
    delete ui;
}
