#pragma once
#include <entt/entity/registry.hpp>

namespace Flux
{
	// Class that handles running systems
	class FLUX_API SystemPipeline
	{
	public:
		void Update(entt::registry& registry, float deltaSeconds);
	};
}