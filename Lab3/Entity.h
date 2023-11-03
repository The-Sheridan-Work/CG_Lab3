#pragma once
#ifndef _ENTITY_H_
#define _ENTITY_H_

#include "Object.h"
#include <list>
#include <string>

class Component;

class Entity :
    public Object
{
    friend class Scene;

private:

    std::list<Component*> components;

protected:

    Entity();

    virtual ~Entity();

    virtual void Initialize() override;

    virtual void Update() override;

    virtual void Destroy() override;

public:

    virtual void Load() override;

    Component* CreateComponent(std::string CompType);

    void RemoveComponent(Component* component);
};


#endif // !_ENTITY_H_