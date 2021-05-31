#include "mepch.h"

#include "Application.h"
#include "Engine/Log.h"
#include "Engine/Events/ApplicationEvent.h"

namespace Engine {
	Application::Application()
	{
	}
	
	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		ME_TRACE(e);
		
		while (true);
	}
}
