cmake_minimum_required(VERSION 3.0)

project(FluxEngine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

option(FLUX_SHARED_LIBS TRUE)

set(FLUX_INCLUDE_PATHS "Source")
set(FLUX_SOURCE "Source/Main/Main.cpp")
set(FLUX_CORE_SOURCE "Source/Core/GameFramework/World.cpp")

add_executable(FluxEngine ${FLUX_SOURCE})
target_include_directories(FluxEngine PRIVATE ${FLUX_INCLUDE_PATHS})
target_link_libraries(FluxEngine PRIVATE FluxCore)

if(FLUX_SHARED_LIBS)
	add_library(FluxCore SHARED ${FLUX_CORE_SOURCE})
	target_compile_definitions(FluxCore PRIVATE FLUX_CORE_API=__declspec(dllexport))
	target_compile_definitions(FluxCore INTERFACE FLUX_CORE_API=__declspec(dllimport))
else()
	add_library(FluxCore STATIC ${FLUX_CORE_SOURCE})
	target_compile_definitions(FluxCore PUBLIC FLUX_CORE_API=)
endif()
target_include_directories(FluxCore PRIVATE ${FLUX_INCLUDE_PATHS})