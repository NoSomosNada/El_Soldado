#include "Revolver.h"
#include <iostream>

Revolver::Revolver() {
	this->nombre = "Revolver";
}

const char* Revolver::disparar()
{
	cout << "Púm...";
	return "Púm...";
}
