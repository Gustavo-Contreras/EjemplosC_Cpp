// ejemplo paso de parametros por referencia en arreglos

#include <iostream>
#define  TAM_MAX 4
using namespace std;
void ImprimirValores (int valores[],int);

int main ()
{
	 
	 int valores [TAM_MAX] = {1,2,3,4};
	 
	 ImprimirValores (valores,TAM_MAX);
	return 0;
}


void ImprimirValores (int valores[], int tamanio)

{
	//cout<<sizeof(valores)<<endl;
	for(int i=0;i<sizeof(valores)-1;i++)
	{
		cout<<valores[i];
	}
	
}
