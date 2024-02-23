cmake_minimum_required(VERSION 3.5)

project(WindTurbineProject LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_executable(WindTurbine
    main.cpp
    windturbine.cpp
    windturbine.h
)

target_link_libraries(WindTurbine PRIVATE Qt5::Widgets)
