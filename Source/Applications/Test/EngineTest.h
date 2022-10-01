#pragma once
#include "Runtime/Core/Engine.h"

namespace Flux
{
	class FLUX_API EngineTest : public Engine
	{
	public:
		virtual int Run(int argc, char** argv) override;
	};
}