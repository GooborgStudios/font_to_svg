cmake_minimum_required(VERSION 2.8)

project(font_to_svg)

add_executable(example1 examples/example1.cpp font_to_svg.hpp)
add_executable(example2 examples/example2.cpp font_to_svg.hpp)
add_executable(xerexesExtractod examples/xerexesExtractod.cpp font_to_svg.hpp)
add_executable(extractAllGlyphs examples/extractAllGlyphs.cpp font_to_svg.hpp)

find_package(Freetype)
include_directories(${FREETYPE_INCLUDE_DIRS})
target_link_libraries(example1 ${FREETYPE_LIBRARIES})
target_link_libraries(example2 ${FREETYPE_LIBRARIES})
target_link_libraries(xerexesExtractod ${FREETYPE_LIBRARIES})
target_link_libraries(extractAllGlyphs ${FREETYPE_LIBRARIES})
