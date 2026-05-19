cmake_minimum_required(VERSION 4.2)
project(Hello CXX)
SET(CMAKE_CXX_STANDARD 23)

# add dependencies
include(cmake/CPM.cmake)

cpmaddpackage( NAME Boost VERSION 1.91.0 GITHUB_REPOSITORY "boostorg/boost"
	GIT_TAG "boost-1.91.0" GIT_SHALLOW EXCLUDE_FROM_ALL ON SYSTEM ON) 

add_executable(hello main.cpp)
target_link_libraries(hello PRIVATE ws2_32 Boost::asio)
