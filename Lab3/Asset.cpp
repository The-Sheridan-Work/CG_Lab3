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
