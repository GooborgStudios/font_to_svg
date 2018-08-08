cmake_minimum_required(VERSION 2.8)

project(font_to_svg)

file(GLOB UNICODE_BLOCKS "${CMAKE_SOURCE_DIR}/unicode_blocks")

add_executable(font_to_svg main.cpp font_to_svg.hpp ${UNICODE_BLOCKS})
add_executable(xerexesExtractor xerexesExtractor.cpp font_to_svg.hpp)
add_executable(example1 examples/example1.cpp font_to_svg.hpp)
add_executable(example2 examples/example2.cpp font_to_svg.hpp)

find_package(Freetype)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${FREETYPE_INCLUDE_DIRS})
target_link_libraries(font_to_svg ${FREETYPE_LIBRARIES})
target_link_libraries(xerexesExtractor ${FREETYPE_LIBRARIES})
target_link_libraries(example1 ${FREETYPE_LIBRARIES})
target_link_libraries(example2 ${FREETYPE_LIBRARIES})
