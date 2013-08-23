project(akaso)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. SRC_LIST)

set(CMAKE_CXX_FLAGS "-lsfml-audio -lsfml-graphics -lsfml-window -lsfml-network -lsfml-system")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "build/")

file(COPY ressources DESTINATION build)

add_executable(${PROJECT_NAME} ${SRC_LIST})

