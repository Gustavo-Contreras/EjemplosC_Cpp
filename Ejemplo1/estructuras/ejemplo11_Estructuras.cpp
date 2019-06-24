// Ejemplo 11

#include <iostream>


using namespace std;
struct Cliente 
{
	char nombre [30];
	int unidades;
	double precio;
	char estado;
	
};

void LeerDatosCliente(Cliente miCliente[]);
void MostrarDatosCliente(Cliente cliente[]);
int main ()
{
	//Cliente cliente [100];
	Cliente *cliente = new Cliente[100]; // puntero
	LeerDatosCliente(cliente);
	MostrarDatosCliente(cliente);
	delete[] cliente;
	return 0;
}

// paso de parametros por Valor
 void LeerDatosCliente(Cliente miCliente[])
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
void MostrarDatosCliente(Cliente cliente[])

{
	//Cliente *cliente = new Cliente[100];	
	for(int i=0;i<3;i++)
	 {
	 	cout<<" Los datos de los  cliente son :"<<endl;
	    cout<<cliente[i].nombre<<", "<<cliente[i].unidades<<", "<<cliente[i].precio<<", "<<cliente[i].estado<<endl; 
     } 
}

