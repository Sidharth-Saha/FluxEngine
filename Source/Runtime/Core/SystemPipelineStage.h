#pragma once
#include "System.h"

#include <entt/entity/registry.hpp>

#include <vector>

namespace Flux
{
	// Runs the systems in parallel
	class FLUX_API SystemPipelineStage
	{
	public:
		void Update(entt::registry& registry, float deltaSeconds);

		// Waits for all the systems in the stage to finish update
		void WaitForUpdate();

	private:
		std::vector<System*> m_Systems;
	};
}