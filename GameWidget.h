#pragma once


#include <QWidget>
#include "Ball.h"
#include "Brick.h"

struct GameWidget : public QWidget {
    GameWidget(QWidget* parent);

    void calc(int ms);

protected:
    void paintEvent(QPaintEvent* event) override;

private:
    Ball b_;
    std::vector<Brick> bricks_;
};

