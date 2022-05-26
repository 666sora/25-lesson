cmake_minimum_required(VERSION 3.0.0)
project(surgery VERSION 0.1.0)

add_executable(surgery main.cpp tools.h coordinates.h)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
