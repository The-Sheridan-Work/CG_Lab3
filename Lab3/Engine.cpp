#include "Engine.h"
#include <iostream>
#include "Time.h"

Engine* Engine::instance = nullptr;

void Engine::Initialize()
{
	std::cout << "Engine Initialize()" << std::endl;
	
	Time::Instance().Initialize();


}

void Engine::Load()
{
	std::cout << "Engine Load()" << std::endl;
}

void Engine::Update()
{
	std::cout << "Engine Update()" << std::endl;

	Time::Instance().Update();
}
