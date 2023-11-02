#pragma once

#ifndef _SP_H_
#define _SP_H_


#include "Component.h"
class Sprite :
    public Component
{
public:
    Sprite();

    ~Sprite();

    void Load() override;

    void Update() override;

    void Destroy() override;

    //Render
};

#endif // !_SP_H_
