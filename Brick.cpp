#include "Brick.h"

Brick::Brick(const QPointF& pos, double width, double height) :
        GameObject(pos, QPointF()), width_(width), height_(height) {}

void Brick::draw(QPainter& p) {
    p.fillRect(QRectF(getPos() - QPointF(width_, height_) / 2,
                      QSizeF(width_, height_)), Qt::blue);
}
