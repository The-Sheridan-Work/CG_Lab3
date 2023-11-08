#include "AssetManager.h"
#include <iostream>

void AssetManager::Initialize()
{
	std::cout << "AssetManager Initialize()" << std::endl;
}

void AssetManager::Update()
{
	std::cout << "AssetManager Update()" << std::endl;
}

void AssetManager::AddAsset(Asset* newAsset)
{
	assets.push_back(newAsset);
}

void AssetManager::RemoveAsset(Asset* asset)
{
	for (Asset* a : assets)
	{
		if (a == asset)
			assets.remove(asset);
	}
}

