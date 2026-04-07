cmake_minimum_required(VERSION 4.1)
project(c_programming_study C)

set(CMAKE_C_STANDARD 99)

# 이 폴더 안의 모든 .c 파일을 각각 분리된 실행 파일로 만듭니다.
file(GLOB SRC_FILES "*.c")

foreach(FILE ${SRC_FILES})
    get_filename_component(NAME ${FILE} NAME_WE)
    add_executable(${NAME} ${FILE})
endforeach()
