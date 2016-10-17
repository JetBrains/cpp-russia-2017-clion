#pragma once


#include "GameObject.h"

struct Brick : GameObject {
    Brick(const QPointF& pos, double width, double height);

    void draw(QPainter& p) override;

    QRectF aabb() const override;

private:
    double width_;
    double height_;

    QRectF getRect() const;
};

