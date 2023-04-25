#include "Rifle.h"
#include <iostream>


Rifle::Rifle(){
	this->nombre = "Rifle";
}

const char* Rifle::disparar()
{
	cout << "Púm púm púm!...";
	return "Púm púm púm!...";
}
