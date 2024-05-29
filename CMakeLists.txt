cmake_minimum_required(VERSION 3.28)
project(cpp_projects)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp_projects
        prime_nums.cpp)
