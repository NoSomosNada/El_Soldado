#pragma once
#include "Arma.h"

class Soldado
{
public:
	Arma* arma;
	Soldado();
	void disparar();
	void recogerArma(Arma* arma);
	void dejarArma();
	~Soldado();
};

