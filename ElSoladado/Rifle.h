#pragma once
#include "Arma.h"


class Rifle :
    public Arma
{
public:
    Rifle();
    const char* disparar();
};

