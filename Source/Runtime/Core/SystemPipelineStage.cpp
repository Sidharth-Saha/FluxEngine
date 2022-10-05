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
}