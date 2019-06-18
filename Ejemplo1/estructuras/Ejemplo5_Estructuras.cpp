// ejecicio 5

#include <iostream>
#include <string.h>
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
	cout<<" lo valores del cliente 0 son: "<<cliente0.nombre<<", "<<cliente0.numUnidades<<", "<<cliente0.precio<<", "<<cliente0.estado<<endl; 
	cout<<" lo valores del cliente 1 son: "<<cliente1.nombre<<", "<<cliente1.numUnidades<<", "<<cliente1.precio<<", "<<cliente1.estado<<endl; 
	cout<<" lo valores del cliente 2 son: "<<cliente2.nombre<<", "<<cliente2.numUnidades<<", "<<cliente2.precio<<", "<<cliente2.estado<<endl; 
	int unidades = cliente1.numUnidades;
	strcpy(cliente3.nombre,"Gladis Ojeda");
	cliente3.numUnidades = 15;
	cliente3.precio = 60.78;
	cliente3.estado = 'P';
	cout<<" lo valores del cliente 3 son: "<<cliente3.nombre<<", "<<cliente3.numUnidades<<", "<<cliente3.precio<<", "<<cliente3.estado<<endl; 
	system("pause");
	return 0;
}
