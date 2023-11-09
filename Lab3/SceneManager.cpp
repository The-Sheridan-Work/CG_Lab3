#include "SceneManager.h"
#include "Entity.h"
#include "Scene.h"
#include<iostream>

SceneManager* SceneManager::instance = nullptr;


void SceneManager::Initialize()
{
	std::cout << "SceneManager Initialize()" << std::endl;
	for (Scene* s : scenes)
	{
		s->Initialize();
	}
}

void SceneManager::Update()
{
	std::cout << "SceneManager Update()" << std::endl;
	for (Scene* s : scenes)
	{
		s->Update();
	}
}

void SceneManager::AddScene(Scene* scene)
{
	scenes.push_back(scene);
}

void SceneManager::RemoveScene(Scene* scene)
{
	for (Scene* s : scenes)
	{
		if (s == scene)
			scenes.remove(scene);
	}
}

Entity* SceneManager::CreateEntity()
{
	return activeScene->CreateEntity();
}

void SceneManager::RemoveEntity(Entity* entity)
{
	for (Entity* e : activeScene->entities)
	{
		if (e == entity)
		{
			activeScene->entities.remove(entity);
			//#TODO Possibly Delete?
		}
	}
}

Entity* SceneManager::FindEntityById(int id)
{
	for (Entity* e : activeScene->entities)
	{
		if (e->GetId() == id)
		{
			return e;
		}
	}
	return nullptr;
}

void SceneManager::Destroy()
{
	std::cout << "SceneManager Destroy()" << std::endl;

	for (Scene* s : scenes)
	{
		s->Destroy();
	}
	scenes.clear();

	if (instance != nullptr)
	{
		delete instance;
		instance = nullptr;
	}
}
