cmake_minimum_required(VERSION 3.22)

project(Tutorial)

# Define configuration variables
set(PROJECT_VERSION_MAJOR 1)
set(PROJECT_VERSION_MINOR 0)
set(AUTHOR_NAME "Jith")

# Configure the header file
configure_file(Config.h.in Config.h)

add_subdirectory(MathFunctions)

# Add the executable
add_executable(tutorial tutorial.cpp)

# Include the directory where the generated header file is located
target_include_directories(tutorial PRIVATE "${CMAKE_BINARY_DIR}" "${PROJECT_SOURCE_DIR}/MathFunctions")

target_link_libraries(tutorial PUBLIC MathFunctions)
