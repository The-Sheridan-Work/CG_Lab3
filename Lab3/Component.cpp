#include "Component.h"
#include <iostream>

Component::Component()
{
	std::cout << "Component Constructor" << GetName() << std::endl;
}

Component::~Component()
{
	std::cout << "Component Destructor" << GetName() << std::endl;
}

void Component::Initialize()
{
	std::cout << "Component Initialize()" << GetName() << std::endl;
}

void Component::Destroy()
{
	std::cout << "Component Destroy()" << GetName() << std::endl;
}

void Component::Update()
{
	std::cout << "Component Update()" << GetName() << std::endl;
}

void Component::Load()
{
	std::cout << "Component Load()" << GetName() << std::endl;
}
