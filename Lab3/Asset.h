#pragma once

#ifndef _ASS_H_
#define _ASS_H_

#include "Object.h"
class Asset :
    public Object
{

public:

    Asset();

    virtual ~Asset() override;

    virtual void Load() override;
};

#endif // ! _ASS_H_