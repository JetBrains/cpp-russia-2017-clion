
#include <QApplication>
#include <QWidget>

int main(int argc, char** argv) {
    QApplication app(argc, argv);
    QWidget w;
    w.show();
    app.exec();
    return 0;
}