#pragma once


#include <QPointF>
#include <QPainter>

struct Ball {
    Ball(const QPointF& pos, const QPointF& speed);

    const QPointF& getPos() const;

    const QPointF& getSpeed() const;

    void draw(QPainter& p);
    void calc(int msec);

private:
    QPointF pos_;
    QPointF speed_;
};

