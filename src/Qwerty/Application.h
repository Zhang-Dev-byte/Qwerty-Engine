#pragma once
#include "Core.h"
namespace Qwerty{
	class QWERTY_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};
	Application* CreateApplication();

}