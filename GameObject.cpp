#include "Ball.h"
#include "GameObject.h"

GameObject::GameObject(const QPointF& pos, const QPointF& speed) :
        pos_(pos), speed_(speed) {}

const QPointF& GameObject::getPos() const {
    return pos_;
}

const QPointF& GameObject::getSpeed() const {
    return speed_;
}

void GameObject::calc(int msec) {
    pos_ += speed_ * (msec / 1000.);
}