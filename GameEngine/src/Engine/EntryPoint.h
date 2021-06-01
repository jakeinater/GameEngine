#pragma once

#ifdef ME_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv)
{
	Engine::Log::Init();
	ME_CORE_WARN("Initialized log!");
	int a = 5;
	ME_INFO("Initialized log! Var={0}", a);

	Engine::Application* app = Engine::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error my engine only supports windows

#endif
