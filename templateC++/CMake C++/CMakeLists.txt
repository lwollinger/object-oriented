cmake_minimum_required(VERSION 4.0)
project(#{PROJECT_NAME})

# source files
set(SOURCES src/main.cpp)

# executable
add_executable(${PROJECT_NAME} ${SOURCES})