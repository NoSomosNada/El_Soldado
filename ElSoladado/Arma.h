#pragma once
#include <string>
using namespace std;

class Arma
{
	friend class Escopeta;

	
public:
	const char* nombre;
	
	Arma();

	virtual const char* disparar() = 0;
	
	~Arma();
};

