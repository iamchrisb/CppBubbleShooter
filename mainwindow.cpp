#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "startsubwindow.h"
#include "setupsubwindow.h"
#include "scoresubwindow.h"
#include "helpsubwindow.h"
#include "stdio.h"
#include "qobject.h"
#include "qdebug.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openStartSubWindow()
{
    qDebug("\n noooooooooooow \n");
    this->hide();
    StartSubWindow ssw;
    ssw.setModal(true);
    ssw.exec();
}

void MainWindow::openSetupSubWindow(){
    qDebug("\n openSetupSubWindow\n");
    SetupSubWindow ssw;
    ssw.setModal(true);
    ssw.exec();
}

void MainWindow::openScoreSubWindow(){
    qDebug("\n openScoreSubWindow \n");
    ScoreSubWindow ssw;
    ssw.setModal(true);
    ssw.exec();
}

void MainWindow::openHelpSubWindow(){
    qDebug("\n openHelpSubWindow \n");
    HelpSubWindow shw;
    shw.setModal(true);
    shw.exec();
}
