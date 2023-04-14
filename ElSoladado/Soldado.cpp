#include "Soldado.h"
#include <iostream>

Soldado::Soldado()
{
	_arma = nullptr;
}

void Soldado::disparar()
{
	if (tieneArma())
		_arma->disparar();
	else
		cout << "Parece que el soldado no tiene ningun arma en sus manos" << endl;
}

void Soldado::recogerArma(Arma* arma)
{
	if (tieneArma())
		cout << "Parece que el soldado ya esta equipado con otra arma" << endl;
	else 
		_arma = arma;
		cout << "El solado ha recogido un: " << _arma->nombre << endl;
	
}

void Soldado::dejarArma()
{
	_arma = nullptr;
	cout<< "El soldado ha dejado su arma "<< endl;
}

bool Soldado::tieneArma() {
	return _arma != nullptr;
}

void Soldado::verArma() {
	if (tieneArma())
		cout << "El solado tiene un: " << _arma->nombre << endl;
	else
		cout << "Parece que el soldado no tiene ningun arma een sus manos";
}

Soldado::~Soldado()
{
}
