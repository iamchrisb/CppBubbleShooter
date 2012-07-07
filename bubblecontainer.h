#ifndef BUBBLECONTAINER_H
#define BUBBLECONTAINER_H

#include "customellipse.h";
#include <QtGui>
#include <QtCore>

class BubbleContainer
{
public:
    BubbleContainer(QGraphicsScene * scene , int length);
    int deleteAtIndex(int i);
    QGraphicsItem* get(int i);
    void addAllToScene();

    int m_length;
    QGraphicsScene * m_scene;
    QPoint * m_start;
    CustomEllipse * m_container[3];
};

#endif // BUBBLECONTAINER_H
