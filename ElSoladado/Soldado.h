#pragma once
#include "Arma.h"

class Soldado
{
public:
	Arma* _arma;
	Soldado();
	void disparar();
	void recogerArma(Arma* arma);
	void dejarArma();
	bool tieneArma();
	void verArma();
	~Soldado();
};

