cmake_minimum_required(VERSION 3.0)

project(FluxEngine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(FLUX_SOURCE "Source/Main/Main.cpp")

add_executable(FluxEngine ${FLUX_SOURCE})