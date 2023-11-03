#pragma once

#ifndef _IM_H_
#define _IM_H_


class InputManager
{
public:

	inline static InputManager& Instance()
	{
		if (instance == nullptr)
		{
			instance = new InputManager();
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

	void Update();



private:

	static InputManager* instance;

	inline InputManager() = default;
	inline ~InputManager() = default;
	inline explicit InputManager(InputManager const&) = delete;
	inline InputManager& operator=(InputManager const&) = delete;

};

#endif // !_IM_H_
