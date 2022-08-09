#include <QApplication>
#include <QLabel>
#include <QWidget>

int main(int argc, char **argv){

    QApplication app(argc, argv);
    QLabel hello("<center>Primeiro Programa com Qt e C++ sem interface</center>");
    hello.setWindowTitle("Introdução");
    hello.resize(600, 400);
    hello.show();
    return app.exec();
}