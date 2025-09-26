cmake_minimum_required(VERSION 3.14)
project(laba1)

set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.15.0
  TLS_VERIFY false
)

FetchContent_MakeAvailable(googletest)

add_library(${CMAKE_PROJECT_NAME}_lib src/laba1.cpp)
add_executable(${CMAKE_PROJECT_NAME}_src main.cpp)

target_link_libraries(${CMAKE_PROJECT_NAME}_src PRIVATE ${CMAKE_PROJECT_NAME}_lib)

enable_testing()

add_executable(tests tests/laba1_test.cpp)
target_link_libraries(tests ${CMAKE_PROJECT_NAME}_lib gtest_main)

add_test(NAME MyProjectTests COMMAND tests)