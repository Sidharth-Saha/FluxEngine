cmake_minimum_required(VERSION 3.0)

project(FluxEngine)

add_library(FluxRuntime
	"Source/Runtime/Core/Engine.cpp"
)
target_include_directories(FluxRuntime PUBLIC "Source")
target_compile_definitions(FluxRuntime PUBLIC FLUX_API=)