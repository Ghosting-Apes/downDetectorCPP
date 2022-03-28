#include <QApplication>
#include <QPushButton>
#include "main_window.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    UI::MainWindow mainWindow;
    mainWindow.showMaximized();
    return QApplication::exec();
}
