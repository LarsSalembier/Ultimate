#pragma once

#include "Core.h"

namespace Ultimate {

	class ULTIMATE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}
