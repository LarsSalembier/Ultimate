#include <Ultimate.h>

class Sandbox : public Ultimate::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Ultimate::Application* Ultimate::CreateApplication()
{
	return new Sandbox();
}
