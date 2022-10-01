#pragma once
#include "System.h"

#include <entt/entity/registry.hpp>

#include <vector>

namespace Flux
{
	/** Class representing game world */
	class FLUX_API World
	{
	public:
		void Update(float deltaSeconds);

	private:
		entt::registry m_Registry;
		std::vector<System*> m_Systems;
	};
}