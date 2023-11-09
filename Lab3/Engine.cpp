#include "Engine.h"
#include <iostream>
#include "Time.h"
#include "AssetManager.h"
#include "InputManager.h"
#include "RenderSystem.h"
#include "SceneManager.h"

Engine* Engine::instance = nullptr;

void Engine::Initialize()
{
	std::cout << "Engine Initialize()" << std::endl;
	
	Time::Instance().Initialize();

	AssetManager::Instance().Initialize();
	InputManager::Instance().Initialize();
	RenderSystem::Instance().Initialize();
	SceneManager::Instance().Initialize();

}

void Engine::Load()
{
	std::cout << "Engine Load()" << std::endl;

	RenderSystem::Instance().Load();
}

void Engine::Update()
{
	std::cout << "Engine Update()" << std::endl;

	Time::Instance().Update();

	AssetManager::Instance().Update();
	InputManager::Instance().Update();
	RenderSystem::Instance().Update();
	SceneManager::Instance().Update();
}

void Engine::Destroy()
{
	Time::Instance().Destroy();

	AssetManager::Instance().Destroy();
	InputManager::Instance().Destroy();
	RenderSystem::Instance().Destroy();
	SceneManager::Instance().Destroy();

	if (instance != nullptr)
	{
		delete instance;
		instance = nullptr;
	}
}