cmake_minimum_required(VERSION 3.0.0)

add_executable(puter main.cpp cpu.cpp disk.cpp gpu.cpp kbd.cpp ram.cpp)
target_include_directories(puter PUBLIC ${MY_INCLUDE_DIR})