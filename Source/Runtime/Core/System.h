#pragma once
#include <entt/entity/registry.hpp>

namespace Flux
{
	class FLUX_API System
	{
	public:
		// Virtual destructor
		virtual ~System();

		virtual void Update(entt::registry& registry, float deltaSeconds);

		// Waits for the system to complete update
		virtual void WaitForUpdate();
	};
}