#include "startsubwindow.h"
#include "ui_startsubwindow.h"

StartSubWindow::StartSubWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StartSubWindow)
{
    ui->setupUi(this);

    QPoint p1(0,0);
    QPoint p2(200,200);
    QRectF rec(p1,p2);
    scene = new QGraphicsScene(rec ,this);
    ui->graphicsView->setScene(scene);
    bubbles = new BubbleContainer(scene , 14);

    bubbles->addAllToScene();
//    QBrush redBrush(Qt::red);
//    QBrush blueBrush(Qt::blue);
//    QPen blackpen(Qt::black);
//    blackpen.setWidth(1);

   // ellipse = scene->addEllipse(10, 10, 100, 100, blackpen, blueBrush );
    //ellipse->setFlag(QGraphicsItem::ItemIsFocusable);
    //ellipse->setFocus();

    //rectangle = scene->addRect(-100, -100, 50, 50, blackpen, redBrush);
    //rectangle->setFlag(QGraphicsItem::ItemIsMovable);

}

StartSubWindow::~StartSubWindow()
{
    delete ui;
}
