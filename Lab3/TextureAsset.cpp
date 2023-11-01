#include "TextureAsset.h"
#include <iostream>

TextureAsset::TextureAsset()
{
	std::cout << "Texture Asset Constructor" << std::endl;
}

TextureAsset::~TextureAsset()
{
	std::cout << "Texture Asset Destructor" << std::endl;
}

void TextureAsset::Load()
{
	std::cout << "Texture Asset Load" << std::endl;
}