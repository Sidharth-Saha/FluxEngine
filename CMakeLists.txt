cmake_minimum_required(VERSION 3.0)

project(FluxEngine)

add_library(FluxRuntime
	"Source/Runtime/Core/Engine.cpp"
	"Source/Runtime/Core/World.cpp"
	"Source/Runtime/Core/System.cpp"
	"Source/Runtime/Core/SystemPipeline.cpp"
	"Source/Runtime/Core/SystemPipelineStage.cpp"
	"Source/Runtime/Multithreading/WorkerThread.cpp"
)
target_include_directories(FluxRuntime PUBLIC "Source")
target_compile_definitions(FluxRuntime PUBLIC FLUX_API=)
target_link_libraries(FluxRuntime PRIVATE EnTT::EnTT)

add_executable(FluxTest
	"Source/Applications/Test/EngineTest.cpp"
	"Source/Applications/Test/Main.cpp"
)
target_include_directories(FluxTest PUBLIC "Source")
target_link_libraries(FluxTest PRIVATE FluxRuntime)

find_package(Entt CONFIG REQUIRED)