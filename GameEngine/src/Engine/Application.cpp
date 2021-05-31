#include "mepch.h"

#include "Application.h"
#include "Engine/Events/ApplicationEvent.h"

namespace Engine {
	Application::Application()
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
	}
	
	Application::~Application()
	{
	}

	void Application::Run()
	{
		while (m_Running)
		{
			m_Window->OnUpdate();
		}
	}
}
