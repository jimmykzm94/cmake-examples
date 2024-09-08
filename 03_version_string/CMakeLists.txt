# Set version number here
cmake_minimum_required(VERSION 3.28)
project(main VERSION 1.2)
configure_file(version.h.in ${PROJECT_SOURCE_DIR}/version.h)
add_executable(main main.cpp)