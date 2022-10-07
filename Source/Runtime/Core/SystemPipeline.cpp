#include "SystemPipeline.h"

namespace Flux
{
	void SystemPipeline::Init()
	{

	}

	void SystemPipeline::Shutdown()
	{

	}

	void SystemPipeline::Update(entt::registry& registry, float deltaSeconds)
	{
		for (auto stage : m_PipelineStages)
		{
			stage->Update(registry, deltaSeconds);
			stage->WaitForUpdate();
		}
	}
}