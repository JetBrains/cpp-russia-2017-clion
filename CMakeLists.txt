cmake_minimum_required(VERSION 3.6)
project(arkan9)

set(CMAKE_CXX_STANDARD 14)

find_package(Qt5Widgets REQUIRED)

add_library(arkan9Lib Ball.cpp Ball.h GameObject.cpp GameObject.h Brick.cpp Brick.h Collisions.cpp Collisions.h GameState.cpp GameState.h)
target_link_libraries(arkan9Lib Qt5::Widgets)

set(SOURCE_FILES main.cpp GameWidget.cpp GameWidget.h)
add_executable(arkan9 ${SOURCE_FILES})
target_link_libraries(arkan9 arkan9Lib)

add_subdirectory(3rdparty/googletest)
add_executable(arkan9Test test.cpp)
target_link_libraries(arkan9Test gtest arkan9Lib)