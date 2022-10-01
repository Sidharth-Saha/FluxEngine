#include "World.h"

namespace Flux
{
	void World::Update(float deltaSeconds)
	{
		for (auto system : m_Systems)
		{
			system->Update(m_Registry, deltaSeconds);
		}
	}
}