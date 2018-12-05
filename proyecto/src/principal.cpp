/*
 * principal.cpp
 *
 *  Created on: 4 dic. 2018
 *      Author: Francesco V
 */

#include "funciones.h"

int main()
{
	int Opcion = 0;

	do
	{
		// Mostrar Menu
		Menu();
		// Leer Opci�n
		cin >> Opcion;

		// Seg�n la opci�n digitada
		switch(Opcion)
		{
			case 1: IngresarDatosPersonales(); 		// Solicitar los datos del cliente
			break;
			case 2: GenerarListaProductos(); 		// Generar la lista de productos con su respectivo precio
			break;
			case 3: MostrarProductosStock();		// Mostrar el c�digo y stock de todos los productos
			break;
			case 4: MostrarProductosDescuento();	// Mostrar el c�digo, precio y descuento de los productos que tengan el mismo
			break;
			case 5: ElegirProducto();				// Mostrar el c�digo, precio y descuento de los productos que tengan el mismo
			break;
			case 6: ComprarAhora();					// Comprar los productos que est�n seleccionados
			break;
			case 7: MostrarFactura();				// Mostrar factura con los productos que se vendieron
			break;
		}
	}
	while (Opcion!=8);
	cout<<"Gracias por usar La tienda Virtual :D"<<endl;
	return 0;
}


