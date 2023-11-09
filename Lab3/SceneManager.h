#pragma once
#ifndef _SM_H_
#define _SM_H_

#include <list>

class Scene;
class Entity;

class SceneManager
{
public:

	inline static SceneManager& Instance()
	{
		if (instance == nullptr)
		{
			instance = new SceneManager();
		}
		return *instance;
	}

	void Destroy();
	

	void Initialize();

	void Update();

	void AddScene(Scene* scene);

	void RemoveScene(Scene* scene);

	Scene* GetActiveScene() const { return activeScene; }

	void SetActiveScene(Scene* scene) { activeScene = scene; }

	Entity* CreateEntity();

	void RemoveEntity(Entity* entity);

	Entity* FindEntityById(int id);

private:

	std::list<Scene*> scenes;

	Scene* activeScene = nullptr;

	static SceneManager* instance;

	inline SceneManager() = default;
	inline ~SceneManager() = default;
	inline explicit SceneManager(SceneManager const&) = delete;
	inline SceneManager& operator=(SceneManager const&) = delete;
};

#endif // !_SM_H_
