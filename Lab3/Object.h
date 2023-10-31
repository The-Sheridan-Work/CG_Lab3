#pragma once

#ifndef  _OBJ_H_
#define _OBJ_H_

#include <string>

class Object
{
private:

	bool bInitialized = false;
	std::string name = "";
	int id = 0;

protected:

	Object() { }

	virtual ~Object() { }

	virtual void Initialize() = 0;

	virtual void Destroy() = 0;

public:

	virtual void Load();

	bool IsInitialized() const { return bInitialized; }

	std::string GetName() const { return name; }

	int GetId() const { return id; }

};

#endif // ! _OBJ_H_
