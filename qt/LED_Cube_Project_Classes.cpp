#include "LED_Cube_Project_Classes.h"

// Class MouseEventScene: Start
MouseEventScene::MouseEventScene(QObject *parent) :
    QGraphicsScene(parent)
{
}
void MouseEventScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    m_ScenePosition = event->scenePos();
    emit SigPosPressed(m_ScenePosition);
}
void MouseEventScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    m_ScenePosition = event->scenePos();
    emit SigPosHold(m_ScenePosition);
}
void MouseEventScene::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    m_ScenePosition = event->scenePos();
    emit SigPosDouble(m_ScenePosition);
}
void MouseEventScene::mouseReleaseEvent(QGraphicsSceneMouseEvent*)
{
    emit SigMouseReleased();
}
// Class MouseEventScene: End
