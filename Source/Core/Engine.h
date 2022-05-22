#pragma once
#include <SDL2/SDL.h>

#include <cstdint>

namespace Flux
{
	// Base Engine Class
	class FLUX_CORE_API Engine
	{
	public:
		virtual ~Engine();

		virtual int Run(int argc, char** argv);

	protected:
		SDL_Window* m_Window;
		const char* m_WindowTitle;
		int m_WindowWidth;
		int m_WindowHeight;
		uint32_t m_WindowFlags;

		virtual void Init();
		virtual void Shutdown();

		virtual void Loop();

		void CreateWindow();
	};
}