#ifndef CUSTOMELLIPSE_H
#define CUSTOMELLIPSE_H

#include <Qpainter>
#include <QGraphicsItem>
#include <QDebug>
#include <QtGui>

class CustomEllipse : public QGraphicsItem
{

public:
    CustomEllipse(QGraphicsScene * scene, int x, int y );
    CustomEllipse(QGraphicsScene *scene, QPoint & p);

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    bool Pressed;

    QGraphicsScene * m_scene;
    QColor * m_color;
    int m_x;
    int m_y;
    int m_w;
    int m_h;
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void focusInEvent(QFocusEvent *event);
    void focusOutEvent(QFocusEvent *event);
};

#endif // CUSTOMELLIPSE_H
