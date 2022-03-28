//
// Created by Henock Dinberu on 3/28/22.
//

#ifndef DOWNDETECTOR_MAIN_WINDOW_H
#define DOWNDETECTOR_MAIN_WINDOW_H

#include <QPushButton>
#include <QMainWindow>

namespace UI {
    class MainWindow : public QMainWindow {
    public:
        explicit MainWindow(QWidget* parent = nullptr);

    private:
        void handle_release();
        void handle_pressed();

    private:
        QPushButton* button;
        std::int32_t count;
    };

}

#endif //DOWNDETECTOR_MAIN_WINDOW_H
