#include "Asset.h"
#include <iostream>

Asset::Asset()
{
	std::cout << "Asset Constructor" << std::endl;
}

Asset::~Asset()
{
	std::cout << "Asset Destructor" << std::endl;
}

void Asset::Load()
{
	std::cout << "Asset Load" << std::endl;
}

void Asset::Initialize()
{
	std::cout << "Asset Initialize()" << std::endl;
}

void Asset::Destroy()
{
	std::cout << "Asset Destroy" << std::endl;
}
