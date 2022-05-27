cmake_minimum_required(VERSION 3.0.0)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
add_executable(puter main.cpp ${MY_INCLUDE_DIR}/cpu.h ${MY_INCLUDE_DIR}/disk.h ${MY_INCLUDE_DIR}/gpu.h ${MY_INCLUDE_DIR}/kbd.h ${MY_INCLUDE_DIR}/ram.h)
target_include_directories(puter PUBLIC ${MY_INCLUDE_DIR})