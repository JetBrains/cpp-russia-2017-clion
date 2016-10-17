#pragma once


#include <QWidget>
#include "Ball.h"

struct GameWidget : public QWidget {
    GameWidget(QWidget* parent);

    void calc(int ms);

protected:
    void paintEvent(QPaintEvent* event) override;

private:
    Ball b_;
};

