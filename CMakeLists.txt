cmake_minimum_required(VERSION 3.12)

project(FluxEngine)

if(WIN32)
	set(DLL_EXPORT "__declspec(dllexport)")
	set(DLL_IMPORT "__declspec(dllimport)")
endif()

option(FLUX_SHARED_LIBS "Build the engine using shared libraries" ON)

set(FLUX_CORE_SOURCE "Source/Core/Engine/Engine.cpp")

if(FLUX_SHARED_LIBS)
	add_library(FluxCore SHARED ${FLUX_CORE_SOURCE})
	target_compile_definitions(FluxCore PRIVATE FLUX_CORE_API=${DLL_EXPORT} INTERFACE FLUX_CORE_API=${DLL_IMPORT})
else()
	add_library(FluxCore STATIC ${FLUX_CORE_SOURCE})
	target_compile_definitions(FluxCore PUBLIC FLUX_CORE_API=)
endif()

add_subdirectory("external/entt")
target_link_libraries(FluxCore PUBLIC EnTT)