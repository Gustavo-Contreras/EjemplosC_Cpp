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
 void ProcesarCliente(Cliente miCliente[])
 {
char limpiarBuffer[4];
 for(int i=0;i<3;i++)
{
	cout<< " Nombre del Cliente: "<<i<<": " ;
	cin.getline(miCliente[i].nombre,30);
	cout<< " Unidades : ";
	cin>>miCliente[i].unidades;
	cout<< " Precio : ";
	cin>>miCliente[i].precio;
	cout<< " Estado : ";	
	cin>>miCliente[i].estado;
	cin.getline(limpiarBuffer,4);

}
}
int main ()
{
	Cliente cliente [100];
	ProcesarCliente(cliente);
	 for(int i=0;i<3;i++)
	 {
	 
	cout<<" Los datos de los  cliente son :"<<cliente[i].nombre<<", "<<cliente[i].unidades<<", "<<cliente[i].precio<<", "<<cliente[i].estado<<endl; 
     } 
	return 0;
}
