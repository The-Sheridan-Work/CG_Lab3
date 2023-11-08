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
	for (Entity* e : entities)
	{
		if (e == entity)
			entities.remove(e);
	}
}

Entity* Scene::FindEntityById(int id)
{
	for (Entity* e : entities)
	{
		if (e->GetId() == id)
		{
			return e;
		}
	}
	return nullptr;
}
