#pragma once

#include "Ball.h"
#include "Brick.h"

struct GameState {
    GameState(int fieldWidth, int fieldHeight);

public:
    void calc(int ms);
    void movePaddle(int dx);

    QRect getField() const;

    Ball getBall() const;
    Brick getPaddle() const;
    const std::vector<Brick> &getBricks() const;

private:
    void processCollisions();

private:
    QRect field_;

    Ball ball_;
    std::vector<Brick> bricks_;
    Brick paddle_;
};


