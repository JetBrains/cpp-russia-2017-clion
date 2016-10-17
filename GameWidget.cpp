#include "GameWidget.h"
#include <QTimer>
#include <QPainter>

#define WND_WIDTH 800

#define WND_HEIGHT (WND_WIDTH / 4 * 3)

GameWidget::GameWidget(QWidget* parent) :
        QWidget(parent), b_(QPointF(WND_WIDTH / 2, WND_HEIGHT - 30), QPointF(200, -200)) {
    setFixedSize(WND_WIDTH, WND_HEIGHT);
    auto timer = new QTimer(this);
    const int ms = 20;
    QObject::connect(timer, &QTimer::timeout, [this] { calc(ms); });
    timer->start(ms);
}

void GameWidget::calc(int ms) {
    b_.calc(ms);
    update();
}

void GameWidget::paintEvent(QPaintEvent* event) {
    QWidget::paintEvent(event);

    QPainter p(this);
    b_.draw(p);
}
