#include "customellipse.h"

CustomEllipse::CustomEllipse(QGraphicsScene * scene , int x , int y)
{
//    m_x = x - scene->width() / 2;
//    m_y = y - scene->height() / 2;
    m_x = x - scene->width() / 2;
    m_y = y;
    m_w = 20;
    m_h = 20;
    m_scene = scene;
    Pressed = false;
    setFlag(ItemIsMovable);
    setFlag(ItemIsFocusable);
}

CustomEllipse::CustomEllipse(QGraphicsScene *scene, QPoint &p)
{
    m_scene = scene;
    m_x = p.x() - scene->width();
    m_y = p.y();
}

QRectF CustomEllipse::boundingRect() const
{
    return QRectF( m_x, m_y, m_w, m_h);
}

void CustomEllipse::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rec = boundingRect();
    QBrush brush(Qt::blue);
    QPen pen(Qt::black);



    //painter->fillRect(rec , brush);
    painter->drawEllipse(rec);
   // m_scene->addItem(this);
   // m_scene->addEllipse(0,0,20,20,pen,brush);

}

void CustomEllipse::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsItem::mousePressEvent(event);
    m_scene->removeItem(this);
    m_scene->update();
}

void CustomEllipse::focusInEvent(QFocusEvent *event)
{
    qDebug("the focus is set");
}

void CustomEllipse::focusOutEvent(QFocusEvent *event)
{
    qDebug("the focus isnt set");
}
