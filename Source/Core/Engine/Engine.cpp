#include "Engine.h"

namespace Flux
{
	Engine::~Engine()
	{

	}

	int Engine::Run(int argc, char** argv)
	{
		Init();
		Loop();
		Shutdown();
	}
}