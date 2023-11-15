cmake_minimum_required(VERSION 3.10)
project(lvgl)
set(CMAKE_C_STANDARD 11)#C11
set(CMAKE_CXX_STANDARD 17)#C17
set(CMAKE_CXX_STANDARD_REQUIRED ON)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR})

file(GLOB_RECURSE INCLUDES "lv_drivers/*.h" "lv_demos/*.h"  "lvgl/*.h"  "./*.h" "myui/*.h" "H_tarck/*.h")
file(GLOB_RECURSE SOURCES  "lv_drivers/*.c" "lv_demos/*.c"  "lvgl/*.c" "TEST/generated/images/*.c" "myui/*.c" "H_tarck/*.cpp" "TEST/generated/*.c")

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
SET(CMAKE_CXX_FLAGS "-O3")
SET(SDL2_DIR F:/SDL2-2.28.5/x86_64-w64-mingw32/lib/cmake/SDL2/)
find_package(SDL2 REQUIRED SDL2)
include_directories(${SDL2_INCLUDE_DIRS})
add_executable(main main.c mouse_cursor_icon.c ${SOURCES} ${INCLUDES}
        myui/myui.c
        myui/myui.h
        myui/OIP.c
        TEST/generated/images/Start.c
        myui/animotion.c
        myui/animotion.h
        H_tarck/Start_up.cpp
        H_tarck/Start_up.h
        H_tarck/Diplat.cpp
        H_tarck/Diplat.h
        H_tarck/SysIfo.cpp
        H_tarck/SysIfo.h
)
add_compile_definitions(LV_CONF_INCLUDE_SIMPLE)
target_link_libraries(main PRIVATE SDL2 )
add_custom_target (run COMMAND ${EXECUTABLE_OUTPUT_PATH}/main)
