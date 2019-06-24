// Ejemplo 12

#include <iostream>
#include <stdlib.h>


using namespace std;
struct Cliente 
{
	char nombre [30];
	int unidades;
	double precio;
	char estado;
	
};

Cliente* LeerDatosCliente(Cliente miCliente[]);
void MostrarDatosCliente(Cliente cliente[]);
int main ()
{
	//Cliente cliente [100];
	system("color f3");
	Cliente *cliente = new Cliente[100]; // puntero
	Cliente *cliente2 = LeerDatosCliente(cliente);
	MostrarDatosCliente(cliente2);
	delete[] cliente;
	return 0;
}

// paso de parametros por Valor
 Cliente* LeerDatosCliente(Cliente miCliente[])
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
	cout<< " Estado (M=Moroso, A=Aprobado, P=Pagado) : ";	
	cin>>miCliente[i].estado;
	cin.getline(limpiarBuffer,4);

}
	return miCliente;
}
void MostrarDatosCliente(Cliente cliente[])

{
	//Cliente *cliente = new Cliente[100];
	cout<<" Los datos de los  cliente son :"<<endl;	
	for(int i=0;i<3;i++)
	 {
	cout << "Cliente=" << cliente[i].nombre << ", unidad=" << cliente[i].unidades << ", precio=" << cliente[i].precio << ", estado=" << cliente[i].estado << endl;
    
     }
}

