cmake_minimum_required(VERSION 3.15)

project("Templates")

set (CMAKE_CXX_STANDARD 14)

add_executable(1_function_overloading 1_function_overloading.cpp complex_number.cpp)
add_executable(2_template_functions 2_template_functions.cpp complex_number.cpp)
add_executable(3_template_functions_edge_cases 3_template_functions_edge_cases.cpp complex_number.cpp)
add_executable(4_sorting 4_sorting.cpp complex_number.cpp planet.cpp)
add_executable(5_hello_array 5_hello_array.cpp complex_number.cpp planet.cpp)
