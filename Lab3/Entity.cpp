#include "Entity.h"
#include "Component.h"
#include <iostream>

Entity::Entity()
{
	std::cout << "Entity Constructor" << std::end;
}

Entity::~Entity()
{
	std::cout << "Entity Destructor" << std::endl;
}

void Entity::Initialize()
{
	std::cout << "Entity Initialize()" << std::endl;
}

void Entity::Update()
{
	std::cout << "Entity Update()" << std::endl;
}

void Entity::Destroy()
{
	std::cout << "Entity Destroy()" << std::endl;
}

void Entity::Load()
{
	std::cout << "Entity Load()" << std::endl;
}

Component* Entity::CreateComponent(std::string CompType)
{
	std::cout << "Entity Create Component " << CompType << std::endl;
	Component* NewComponent = new Component();
	components.push_back(NewComponent);
	return NewComponent;
}

void Entity::RemoveComponent(Component* component)
{
	std::cout << "Entity Remove Component " << component->GetName() << std::endl;

	for (int i = 0; i < components.size(); i++)
	{
		if (components[i] == component)
		{
			components.remove(component);
		}
	}
}




