// Ejemplo 9A

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
 Cliente ProcesarCliente(Cliente miCliente)
{
	cout<< " Nombre del Cliente: ";
	cin.getline(miCliente.nombre,30);
	cout<< " Unidades : ";
	cin>>miCliente.unidades;
	cout<< " Precio : ";
	cin>>miCliente.precio;
	cout<< " Estado : ";	
	cin>>miCliente.estado;
	return miCliente;
}
int main ()
{
	Cliente cliente;
	Cliente respuestaCliente = ProcesarCliente(cliente);
	cout<<" Los datos del cliente son :"<<respuestaCliente.nombre<<", "<<respuestaCliente.unidades<<", "<<respuestaCliente.precio<<", "<<respuestaCliente.estado<<endl; 
	return 0;
}
