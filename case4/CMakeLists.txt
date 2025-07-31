cmake_minimum_required(VERSION 3.10)
project(DataStructuresTests)

set(CMAKE_CXX_STANDARD 17)

# Подключаем GoogleTest
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.13.0.zip
)
FetchContent_MakeAvailable(googletest)

# Добавляем тесты
add_executable(
    test_queue
    tests/test_queue.cpp
)
target_link_libraries(test_queue gtest_main)

add_executable(
    test_heap
    tests/test_heap.cpp
)
target_link_libraries(test_heap gtest_main)

add_executable(
    test_binary_tree
    tests/test_binary_tree.cpp
)
target_link_libraries(test_binary_tree gtest_main)
