#pragma once

#ifndef _COMP_H_
#define _COMP_H_


#include "Object.h"
class Component :
    public Object
{
public:

    Component();

    virtual ~Component();

    virtual void Initialize() override;

    virtual void Destroy() override;

    virtual void Update();

    virtual void Load() override;
};

#endif // !_COMP_H_
