cmake_minimum_required(VERSION 3.15)
project(PackageTest CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(knit++ CONFIG REQUIRED)

add_executable(example src/example.cpp)
target_link_libraries(example knit++::knit++)
