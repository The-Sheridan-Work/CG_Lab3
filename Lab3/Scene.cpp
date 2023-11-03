#include "Scene.h"
#include "Entity.h"
#include <iostream>

Scene::Scene()
{
	std::cout << "Scene Constructor" << std::endl;
}

Scene::~Scene()
{
	std::cout << "Scene Destructor" << std::endl;
}

void Scene::Initialize()
{
	std::cout << "Scene Initialize()" << std::endl;
}

void Scene::Load(std::string fName)
{
	std::cout << "Scene Load()" << std::endl;
}

void Scene::Update()
{
	std::cout << "Scene Update()" << std::endl;
}

void Scene::Destroy()
{
	std::cout << "Scene Destroy()" << std::endl;
}

Entity* Scene::CreateEntity()
{
	Entity* e = new Entity();
	entities.push_back(e);
	return e;
}

void Scene::RemoveEntity(Entity* entity)
{
	for (int i = 0; i < entities.size(); i++)
	{
		if (entities[i] == entity)
		{
			entities.remove(entity);
			//#TODO Possibly Delete?
		}
	}
}

Entity* Scene::FindEntityById(int id)
{
	for (int i = 0; i < entities.size(); i++)
	{
		if (entities[i]->GetId() == id)
		{
			return entities[i];
		}
	}
	return nullptr;
}
