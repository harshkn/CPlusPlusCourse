cmake_minimum_required(VERSION 3.6)
project(CPPCourse)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES 15_maps.cpp)
find_package( OpenCV REQUIRED )
#include(~/dlib_v19.4/dlib/cmake)
add_executable(CPPCourse ${SOURCE_FILES})

#MACRO(add_example name)
#    ADD_EXECUTABLE(${name} ${name}.cpp)
#    TARGET_LINK_LIBRARIES(${name} ${OpenCV_LIBS} dlib)
#ENDMACRO()

#add_example(removeBlemish)