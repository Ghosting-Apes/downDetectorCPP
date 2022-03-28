#include <QApplication>
#include <QPushButton>
#include "main_window.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
//    QPushButton button("Hello world!", nullptr);
//    button.resize(200, 100);
//    button.show();
    UI::MainWindow mainWindow;
    mainWindow.showMaximized();
    return QApplication::exec();
}
