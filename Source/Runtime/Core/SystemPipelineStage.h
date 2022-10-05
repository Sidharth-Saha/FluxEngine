#pragma once
#include "System.h"

#include <entt/entity/registry.hpp>

#include <vector>

namespace Flux
{
	// Holds set of systems to be run to concurrently
	class FLUX_API SystemPipelineStage
	{
	public:
		void Update(entt::registry& registry, float deltaSeconds);

	private:
		std::vector<System*> m_Systems;
	};
}