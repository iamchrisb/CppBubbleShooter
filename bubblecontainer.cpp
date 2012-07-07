#include "bubblecontainer.h"

BubbleContainer::BubbleContainer(QGraphicsScene * scene, int length)
{
    m_start = new QPoint(15, 0);
    int ratex = 25;
    m_length = length;
    for(int i = 0; i < length ; ++i){
        qDebug("i");
        m_container[i] = new CustomEllipse(scene, m_start->x() + ratex*i , m_start->y() + 5);
    }
    m_scene = scene;
}

int BubbleContainer::deleteAtIndex(int i)
{

}

QGraphicsItem *BubbleContainer::get(int i)
{
    return m_container[i];
}

void BubbleContainer::addAllToScene()
{
    for(int i = 0; i < m_length ; ++i){
        m_scene->addItem(m_container[i]);
    }
}
