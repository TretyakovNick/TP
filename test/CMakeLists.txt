
add_executable(
        game_tests
        test.cpp
        main.cpp
)

target_include_directories(
    game_tests
        PUBLIC
        "{CMAKE_CURRENT_LIST_DIR}/../src"
        "{gtest_SOURCE_DIR}/include"
        "${gtest_SOURCE_DIR}"
        "${CMAKE_CURRENT_LIST_DIR}/../src"
)

target_link_libraries(
        game_tests
        gtest
        gtest_main
        lib
)