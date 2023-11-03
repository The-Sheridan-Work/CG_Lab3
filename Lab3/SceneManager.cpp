#include "SceneManager.h"
#include "Entity.h"
#include "Scene.h"
#include<iostream>

void SceneManager::Initialize()
{
	std::cout << "SceneManager Initialize()" << std::endl;
}

void SceneManager::Update()
{
	std::cout << "SceneManager Update()" << std::endl;
}

void SceneManager::AddScene(Scene* scene)
{
	scenes.push_back(scene);
}

void SceneManager::RemoveScene(Scene* scene)
{
	for (int i = 0; i < scenes.size(); i++)
	{
		if (scenes[i] == scene)
			scenes.remove(scene);
	}
}

Entity* SceneManager::CreateEntity()
{
	Entity* e = new Entity();
	activeScene->entities.push_back(e);
	return e;
}

void SceneManager::RemoveEntity(Entity* entity)
{
	for (int i = 0; i < activeScene->entities.size(); i++)
	{
		if (activeScene->entities[i] == entity)
		{
			activeScene->entities.remove(entity);
			//#TODO Possibly Delete?
		}
	}
}

Entity* SceneManager::FindEntityById(int id)
{
	for (int i = 0; i < activeScene->entities.size(); i++)
	{
		if (activeScene->entities[i]->GetId() == id)
		{
			return activeScene->entities[i];
		}
	}
	return nullptr;
}