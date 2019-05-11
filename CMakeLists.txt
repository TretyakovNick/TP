cmake_minimum_required(VERSION 3.10.2)
project(game)

add_subdirectory(src)

set(SOURCE_LIST main.cpp)

add_executable(main ${SOURCE_LIST})

target_link_libraries(main lib)

include(cmake/googletest.cmake)
fetch_googletest(
        ${PROJECT_SOURCE_DIR}/cmake
        ${PROJECT_BINARY_DIR}/googletest
)

enable_testing()
add_subdirectory(test)