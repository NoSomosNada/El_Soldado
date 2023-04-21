
#pragma once
#include <string>
//#include "Escopeta.h"
//#include "Rifle.h"
//#include "Revolver.h"

using namespace std;


class Arma
{
	friend class Escopeta;
	friend class Revolver;
	friend class Rifle;

public:
	Arma();
	const char* nombre;
	virtual const char* disparar() = 0;
	virtual ~Arma() = default;
};

