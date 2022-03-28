//
// Created by Henock Dinberu on 3/28/22.
//

#include "main_window.h"
#include <string>
#include <sstream>

UI::MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), count(0) {
    this->button = new QPushButton("Click me", this);

    this->button->setGeometry(QRect(QPoint(100, 100), QSize(200, 50)));

    connect(this->button, &QPushButton::released, this, &MainWindow::handle_release);
    connect(this->button, &QPushButton::pressed, this, &MainWindow::handle_pressed);
}

void UI::MainWindow::handle_release() {
    this->count++;
    std::stringstream s{};
    s << "Clicked: " << this->count;
    this->button->setText(QString(s.str().c_str()));
}

void UI::MainWindow::handle_pressed() {
    this->button->setText("Pressed");
}