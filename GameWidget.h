#pragma once


#include <QWidget>
#include "Ball.h"
#include "Brick.h"

//TODO: Document class
struct GameWidget : public QWidget {
    GameWidget(QWidget* parent);

    void calc(int ms);

protected:
    void paintEvent(QPaintEvent* event) override;

    void keyPressEvent(QKeyEvent* event) override;

private:
    Ball b_;
    std::vector<Brick> bricks_;
    Brick paddle_;

    void processCollisions();
};

