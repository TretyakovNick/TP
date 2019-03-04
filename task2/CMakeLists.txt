cmake_minimum_required(VERSION 3.10.2)
project(task2)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_subdirectory(B)

set(SOURCE_LIST C/main.cpp)

add_executable(run ${SOURCE_LIST})

add_custom_target(
	GenerateIndex ALL
	COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/A/preparing.py 
	WORKING_DIRECTORY A)

add_dependencies(run GenerateIndex)