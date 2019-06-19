// ejecicio 7

#include <iostream>
#include <string.h>
#include <cstdlib>
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
	Cliente cliente3;
	Cliente listadoClientes[100];
	cliente3 = cliente2 = cliente1;
	cout<<" lo valores del cliente 0 son: "<<cliente0.nombre<<", "<<cliente0.numUnidades<<", "<<cliente0.precio<<", "<<cliente0.estado<<endl; 
	cout<<" lo valores del cliente 1 son: "<<cliente1.nombre<<", "<<cliente1.numUnidades<<", "<<cliente1.precio<<", "<<cliente1.estado<<endl; 
	cout<<" lo valores del cliente 2 son: "<<cliente2.nombre<<", "<<cliente2.numUnidades<<", "<<cliente2.precio<<", "<<cliente2.estado<<endl; 
	int unidades = cliente1.numUnidades;
	strcpy(cliente3.nombre,"Gladis Ojeda");
	cliente3.numUnidades = 15;
	cliente3.precio = 60.78;
	cliente3.estado = 'P';
	cout<<" lo valores del cliente 3 son: "<<cliente3.nombre<<", "<<cliente3.numUnidades<<", "<<cliente3.precio<<", "<<cliente3.estado<<endl;
	//asiganacion con punteros y malloc
	Cliente *cliente4; //Cliente *cliente4=(Cliente*)malloc(sizeof(Cliente));
	cliente4 = (Cliente*)malloc(sizeof(Cliente));
	strcpy(cliente4->nombre,"Anita Lucia");//para copia de cadenas
	cliente4->numUnidades=10;
	cliente4->precio = 14.56;
	cliente4->estado = 'P';//estado 
	cout<<" lo valores del cliente 4 son: "<<cliente4->nombre<<", "<<cliente4->numUnidades<<", "<<cliente4->precio<<", "<<cliente4->estado<<endl;
	free(cliente4);
	//asignacion con punteros y New( lenguaje c++)
	Cliente *cliente5 = new Cliente;
	strcpy(cliente5->nombre,"Salome Polanco");//para copia de cadenas
	cliente5->numUnidades=12;
	cliente5->precio = 15.56;
	cliente5->estado = 'M';
	cout<<" lo valores del cliente 5 son: "<<cliente5->nombre<<", "<<cliente5->numUnidades<<", "<<cliente5->precio<<", "<<cliente5->estado<<endl;
	delete cliente5;
	Cliente cliente6;
	cout<<"cliente : ";
	cin.getline(cliente6.nombre,20);//getline lee retorno de carro no leido en cin
	cout<<" unida : ";
	cin>>cliente6.numUnidades;
	cout<<" Precio : ";
	cin>>cliente6.precio;
	cout<<" Estado : ";
	cin>>cliente6.estado;
	cout<<" los datos del cliente son : "<<cliente6.nombre<<", "<<cliente6.numUnidades<<", "<<cliente6.precio<<", "<<cliente6.estado<<endl;
		system("pause");
	
	return 0;
}
