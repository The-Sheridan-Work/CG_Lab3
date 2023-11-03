#pragma once

#ifndef _SCENE_H_
#define _SCENE_H_

#include <string>
#include <list>

class Entity;

class Scene
{
	friend class SceneManager;

private:

	std::string name;
	int id;
	std::list<Entity*> entities;

public:

	Scene();

	~Scene();

	void Initialize();

	void Load(std::string fName);
	
	void Update();

	void Destroy();

	Entity* CreateEntity();

	void RemoveEntity(Entity* entity);

	Entity* FindEntityById(int id);

};

#endif // !_SCENE_H_
