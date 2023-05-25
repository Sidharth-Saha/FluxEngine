#pragma once
#include <thread>

namespace Flux
{
	// Class managing worker thread
	class WorkerThread
	{
	public:
		// Starts the execution of the worker thread
		void Run();

	private:
		std::thread m_Thread;

		// Entry point into the thread
		void EntryPoint();
	};
}