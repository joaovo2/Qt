#include <QApplication>
#include <QLabel>
#include <QWidget>

int main(int argc, char** argv){
    QApplication app(argc,argv);
    QLabel hello ("<h1><center>First program write with Qt and C++</center></h1>");
    hello.setWindowTitle("João Vitor Oliveira");
    hello.resize(800, 400);
    hello.show();
    return app.exec();
}
