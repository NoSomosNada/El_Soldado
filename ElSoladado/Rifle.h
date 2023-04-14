#pragma once
#include "Arma.h"
class Rifle :
    public Arma
{
    Rifle();
    const char* disparar() override;
};

