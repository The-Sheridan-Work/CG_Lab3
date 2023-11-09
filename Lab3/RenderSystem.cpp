#include "RenderSystem.h"
#include <iostream>
#include "JsonHelper.h"
#include "SDL.h"

RenderSystem* RenderSystem::instance = nullptr;

RenderSystem::RenderSystem()
{
	std::cout << "Render System Constructor" << std::endl;
}

RenderSystem::~RenderSystem()
{
	std::cout << "Render System Destructor" << std::endl;
}


void RenderSystem::Initialize()
{
	std::cout << "Render System Initialize()" << std::endl;

	json::JSON document = JsonHelper::OpenFile("RenderSystem.json");

	if (!document.IsNull())
	{
		name = JsonHelper::GetValue(document, "name").ToString();
		width = JsonHelper::GetValue(document, "width").ToInt();
		height = JsonHelper::GetValue(document, "height").ToInt();
		bFullscreen = JsonHelper::GetValue(document, "fullscreen").ToBool();
	}

	std::cout << "Window: " << name << " " << width << " " << height << " " << bFullscreen << std::endl;

	window = SDL_CreateWindow(name.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, bFullscreen ? 1 : 0);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}

void RenderSystem::Load()
{
	std::cout << "Render System Load()" << std::endl;
}

void RenderSystem::Update()
{
	std::cout << "Render System Update()" << std::endl;
}

void RenderSystem::Destroy()
{
	SDL_DestroyWindow(window);
	SDL_Quit();

	if (instance != nullptr)
	{
		delete instance;
		instance = nullptr;
	}
}