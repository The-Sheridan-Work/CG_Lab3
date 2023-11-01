#pragma once

#ifndef _T_ASS_
#define _T_ASS_

#include "Asset.h"

class TextureAsset :
    public Asset
{
public:

    TextureAsset();

    ~TextureAsset() override;

    void Load() override;
};

#endif // !_T_ASS_
