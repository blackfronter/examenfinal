/*
 * principal.cpp
 *
 *  Created on: 10 dic. 2018
 *      Author: Francesco V
 */

#include "funciones.h"

int main(){
	int opcion=0;
	do {
		menu();
		cin >> opcion;

		switch(opcion){
		case 1: ingresar();
			break;
		case 2: generar();
		    break;
		case 3: mostrar();
			break;
		case 4: buscar();
			break;
		case 5: modificar();
			break;
		case 6: eliminar();
			break;

		}
	}
	while(opcion!=7);


		return 0;
}


