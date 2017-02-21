cmake_minimum_required(VERSION 3.6)
project(arkanoid)

set(CMAKE_CXX_STANDARD 14)

find_package(Qt5Widgets REQUIRED)

add_library(arkanoidLib Ball.cpp Ball.h GameObject.cpp GameObject.h Brick.cpp Brick.h Collisions.cpp Collisions.h GameState.cpp GameState.h)
target_link_libraries(arkanoidLib Qt5::Widgets)

set(SOURCE_FILES main.cpp GameWidget.cpp GameWidget.h)
add_executable(arkanoid ${SOURCE_FILES})
target_link_libraries(arkanoid arkanoidLib)

add_subdirectory(3rdparty/googletest)
add_executable(arkanoidTest test.cpp)
target_link_libraries(arkanoidTest gtest_main arkanoidLib)