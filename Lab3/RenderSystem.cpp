#include "RenderSystem.h"
#include <iostream>
#include "JsonHelper.h"

RenderSystem* RenderSystem::instance = nullptr;

void RenderSystem::Initialize()
{
	std::cout << "Render System Initialize()" << std::endl;

	json::JSON document = JsonHelper::OpenFile("RenderSettings.h");

	if (!document.IsNull())
	{
		name = JsonHelper::GetValue(document, "name").ToString();
		width = JsonHelper::GetValue(document, "width").ToInt();
		height = JsonHelper::GetValue(document, "hieght").ToInt();
		bFullscreen = JsonHelper::GetValue(document, "fullscreen").ToBool();
	}

	//SDL Window Code
}

void RenderSystem::Load()
{
	std::cout << "Render System Load()" << std::endl;
}

void RenderSystem::Update()
{
	std::cout << "Render System Update()" << std::endl;
}
