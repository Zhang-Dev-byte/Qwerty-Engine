#pragma once

#ifdef QW_PLATFORM_WINDOWS

extern Qwerty::Application* Qwerty::CreateApplication();
int main(int argc,char** argv) {
	auto app = Qwerty::CreateApplication();
	app->Run();
	delete app;
}
#endif