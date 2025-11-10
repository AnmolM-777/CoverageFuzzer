cmake_minimum_required(VERSION 3.14)
project(CoverageFuzzer VERSION 1.0.0 LANGUAGES CXX C)
set(CMAKE_CXX_STANDARD 17)
include_directories(include)
add_library(fuzzer_core STATIC src/forkserver.cpp src/shared_mem.cpp src/corpus.cpp src/mutator.cpp)
add_executable(coverage_fuzzer src/main.cpp)
target_link_libraries(coverage_fuzzer PRIVATE fuzzer_core pthread)

// Incremental development step #2

// Incremental development step #15
