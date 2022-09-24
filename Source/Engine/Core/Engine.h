#pragma once

namespace Flux
{
	/* Manages all engine systems */
	class FLUX_API Engine
	{
	public:
		virtual ~Engine();

		// Entry point into engine
		virtual int Run(int argc, char** argv);
	};
}