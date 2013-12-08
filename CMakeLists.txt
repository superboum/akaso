project(akaso)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. SRC_LIST)
aux_source_directory(./controller SRC_LIST)
aux_source_directory(./map SRC_LIST)
aux_source_directory(./util SRC_LIST)
aux_source_directory(./view SRC_LIST)


#set(DCMAKE_C_COMPILER "/usr/bin/clang")
#set(DCMAKE_CXX_COMPILER "/usr/bin/clang++")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "build")
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules")

find_package(SFML REQUIRED)

file(COPY ressources DESTINATION build)

add_executable(akaso ${SRC_LIST})

target_link_libraries(akaso ${SFML_LIBRARY})
