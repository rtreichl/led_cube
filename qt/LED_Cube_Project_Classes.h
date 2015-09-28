#ifndef LED_CUBE_PROJECT_CLASSES_H
#define LED_CUBE_PROJECT_CLASSES_H

#endif // LED_CUBE_PROJECT_CLASSES_H


#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QPointF>


// Class MouseEventScene: Beginn
// Handles mouseactions and emits the Cursor Position
class MouseEventScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit MouseEventScene(QObject *parent = 0);

    // Mouse handle
    void mousePressEvent(QGraphicsSceneMouseEvent  *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent*);

private:
    QPointF m_ScenePosition;

signals:
    void SigPosPressed(QPointF ScenePosition);
    void SigPosHold(QPointF ScenePosition);
    void SigPosDouble(QPointF ScenePosition);
    void SigMouseReleased();
};
// Class MouseEventScene: End
