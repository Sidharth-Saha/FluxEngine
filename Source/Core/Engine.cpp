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

	void Engine::Init()
	{

	}

	void Engine::Shutdown()
	{

	}

	void Engine::Loop()
	{

	}

	void Engine::CreateWindow()
	{
		m_Window = SDL_CreateWindow(m_WindowTitle, 0, 0, m_WindowWidth, m_WindowHeight, m_WindowFlags);
	}
}