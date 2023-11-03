#include "Sprite.h"
#include <iostream>

Sprite::Sprite()
{
	std::cout << "Sprite Constructor" << GetName() << std::endl;
}

Sprite::~Sprite()
{
	std::cout << "Sprite Destructor" << GetName() << std::endl;
}

void Sprite::Load()
{
	std::cout << "Sprite Load()" << GetName() << std::endl;
}

void Sprite::Update()
{
	std::cout << "Sprite Update()" << GetName() << std::endl;
}

void Sprite::Destroy()
{
	std::cout << "Sprite Destroy()" << GetName() << std::endl;
}

void Sprite::Render()
{
	std::cout << "Sprite Render()" << GetName() << std::endl;
}

