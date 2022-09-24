cmake_minimum_required(VERSION 3.0)

project(FluxEngine)

add_library(FluxEngine
	"Source/Engine/Core/Engine.cpp"
)
target_include_directories(FluxEngine PUBLIC "Source")
target_compile_definitions(FluxEngine PUBLIC FLUX_API=)