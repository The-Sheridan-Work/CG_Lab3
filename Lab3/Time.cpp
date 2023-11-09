#include "Time.h"
#include <iostream>

Time* Time::instance = nullptr;

Time::Time()
{
	std::cout << "Time Constructor" << std::endl;
}

Time::~Time()
{
	std::cout << "Time Destructor" << std::endl;
}

void Time::Initialize()
{
	std::cout << "Time Initialize()" << std::endl;
}

void Time::Update()
{
	std::cout << "Time Update()" << std::endl;
}
