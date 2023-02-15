#pragma once

#ifdef ULT_PLATFORM_WINDOWS

extern Ultimate::Application* Ultimate::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Ultimate::CreateApplication();
	app->Run();
	delete app;
}

#endif
