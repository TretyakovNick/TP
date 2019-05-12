cmake_minimum_required(VERSION 3.10.2)
project(game)

add_subdirectory(src)

set(CMAKE_CXX_FLAGS "-lncurses")
set(SOURCE_LIST main.cpp)

add_executable(main ${SOURCE_LIST})

target_link_libraries(main lib)

set(CURSES_NEED_NCURSES TRUE)
find_package(Curses REQUIRED)
if (CURSES_FOUND AND CURSES_HAVE_NCURSES_H)
    include_directories(${CURSES_INCLUDE_DIR})
    target_link_libraries (main ${CURSES_LIBRARIES})
endif()

include(cmake/googletest.cmake)
fetch_googletest(
        ${PROJECT_SOURCE_DIR}/cmake
        ${PROJECT_BINARY_DIR}/googletest
)

enable_testing()
add_subdirectory(test)