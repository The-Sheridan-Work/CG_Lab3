#pragma once
#ifndef _AM_H_
#define _AM_H_

#include <list>

class Asset;

class AssetManager
{
public:

	inline static AssetManager& Instance()
	{
		if (instance == nullptr)
		{
			instance = new AssetManager();
		}
		return *instance;
	}

	inline void Destroy()
	{
		if (instance != nullptr)
		{
			delete instance;
			instance = nullptr;
		}
	}

	void Initialize();

	void Update();

	void AddAsset(Asset* newAsset);

	void RemoveAsset(Asset* asset);

private:

	std::list<Asset*> assets;

	static AssetManager* instance;

	inline AssetManager() = default;
	inline ~AssetManager() = default;
	inline explicit AssetManager(AssetManager const&) = delete;
	inline AssetManager& operator=(AssetManager const&) = delete;
};

#endif // !_AM_H_
