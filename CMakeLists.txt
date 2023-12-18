cmake_minimum_required(VERSION 3.20)
project(baekjoon CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS_DEBUG "-g")

set(EXECUTION_NAME 2557-helloworld)

add_executable(${EXECUTION_NAME}
  src/${EXECUTION_NAME}.cpp
)
