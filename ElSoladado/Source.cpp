#include <iostream>
#include "Soldado.h"
#include "Arma.h"

using namespace std;

int main() {
	int opcion;
	do {
		Soldado soldado;
		cout << "-== Bienvenido al campo de entrenamiento, Soldado ==-" << endl <<endl << endl;
		cout << "¿Qué desea hacer?" << endl << endl;
		cout << "1- Recoger arma"<<endl;
		cout << "2- Dejar arma" << endl;
		cout << "3- Ver arma en uso" << endl;
		cout << "X- Salir" << endl;
		cin >> opcion;
		switch (opcion) {
		case 1:
			if (!soldado.tieneArma()) {
				system("CLS");
				cout << "Por favor recoja el arma que desee utilizar:" << endl << endl;
				cout << "1- Revolver" << endl;
				cout << "2- Rifle" << endl;
				cout << "3- Escopeta" << endl;
				cout << "X- Volver atrás" << endl;
			}
			break;
		case 2:
			soldado.dejarArma();
			break;
		case 3:
			soldado.dejarArma();
			break;
		default:
			break;
		}
		 
	} while (opcion >=1 && opcion <= 3);

	return 0;
}