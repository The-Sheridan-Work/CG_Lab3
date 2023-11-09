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

	class SDL_Window* window = nullptr;
	class SDL_Renderer* renderer = nullptr;

	static RenderSystem* instance;

	RenderSystem();
	~RenderSystem();
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

	void Destroy();
	
	void Initialize();

	void Load();

	void Update();
};


#endif // !_RS_H_