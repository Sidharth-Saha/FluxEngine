cmake_minimum_required(VERSION 3.12)

project(FluxEngine)

if(WIN32)
	set(DLL_EXPORT "__declspec(dllexport)")
	set(DLL_IMPORT "__declspec(dllimport)")
endif()

option(FLUX_SHARED_LIBS "Build the engine using shared libraries" ON)

set(FLUX_SOURCE_DIR "Source")

set(FLUX_CORE_SOURCE_FILES 
	"Source/Core/Engine/Engine.cpp"
	"Source/Core/Game/World.cpp")

if(FLUX_SHARED_LIBS)
	add_library(FluxCore SHARED ${FLUX_CORE_SOURCE_FILES})
	target_compile_definitions(FluxCore PRIVATE FLUX_CORE_API=${DLL_EXPORT} INTERFACE FLUX_CORE_API=${DLL_IMPORT})
else()
	add_library(FluxCore STATIC ${FLUX_CORE_SOURCE_FILES})
	target_compile_definitions(FluxCore PUBLIC FLUX_CORE_API=)
endif()

target_include_directories(FluxCore PUBLIC ${FLUX_CORE_SOURCE_DIR})

find_package(EnTT CONFIG REQUIRED)
target_link_libraries(FluxCore PRIVATE EnTT::EnTT)

find_package(SDL2 CONFIG REQUIRED)
target_link_libraries(FluxCore PRIVATE SDL2::SDL2 SDL2::SDL2main)