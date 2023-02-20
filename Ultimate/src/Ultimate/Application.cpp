#include "Application.h"

#include "Ultimate/Events/ApplicationEvent.h"
#include "Ultimate/Log.h"

namespace Ultimate {

	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			ULT_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			ULT_TRACE(e);
		}

		while (true);
	}

}
