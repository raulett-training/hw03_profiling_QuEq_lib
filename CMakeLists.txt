cmake_minimum_required(VERSION 3.22)
project(hw03_profiling_QuEq_lib C)

set(CMAKE_C_STANDARD 99)

add_executable(hw03_profiling_QuEq_lib main.c merge_sort.c merge_sort.h bubble_sort.c bubble_sort.h quadratic_equation.c quadratic_equation.h)

target_link_libraries(hw03_profiling_QuEq_lib PRIVATE "-Wl,--stack,10000000" sort_profiler_stat_lib)
#target_link_libraries(hw03_profiling_QuEq_lib sort_profiler_stat_lib)

add_library(sort_profiler_stat_lib STATIC sort_profiler.c sort_profiler.h)