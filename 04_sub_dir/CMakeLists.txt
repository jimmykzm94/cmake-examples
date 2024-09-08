# Set minumum version and compile main
cmake_minimum_required(VERSION 3.28)
project(main)
add_executable(main main.cpp)

# Add directory to include CMakeLists.txt, compile and link to main
add_subdirectory(calculation)
target_include_directories(main PUBLIC "${PROJECT_SOURCE_DIR}/calculation")
target_link_libraries(main PUBLIC Calculation)