#Set minimum version requered
cmake_minimum_required(VERSION 2.4.6)
#just to avoid the warning
if(COMMAND cmake_policy)
     cmake_policy(SET CMP0003 NEW)
endif(COMMAND cmake_policy)
#set project name
project(OpenCV_sample)
set(CMAKE_CXX_FLAGS_DEBUG "-DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -Wall")
#Append path to the module path
list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR})
#OpenCV
find_package(OpenCV REQUIRED)
#set the default path for built executables to the "bin" directory
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../bin)
#set the default path for built libraries to the "lib" directory
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../lib)
#set the include directories
include_directories (${PROJECT_SOURCE_DIR}/../include	${OpenCV_INCLUDE_DIRS})
#libraries
add_library(Library_name Library_name.cpp)
#executables
add_executable(main main.cpp)
#link the libraries
target_link_libraries(main Library_name ${OpenCV_LIBS})
#set optimization level 
set(CMAKE_BUILD_TYPE Debug)

