#pragma once

#ifndef _SP_H_
#define _SP_H_


#include "Component.h"
#include "IRenderable.h"
class Sprite :
    public Component, public IRenderable
{
public:
    Sprite();

    ~Sprite();

    void Load() override;

    void Update() override;

    void Destroy() override;

    void Render() override;
};

#endif // !_SP_H_
