cmake_minimum_required(VERSION 3.21)
project(DownDetector)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(DownDetector main.cpp main_window.h main_window.cpp)
target_link_libraries(DownDetector
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )

