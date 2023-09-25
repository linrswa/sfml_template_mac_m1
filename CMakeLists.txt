cmake_minimum_required(VERSION 3.20)

project(HelloSFML)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

add_executable(HelloSFML main.cpp)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR})

find_package(SFML 2.6 COMPONENTS system window graphics network audio REQUIRED)
include_directories(/opt/homebrew/opt/sfml/include)
target_link_libraries(HelloSFML sfml-system sfml-window sfml-graphics sfml-audio sfml-network)