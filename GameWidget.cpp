#include "GameWidget.h"
#include <QTimer>
#include <QPainter>

GameWidget::GameWidget(QWidget* parent) :
        QWidget(parent) {
    auto timer = new QTimer(this);
    const int ms = 20;
    QObject::connect(timer, &QTimer::timeout, [this]{calc(ms);});
    timer->start(ms);
}

void GameWidget::calc(int ms) {
    update();
}

void GameWidget::paintEvent(QPaintEvent* event) {
    QWidget::paintEvent(event);

    QPainter p(this);
    p.fillRect(rand() % 10, rand() % 10, 10, 10, Qt::red);
}
