#pragma once 
#include "Core.h"

#include "Events/Event.h"
#include "Window.h"
#include "Engine/LayerStack.h"
#include "Engine/Events/ApplicationEvent.h"

namespace Engine {

	class MYENG_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);

		inline static Application& Get() { return *s_Instance; }
		inline Window& GetWindow() { return *m_Window; }

	private:
		bool OnWindowClose(WindowCloseEvent& e);
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_LayerStack;
	private:	
		static Application* s_Instance;
	};
	
	//TO BE DEFINED IN CLIENT
	Application* CreateApplication();

}
