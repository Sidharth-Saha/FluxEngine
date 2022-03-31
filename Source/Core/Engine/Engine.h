#pragma once

namespace Flux
{
	// Base Engine Class
	class FLUX_CORE_API Engine
	{
	public:
		virtual ~Engine();

		virtual int Run(int argc, char** argv);

	protected:
		virtual void Init() = 0;
		virtual void Shutdown() = 0;
		virtual void Loop() = 0;
	};
}