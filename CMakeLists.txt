cmake_minimum_required(VERSION 3.10)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(string_utils LANGUAGES CXX)

add_library(${PROJECT_NAME} string_utils.cpp)
target_include_directories(string_utils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(string_utils_test test/main.cpp)
target_link_libraries(string_utils_test PRIVATE ${PROJECT_NAME})
