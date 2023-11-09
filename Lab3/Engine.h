#pragma once

#ifndef  _ENG_H_
#define _ENG_H_


class Engine
{
public:

	inline static Engine& Instance() 
	{
		if (instance == nullptr)
		{
			instance = new Engine();
		}
		return *instance;
	}

	void Destroy();
	

	void Initialize();

	void Load();
	
	void Update();



private:

	static Engine* instance;

	inline Engine() = default;
	inline ~Engine() = default;
	inline explicit Engine(Engine const&) = delete;
	inline Engine& operator=(Engine const&) = delete;
};

#endif // ! _ENG_H_
