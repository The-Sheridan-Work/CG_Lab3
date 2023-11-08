#include "Time.h"
#include <iostream>

Time* Time::instance = nullptr;

void Time::Initialize()
{
	std::cout << "Time Initialize()" << std::endl;
}

void Time::Update()
{
	std::cout << "Time Update()" << std::endl;
}
