#pragma once


#include <QPointF>
#include <QPainter>

struct GameObject {

    GameObject(const QPointF& pos, const QPointF& speed);

    const QPointF& getPos() const;

    const QPointF& getSpeed() const;

    virtual void draw(QPainter& p)= 0;

    void calc(int msec);

private:
    QPointF pos_;
    QPointF speed_;
};

