project(akaso)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. SRC_LIST)

#set(CMAKE_CXX_FLAGS "-lsfml-audio -lsfml-graphics -lsfml-window -lsfml-network -lsfml-system")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "build/")
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules")
set(CMAKE_CXX_FLAGS "-Wall -W -Werror -ansi -pedantic -g")

find_package(SFML REQUIRED)

file(COPY ressources DESTINATION build)

add_executable(akaso ${SRC_LIST})

target_link_libraries(akaso ${SFML_LIBRARY})
