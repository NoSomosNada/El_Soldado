#pragma once
#include "Arma.h"
class Escopeta :
    public Arma
{
    Escopeta();
    const char* disparar() override;
};

