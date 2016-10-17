

#include <QPainter>
#include "Ball.h"

Ball::Ball(const QPointF& pos, const QPointF& speed) :
        GameObject(pos, speed) {}

void Ball::draw(QPainter& p) {
    p.setBrush(Qt::red);
    p.drawEllipse(getPos(), 10, 10);
}
