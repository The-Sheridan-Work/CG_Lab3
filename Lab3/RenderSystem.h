#pragma once

#ifndef _RS_H_
#define _RS_H_


#include <string>

class RenderSystem
{
	friend class Engine;

private:

	std::string name;
	int width;
	int height;
	bool bFullscreen;

	static RenderSystem* instance;

	inline RenderSystem() = default;
	inline ~RenderSystem() = default;
	inline explicit RenderSystem(RenderSystem const&) = delete;
	inline RenderSystem& operator=(RenderSystem const&) = delete;

public:

	inline static RenderSystem& Instance()
	{
		if (instance == nullptr)
		{
			instance = new RenderSystem();
		}
		return *instance;
	}

	inline void Destroy()
	{
		if (instance != nullptr)
		{
			delete instance;
			instance = nullptr;
		}
	}

	void Initialize();

	void Load();

	void Update();
};


#endif // !_RS_H_