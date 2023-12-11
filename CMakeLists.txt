cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_COMPILER g++)
project(Project VERSION 1.0.0 LANGUAGES CXX)

# Default to release builds
if(NOT CMAKE_BUILD_TYPE)
   set(CMAKE_BUILD_TYPE Release)
endif()

# Sets glob file(s) to variable SOURCES
file(GLOB SOURCES src/*.cpp include/*.cpp)

# Adds an executable with the PROJECT_NAME from SOURCES file
add_executable(${PROJECT_NAME} ${WIN32_GUI} ${SOURCES} ${RESOURCE_FILES})
# Includes the directories
include_directories(include/headers)
# Sets the C++ version
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)