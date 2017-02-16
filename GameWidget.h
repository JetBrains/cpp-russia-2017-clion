#pragma once

#include <QWidget>
#include <memory>

struct GameState;

//TODO: Document class
struct GameWidget : public QWidget {
    GameWidget(QWidget* parent);
    ~GameWidget();

protected:
    void paintEvent(QPaintEvent* event) override;
    void keyPressEvent(QKeyEvent* event) override;

private:
    std::unique_ptr<GameState> state_;
};

