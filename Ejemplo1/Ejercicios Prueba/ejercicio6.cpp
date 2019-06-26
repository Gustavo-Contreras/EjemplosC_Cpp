/*
Ha sido contratado como desarrollador para crear una aplicaci�n que administra clientes.
El Cliente tiene �nicamente los siguientes campos: c�digo, nombre, saldo.
El arquitecto de software acorde a su dise�o indica que el programa desde la funci�n principal(main) 
debe hacer una llamada a una funci�n para leer 4 clientes desde pantalla.
Una vez que regresa al main, el programa debe hacer una llamada a una segunda funci�n donde realiza los siguientes c�lculos:
si el saldo del cliente es menor a 10.00 se le restar� 1 d�lar, si el saldo es mayor o igual a 10 y menor a 100 se le duplicar� 
el saldo y si es mayor a 100 se le elevar� al cubo su saldo. Finalmente, el programa cuando regrese el control al main, 
llamar� a una tercera funci�n para presentar en pantalla el resumen de la informaci�n de los 4 clientes donde se muestra
ya su saldo actualizado. Esta informaci�n ser� presentada en formato de tabla, teniendo como primera fila la cabecera
donde muestre los campos (c�digo, nombre, saldo) y las siguientes filas mostrar� el contenido de la informaci�n. 
La informaci�n del saldo debe presentarse con 2 decimales y cada columna debe estar separada por 10 espacios,
 Las dos primeras columnas deben estar alineadas a la izquierda y la �ltima a la derecha. 
 La(s) variable(s) que se utilicen deben reservar memoria din�micamente.
 */
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;
struct Cliente
{
	int codigo;
	char nombre [30];
	double saldo ;
	
	
};
void LeerCliente(Cliente miCliente[]);
void Operaciones(Cliente miCliente[]);
void MostrarDatosCliente(Cliente cliente[]);
int main ()
{
	system("color f3");
	Cliente cliente [100];
	LeerCliente(cliente);
	Operaciones(cliente);
	MostrarDatosCliente( cliente);

}

void LeerCliente(Cliente miCliente[])
 {
char limpiarBuffer[4];
 for(int i=0;i<4;i++)
{
	cout<< " Nombre del Cliente: "<<i<<": " ;
	cin.getline(miCliente[i].nombre,30);
	cout<< " Codigo : ";
	cin>>miCliente[i].codigo;
	cout<< " Saldo: ";
	cin>>miCliente[i].saldo;
	cin.getline(limpiarBuffer,4);

}
}
void MostrarDatosCliente(Cliente cliente[])

{
	//Cliente *cliente = new Cliente[100];
	cout<<" Los datos de los  cliente son :"<<endl;	
	for(int i=0;i<4;i++)
	 {
	cout << "Cliente=" << cliente[i].nombre << ", codigo" << cliente[i].codigo << ", Saldo =" << cliente[i].saldo<<endl ;
     }
}
void Operaciones(Cliente miCliente[])
{
	char limpiarBuffer[4];
	for(int i=0;i<4;i++)
	{
		if ((miCliente[i].saldo)<10)
		 	{
		 miCliente[i].saldo=(miCliente[i].saldo)-1;
			}
		if ((miCliente[i].saldo)<100)
			{
		miCliente[i].saldo=(miCliente[i].saldo)*2;
			}
		if ((miCliente[i].saldo)>100)
			{
			miCliente[i].saldo=pow((miCliente[i].saldo),3);
			}
		cout<<" nuevo saldo del cliente "<<i<< " = "<<miCliente[i].saldo<<endl;
	}
	
}

