#include "Object.h"
#include <iostream>

Object::Object()
{
	std::cout << "Object Constructor" << std::endl;
}

Object::~Object()
{
	std::cout << "Object Destructor" << std::endl;
}

void Object::Load()
{
	std::cout << "Object Load" << std::endl;
}
