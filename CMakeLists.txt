cmake_minimum_required(VERSION 2.8)

project(font_to_svg)

add_executable(example1 example1.cpp font_to_svg.hpp)
add_executable(example2 example2.cpp font_to_svg.hpp)
add_executable(example3 example3.cpp font_to_svg.hpp)
add_executable(example4 example4.cpp font_to_svg.hpp)

find_package(Freetype)
include_directories(${FREETYPE_INCLUDE_DIRS})
target_link_libraries(example1 ${FREETYPE_LIBRARIES})
target_link_libraries(example2 ${FREETYPE_LIBRARIES})
target_link_libraries(example3 ${FREETYPE_LIBRARIES})
target_link_libraries(example4 ${FREETYPE_LIBRARIES})
