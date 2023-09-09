cmake_minimum_required(VERSION 3.24.0)

include(FetchContent)

FetchContent_Declare(
  fmt
  GIT_REPOSITORY git@github.com:fmtlib/fmt.git
  GIT_TAG        10.1.1 
)

FetchContent_MakeAvailable(fmt)

project(fmt-example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SOURCES main.cc)

add_executable(fmt-example ${SOURCES})
target_link_libraries(fmt-example fmt::fmt)
