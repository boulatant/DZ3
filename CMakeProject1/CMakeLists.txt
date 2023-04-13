# CMakeList.txt: проект CMake для CMakeProject1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)
project(CMakeProject1 CXX)
set (CMAKE_CXX_STANDARD 20)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
file(GLOB LIB "inoutlib/src/*.cpp")
add_library(inout SHARED ${LIB})
# Добавьте источник в исполняемый файл этого проекта.
add_executable (CMakeProject1 "main.cpp" "CMakeProject1.h" "inoutlib/include/inout.h")
target_link_libraries(CMakeProject1 inout)
if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeProject1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
