#pragma once
#include "Arma.h"
class Revolver :
    public Arma
{
        Revolver();
        const char* disparar() override;
};

