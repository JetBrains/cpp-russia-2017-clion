#pragma once


#include <QWidget>

struct GameWidget : public QWidget {
    GameWidget(QWidget* parent);

    void calc(int ms);

protected:
    void paintEvent(QPaintEvent* event) override;
};

