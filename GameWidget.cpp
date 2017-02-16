#include "GameWidget.h"
#include "Collisions.h"
#include <QTimer>
#include <QKeyEvent>

#include "GameState.h"

const int WND_WIDTH = 800;
const int WND_HEIGHT = 600;

GameWidget::GameWidget(QWidget* parent) :
        QWidget(parent),
        state_(std::make_unique<GameState>(WND_WIDTH, WND_HEIGHT)){
    setFixedSize(WND_WIDTH, WND_HEIGHT);
    auto timer = new QTimer(this);
    const int ms = 20;
    QObject::connect(timer, &QTimer::timeout, [this] {
        state_->calc(ms);
        update();
    });
    timer->start(ms);
}

GameWidget::~GameWidget() {}

void GameWidget::paintEvent(QPaintEvent* event) {
    QWidget::paintEvent(event);

    QPainter painter(this);
    state_->getBall().draw(painter);
    for (auto&& brick : state_->getBricks()) {
        brick.draw(painter);
    }
    state_->getPaddle().draw(painter);
}

void GameWidget::keyPressEvent(QKeyEvent* event) {
    QWidget::keyPressEvent(event);

    switch (event->key()) {
        case Qt::Key_Left:
            state_->movePaddle(-20);
            break;
        case Qt::Key_Right:
            state_->movePaddle(20);
            break;
        default:
            break;
    }
}
