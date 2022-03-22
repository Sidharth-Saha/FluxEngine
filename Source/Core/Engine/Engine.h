#pragma once

namespace Flux
{
	// Base Engine Class
	class FLUX_CORE_API Engine
	{
	public:
		virtual int Run(int argc, char** argv);
	};
}