#include "Collisions.h"

CollisionType getCollisionWithWalls(const Ball& b, const QRectF& bounding) {
    auto ballBB = b.aabb();
    if (ballBB.right() > bounding.right()) return Right;
    if (ballBB.left() < bounding.left()) return Left;
    if (ballBB.top() < bounding.top()) return Top;
    return None;
}

CollisionType getCollisionWithBrick(const Ball& b, const QRectF& brick) {
    auto ballBB = b.aabb();
    auto inters = ballBB.intersected(brick);
    if (inters.isEmpty())
        return None;
    else if (inters.width() > inters.height()) {
        return inters.center().y() < ballBB.center().y() ? Top : Bottom;
    } else {
        return inters.center().x() < ballBB.center().x() ? Left : Right;
    }
}

bool applyCollision(Ball& b, CollisionType type) {
    int mulX = 1, mulY = 1;

    switch (type) {
        case None:
            break;
        case Left:
            if (b.getSpeed().x() < 0) mulX = -1;
            break;
        case Right:
            if (b.getSpeed().x() > 0) mulX = -1;
            break;
        case Top:
            if (b.getSpeed().y() < 0) mulY = -1;
            break;
        case Bottom:
            if (b.getSpeed().y() > 0) mulY = -1;
            break;
    }

    b.setSpeed(QPointF(b.getSpeed().x() * mulX, b.getSpeed().y() * mulY));
    return mulX == -1 || mulY == -1;
}
