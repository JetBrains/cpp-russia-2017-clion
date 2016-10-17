

#include <QPainter>
#include "Ball.h"

Ball::Ball(const QPointF& pos, const QPointF& speed) :
        GameObject(pos, speed) {}

void Ball::draw(QPainter& p) {
    p.setBrush(Qt::red);
    p.drawEllipse(getPos(), 10, 10);
}

QRectF Ball::aabb() const {
    return QRectF(getPos() - QPointF(5, 5), QSizeF(10, 10));
}
