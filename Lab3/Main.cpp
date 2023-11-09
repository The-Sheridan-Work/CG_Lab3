#pragma once
#include <iostream>
#include "Engine.h"

int main()
{
	Engine::Instance().Load();
	Engine::Instance().Initialize();
	Engine::Instance().Update();
	Engine::Instance().Destroy();

	std::cout << "It`s Running!" << std::endl;
	return 0;
}