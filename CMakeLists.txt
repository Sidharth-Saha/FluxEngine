cmake_minimum_required(VERSION 3.0)

project(FluxEngine)

add_library(FluxRuntime
	"Source/Runtime/Core/Engine.cpp"
	"Source/Runtime/Core/World.cpp"
	"Source/Runtime/Core/System.cpp"
)
target_include_directories(FluxRuntime PUBLIC "Source")
target_compile_definitions(FluxRuntime PUBLIC FLUX_API=)
target_link_libraries(FluxRuntime PRIVATE EnTT::EnTT)

find_package(Entt CONFIG REQUIRED)