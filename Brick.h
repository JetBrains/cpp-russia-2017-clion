#pragma once


#include "GameObject.h"

struct Brick : GameObject {
    Brick(const QPointF& pos, double width, double height);

    void draw(QPainter& p) override;

private:
    double width_;
    double height_;
};

