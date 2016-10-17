#include "GameWidget.h"
#include <QTimer>

#define WND_WIDTH 800

#define WND_HEIGHT (WND_WIDTH / 4 * 3)

GameWidget::GameWidget(QWidget* parent) :
        QWidget(parent), b_(QPointF(WND_WIDTH / 2, WND_HEIGHT - 30), QPointF(200, -200)) {
    setFixedSize(WND_WIDTH, WND_HEIGHT);
    auto timer = new QTimer(this);
    const int ms = 20;
    QObject::connect(timer, &QTimer::timeout, [this] { calc(ms); });
    timer->start(ms);

    int ROWS = 4, COLS = 5;
    int SPACING = 10;
    int BRICK_WIDTH = (WND_WIDTH - SPACING) / COLS - SPACING, BRICK_HEIGHT = 30;

    for (int row = 0; row < ROWS; ++row) {
        for (int col = 0; col < COLS; ++col) {
            int x = BRICK_WIDTH / 2 + (BRICK_WIDTH + SPACING) * col + SPACING;
            int y = BRICK_HEIGHT / 2 + (BRICK_HEIGHT + SPACING) * row + SPACING;
            bricks_.push_back(Brick(QPointF(x, y), BRICK_WIDTH, BRICK_HEIGHT));
        }
    }
}

void GameWidget::calc(int ms) {
    b_.calc(ms);
    for (auto&& brick : bricks_) {
        brick.calc(ms);
    }
    update();
}

void GameWidget::paintEvent(QPaintEvent* event) {
    QWidget::paintEvent(event);

    QPainter painter(this);
    b_.draw(painter);
    for (auto&& brick : bricks_) {
        brick.draw(painter);
    }
}
