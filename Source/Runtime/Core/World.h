#pragma once
#include <entt/entity/registry.hpp>

namespace Flux
{
	/** Class representing game world */
	class FLUX_API World
	{
	private:
		entt::registry m_Registry;
	};
}