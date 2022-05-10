#pragma once
#include <entt/entity/registry.hpp>

namespace Flux
{
	class FLUX_CORE_API World
	{
	private:
		entt::registry m_Registry;
	};
}