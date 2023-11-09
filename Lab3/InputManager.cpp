#include "InputManager.h"
#include <iostream>

InputManager* InputManager::instance = nullptr;

InputManager::InputManager()
{
	std::cout << "InputManager Constructor" << std::endl;
}

InputManager::~InputManager()
{
	std::cout << "InputManager Destructor" << std::endl;
}

void InputManager::Initialize()
{
	std::cout << "InputManager Initialize()" << std::endl;
}

void InputManager::Update()
{
	std::cout << "InputManager Update()" << std::endl;
}

void InputManager::Destroy()
{
	if (instance != nullptr)
	{
		delete instance;
		instance = nullptr;
	}
}
