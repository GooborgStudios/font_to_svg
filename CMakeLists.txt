cmake_minimum_required(VERSION 2.8)

project(font_to_svg DESCRIPTION "Generate SVG files from font glyphs")

# C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Executables
add_executable(font_to_svg main.cpp font_to_svg.hpp ${CMAKE_CURRENT_BINARY_DIR}/unicode.json)
add_executable(example1 examples/example1.cpp font_to_svg.hpp)
add_executable(example2 examples/example2.cpp font_to_svg.hpp)

# Collect unicode data
add_custom_target(get_unicode ALL)
add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/unicode.json COMMAND python ${CMAKE_CURRENT_SOURCE_DIR}/download_unicode_data.py)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Dependencies

# Freetype
find_package(Freetype)
include_directories(${FREETYPE_INCLUDE_DIRS})
target_link_libraries(font_to_svg ${FREETYPE_LIBRARIES})
target_link_libraries(example1 ${FREETYPE_LIBRARIES})
target_link_libraries(example2 ${FREETYPE_LIBRARIES})

# RapidJSON
find_package(nlohmann_json)
target_link_libraries(font_to_svg nlohmann_json::nlohmann_json)

# wxWidgets
find_package(wxWidgets COMPONENTS core base)
include(${wxWidgets_USE_FILE})
target_link_libraries(font_to_svg ${wxWidgets_LIBRARIES})
