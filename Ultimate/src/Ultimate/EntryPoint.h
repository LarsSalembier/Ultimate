#pragma once

#ifdef ULT_PLATFORM_WINDOWS

extern Ultimate::Application* Ultimate::CreateApplication();

int main(int argc, char** argv)
{
	Ultimate::Log::Init();
	ULT_CORE_WARN("Initialized Log!");
	int a = 5;
	ULT_INFO("Hello! Var={0}", a);

	auto app = Ultimate::CreateApplication();
	app->Run();
	delete app;
}

#endif
