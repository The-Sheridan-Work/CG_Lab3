#include "InputManager.h"
#include <iostream>

InputManager* InputManager::instance = nullptr;

void InputManager::Initialize()
{
	std::cout << "InputManager Initialize()" << std::endl;
}

void InputManager::Update()
{
	std::cout << "InputManager Update()" << std::endl;
}


