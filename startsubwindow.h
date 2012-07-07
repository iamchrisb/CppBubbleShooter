#ifndef STARTSUBWINDOW_H
#define STARTSUBWINDOW_H

#include <QDialog>
#include <QtCore>
#include <QtGui>

#include "customellipse.h"
#include "bubblecontainer.h"

namespace Ui {
class StartSubWindow;
}

class StartSubWindow : public QDialog
{
    Q_OBJECT
    
public:
    explicit StartSubWindow(QWidget *parent = 0);
    ~StartSubWindow();
    
private:
    Ui::StartSubWindow *ui;

    QGraphicsScene * scene;
    QGraphicsEllipseItem * ellipse;
    QGraphicsRectItem * rectangle;

    CustomEllipse * customItem;
    CustomEllipse * customItem2;
    BubbleContainer * bubbles;
};

#endif // STARTSUBWINDOW_H
