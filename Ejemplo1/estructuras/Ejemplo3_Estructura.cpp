// ejercicio 3


#include <iostream>

using namespace std;
struct Cliente
{
	char nombre [20];
	int numUnidades;
	float precio;
	char estado;
} cliente0={"Gustavo Contreras",11,10.56,'M'};


int main ()
{
	Cliente cliente1 = {"David Enriquez",20,45.23,'P'};
	Cliente cliente2 = {"Esteban",12,4.23,'A'};
	Cliente cliente3,cliente4;
	Cliente listadoClientes[100];
	cliente4 = cliente3 = cliente2 = cliente1;
	return 0;
}
