cmake_minimum_required(VERSION 3.26)
project(Ressursforvalter)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB LIB_SOURCES "src/*.cpp")

add_library(my_lib STATIC ${LIB_SOURCES}
        include/Utility.hpp
        include/Resource.hpp)

target_include_directories(my_lib PUBLIC "${CMAKE_SOURCE_DIR}/include")

add_executable(Ressursforvalter src/main.cpp)

target_link_libraries(Ressursforvalter PRIVATE my_lib)
