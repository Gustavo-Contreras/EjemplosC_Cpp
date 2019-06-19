// Ejemplo 9

#include <iostream>


using namespace std;

struct Cliente 
{
	char nombre [30];
	int unidades;
	double precio;
	char estado;
	
};
// paso de parametros por Valor
/*void ProcesarCliente(Cliente miCliente)
{
	cout<< " Nombre del Cliente: ";
	cin.getline(miCliente.nombre,30);
	cout<< " Unidades : ";
	cin>>miCliente.unidades;
	cout<< " Precio : ";
	cin>>miCliente.precio;
	cout<< " Estado : ";	
	cin>>miCliente.estado;
}
*/

// paso de parametros por Referencia
void ProcesarCliente(Cliente &miCliente)
{
	cout<< " Nombre del Cliente: ";
	cin.getline(miCliente.nombre,30);
	cout<< " Unidades : ";
	cin>>miCliente.unidades;
	cout<< " Precio : ";
	cin>>miCliente.precio;
	cout<< " Estado : ";	
	cin>>miCliente.estado;
}
int main ()
{
	Cliente cliente;
	ProcesarCliente(cliente);
	cout<<" Los datos del cliente son :"<<cliente.nombre<<", "<<cliente.unidades<<", "<<cliente.precio<<", "<<cliente.estado<<endl; 
	return 0;
}
