cmake_minimum_required(VERSION 3.15)
project(knit++ CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SOURCES 
	src/knit++.cpp
	)

set(PUBLIC_HEADERS
	include/knit++.hpp
	)

set(PRIVATE_HEADERS
	include/macros.hpp
	)

add_library(knit++ ${SOURCES} ${PUBLIC_HEADERS} ${PRIVATE_HEADERS})
target_include_directories(knit++ PRIVATE include)

set_target_properties(knit++ PROPERTIES PUBLIC_HEADER "${PUBLIC_HEADERS}" PRIVATE_HEADER "${PRIVATE_HEADERS}")
install(TARGETS knit++)
