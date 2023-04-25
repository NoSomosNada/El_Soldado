#include "Escopeta.h"
#include <iostream>


Escopeta::Escopeta() {
	this->nombre = "Escopeta";
}

const char* Escopeta::disparar()
{
	cout<< "¡Pááá!...";
	return "¡Pááá!...";
}
