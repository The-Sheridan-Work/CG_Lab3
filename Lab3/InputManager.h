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

	void Destroy();
	

	void Initialize();

	void Update();



private:

	static InputManager* instance;

	InputManager();
	~InputManager();
	inline explicit InputManager(InputManager const&) = delete;
	inline InputManager& operator=(InputManager const&) = delete;

};

#endif // !_IM_H_
