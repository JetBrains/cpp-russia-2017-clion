#include "GameWidget.h"
#include "Collisions.h"
#include <QTimer>
#include <QKeyEvent>
#include <QBoxLayout>
#include <QPushButton>
#include <QLabel>

#include "GameState.h"

const int WND_WIDTH = 800;
const int WND_HEIGHT = 600;

struct CanvasWidget : QWidget {
    CanvasWidget(GameWidget *parent) : QWidget(parent) {}

protected:
    void paintEvent(QPaintEvent *event) override {
        QWidget::paintEvent(event);

        QPainter painter(this);
        getState()->getBall().draw(painter);
        for (auto &&brick : getState()->getBricks()) {
            brick.draw(painter);
        }
        getState()->getPaddle().draw(painter);
    }

private:
    GameState *getState() {
        return static_cast<GameWidget *>(parentWidget())->state_.get();
    }
};

GameWidget::GameWidget(QWidget *parent)
        : QWidget(parent),
          canvas_(new CanvasWidget(this)) {
    canvas_->setFixedSize(WND_WIDTH, WND_HEIGHT);

    auto mainLayout = new QVBoxLayout;

    mainLayout->addWidget(canvas_);

    auto controlsLayout = new QHBoxLayout;
    auto button = new QPushButton("New game", this);
    controlsLayout->addWidget(button);

    auto scoreLabel = new QLabel(this);
    controlsLayout->addWidget(scoreLabel);
    controlsLayout->addStretch();
    mainLayout->addLayout(controlsLayout);

    setLayout(mainLayout);

    QObject::connect(button, &QPushButton::clicked, [this] {
        resetState();
    });
    resetState();

    auto timer = new QTimer(this);
    const int ms = 20;
    QObject::connect(timer, &QTimer::timeout, [this, ms, scoreLabel] {
        state_->calc(ms);
        scoreLabel->setText(QString("Score: %1").arg(state_->getScore()));
        update();
    });

    timer->start(ms);
}

GameWidget::~GameWidget() {}

void GameWidget::keyPressEvent(QKeyEvent *event) {
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

void GameWidget::resetState() {
    state_ = std::make_unique<GameState>(WND_WIDTH, WND_HEIGHT);
}
