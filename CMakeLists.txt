cmake_minimum_required(VERSION 3.10)
project(example)

ADD_DEFINITIONS(-D_SCL_SECURE_NO_DEPRECATE -D_CRT_SECURE_NO_WARNINGS)

set(CMAKE_CXX_STANDARD 17)

# Add source files
AUX_SOURCE_DIRECTORY(. SUB_SOURCES)
SET(SOURCES ${SOURCES} ${SUB_SOURCES})
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/libtensorflow2/include)
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/cppflowinc)

LINK_DIRECTORIES(${CMAKE_SOURCE_DIR}/libtensorflow2/lib)
ADD_EXECUTABLE(example ${SOURCES})

ADD_DEFINITIONS(-DNOMINMAX) 
TARGET_LINK_LIBRARIES(example tensorflow.lib)
