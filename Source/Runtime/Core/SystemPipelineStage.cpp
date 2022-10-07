#include "SystemPipelineStage.h"

namespace Flux
{
	void SystemPipelineStage::Update(entt::registry& registry, float deltaSeconds)
	{
		for (auto system : m_Systems)
		{
			system->Update(registry, deltaSeconds);
		}
	}

	void SystemPipelineStage::WaitForUpdate()
	{
		for (auto system : m_Systems)
		{
			system->WaitForUpdate();
		}
	}
}