cmake_minimum_required(VERSION 3.16)
project(knit++ CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SOURCES 
	src/knit++.cpp
	src/test_mgr.cpp
	src/thread.cpp
	)

set(PUBLIC_HEADERS
	include/knit++.hpp
	include/test_mgr.hpp
	include/helpers/macros.hpp
	)

set(PUBLIC_PRECOMPILED_HEADERS
	include/helpers/pch.hpp
	)

set(PRIVATE_HEADERS
	include/detail/thread.hpp
	)

add_library(knit++ ${SOURCES} ${PUBLIC_HEADERS} ${PRIVATE_HEADERS})
target_include_directories(knit++ PRIVATE include)
set_target_properties(knit++ PROPERTIES PUBLIC_HEADER "${PUBLIC_HEADERS}")

install(TARGETS knit++)
