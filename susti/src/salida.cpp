/*
 * salida.cpp
 *
 *  Created on: 10 dic. 2018
 *      Author: Francesco V
 */

#include "funciones.h"

string datos[100][3];
double notas[6][5];
int n=0;
float pf=0;


void menu(){
	cout << "MENU DE OPCIONES" << endl;
	cout << "-------------------" << endl;
	cout << "1. INGRESAR" << endl;
	cout << "2. GENERAR" << endl;
	cout << "3. MOSTRAR" << endl;
	cout << "4. BUSCAR" << endl;
	cout << "5. MODIFICAR" << endl;
	cout << "6. ELIMINAR" << endl;
	cout << "7. SALIR" << endl;
	cout << endl;
	cout << "Ingrese Opcion:";
}

void generar(){
	datos[n][0]= "3421573";
	datos[n][1]= "Oscar";
	datos[n][2]= "Huaman";
	notas[n][0]= 16;
	notas[n][1]= 7;
	notas[n][2]= 13;
	notas[n][3]= 11;
	pf=(notas[n][0]*0.15)+(notas[n][1]*0.30)+(notas[n][2]*0.15)+(notas[n][3]*0.40);
	notas[n][4]= pf;
	n++;

	datos[n][0]= "3421574";
	datos[n][1]= "Luis";
	datos[n][2]= "Rivas";
	notas[n][0]= 13;
	notas[n][1]= 11;
	notas[n][2]= 10;
	notas[n][3]= 10;
	pf=(notas[n][0]*0.15)+(notas[n][1]*0.30)+(notas[n][2]*0.15)+(notas[n][3]*0.40);
		notas[n][4]= pf;
	n++;

	datos[n][0]= "3421575";
	datos[n][1]= "Jhon";
	datos[n][2]= "Torres";
	notas[n][0]= 7;
	notas[n][1]= 10;
	notas[n][2]= 17;
	notas[n][3]= 13;
	pf=(notas[n][0]*0.15)+(notas[n][1]*0.30)+(notas[n][2]*0.15)+(notas[n][3]*0.40);
		notas[n][4]= pf;
	n++;

	datos[n][0]= "3421576";
	datos[n][1]= "Jose";
	datos[n][2]= "Ramos";
	notas[n][0]= 9;
	notas[n][1]= 7;
	notas[n][2]= 15;
	notas[n][3]= 12;
	pf=(notas[n][0]*0.15)+(notas[n][1]*0.30)+(notas[n][2]*0.15)+(notas[n][3]*0.40);
		notas[n][4]= pf;
	n++;

	datos[n][0]= "3421577";
	datos[n][1]= "Rosa";
	datos[n][2]= "Silva";
	notas[n][0]= 17;
	notas[n][1]= 14;
	notas[n][2]= 13;
	notas[n][3]= 16;
	pf=(notas[n][0]*0.15)+(notas[n][1]*0.30)+(notas[n][2]*0.15)+(notas[n][3]*0.40);
		notas[n][4]= pf;

	n=5;
	cout << "DATOS INGRESADOS" << endl;
}
void ingresar(){
	cout << "Ingrese datos y notas del estudiante:" << endl;
	cout << "Codigo: "; cin >> datos[n][0];
	cout << "Nombre: "; cin >> datos[n][1];
	cout << "Apellido:  "; cin >> datos[n][2];
	cout << "T1: "; cin >> notas[n][0];
	cout << "EP: "; cin >> notas[n][1];
	cout << "T2: "; cin >> notas[n][2];
	cout << "EF: "; cin >> notas[n][3];
	pf=(notas[n][0]*0.15)+(notas[n][1]*0.30)+(notas[n][2]*0.15)+(notas[n][3]*0.40);
		notas[n][4]= pf;
	n++;
}

void mostrar(){
	if(n>0){
	cout << "CODIGO\tNOMBRE\tAPELL\tT1\tEP\tT2\tEF\tPF\n";
	for(int i=0; i<n; i++){
			cout << datos[i][0] << "\t";
			cout << datos[i][1] << "\t";
			cout << datos[i][2] << "\t";
			cout << notas[i][0] << "\t";
			cout << notas[i][1] << "\t";
			cout << notas[i][2] << "\t";
			cout << notas[i][3] << "\t";
			cout << notas[i][4] << "\n";
		}
	}
	else
		cout << "No existen registros" << endl;
}
void buscar(){
	char opcion=0;
	string codigo, nombre, apellido;
	cout <<  "\t\ta. Estudiantes Aprobados" << endl;
	cout <<  "\t\tb. Estudiantes Desaprobados" << endl;

	cout << "\t\tSeleccione opcion: "; cin >> opcion;

	cout << "CODIGO\tNOMBRE\tAPELL\tT1\tEP\tT2\tEF\tPF\n";

	for(int i=0; i<n; i++){

		switch(opcion){
		case 'a':
			if(notas[i][4]>=11.5){
	cout << datos[i][0] << "\t";
	cout << datos[i][1] << "\t";
	cout << datos[i][2] << "\t";
	cout << notas[i][0] << "\t";
	cout << notas[i][1] << "\t";
	cout << notas[i][2] << "\t";
	cout << notas[i][3] << "\t";
	cout << notas[i][4] << "\n";
	}
			break;
		case 'b':
			if(notas[i][4]<11.5){
			cout << datos[i][0] << "\t";
			cout << datos[i][1] << "\t";
			cout << datos[i][2] << "\t";
			cout << notas[i][0] << "\t";
			cout << notas[i][1] << "\t";
			cout << notas[i][2] << "\t";
			cout << notas[i][3] << "\t";
			cout << notas[i][4] << "\n";
			}
			break;
}
	}
}
void modificar(){
	int f=0, c=0, o=0;
	cout << "Registros a modificar [1.Datos][2.Notas]:"; cin >> o;

	if(o==1){
		cout <<"Ingrese fila a modificar:";cin>>f;
	if(f>=n)
		cout << "No existe otros datos" << endl;
	else{
		cout << "Ingrese columna a modificar:"; cin >> c;
		if(c>2)
		cout << "Columna de datos incorrecta" << endl;
		else
		cout << "Ingrese valor a modificar:"; cin >> datos[f][c];
}
	}
	if(o==2){
		cout <<"Ingrese fila a modificar:";cin>>f;
	if(f>=n)
		cout << "No existe otras notas" << endl;
		else{
			cout << "Ingrese columna a modificar:"; cin >> c;
			if(c>4)
			cout << "Columna de datos incorrecta" << endl;
			else
			cout << "Ingrese valor a modificar:"; cin >> notas[f][c];

           mostrar();

}
}
	if(o<0 || o>2)
		cout << "Opcion incorrecta" << endl;
}
void eliminar(){
	int f=0;
	cout << "Ingrese fila a eliminar: "; cin >> f;
	if (f>=n)
		cout << "Fila incorrecta" << endl;
	else{
		for(int i=f; i<n; i++){
			datos[i-1][0]=datos[1][0];
			datos[i-1][1]=datos[1][1];
			datos[i-1][2]=datos[1][2];
			notas[i-1][0]=notas[1][0];
			notas[i-1][1]=notas[1][1];
			notas[i-1][2]=notas[1][2];
			notas[i-1][3]=notas[1][3];
			notas[i-1][4]=notas[1][4];
		}
		n--;
	}
}

