#include "Entity.h"
#include "Component.h"
#include <iostream>

Entity::Entity()
{
	std::cout << "Entity Constructor" << std::endl;
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
	for (Component* c : components)
	{
		c->Destroy();
	}

	std::cout << "Entity Destroy()" << std::endl;
	delete(this);
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

	for (Component* c : components)
	{
		if (c == component)
		{
			components.remove(component);
		}
	}
}




