#include "Ball.h"

Ball::Ball(const QPointF& pos, const QPointF& speed) :
        pos_(pos), speed_(speed) {}

const QPointF& Ball::getPos() const {
    return pos_;
}

const QPointF& Ball::getSpeed() const {
    return speed_;
}

void Ball::draw(QPainter& p) {
    p.setBrush(Qt::red);
    p.drawEllipse(pos_, 10, 10);
}

void Ball::calc(int msec) {
    pos_ += speed_ * (msec / 1000.);
}
