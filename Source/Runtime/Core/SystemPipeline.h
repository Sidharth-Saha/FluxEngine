#pragma once
#include "SystemPipelineStage.h"

#include <entt/entity/registry.hpp>

#include <vector>

namespace Flux
{
	// Class that runs systems in a series of stages
	// Systems in each stage will run in parallel
	// All the systems in the stage must complete before moving to the next stage
	class FLUX_API SystemPipeline
	{
	public:
		void Init();
		void Shutdown();

		void Update(entt::registry& registry, float deltaSeconds);

	private:
		std::vector<SystemPipelineStage*> m_PipelineStages;
	};
}