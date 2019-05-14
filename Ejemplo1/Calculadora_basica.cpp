/* 
Crear un algoritmo que sea una calculadora básica con menú que haga las operaciones 
de suma, resta, multiplicación y división (use switch y funciones) de 2 números. Al ingresar la letra F finaliza el programa.

*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main ()
{
	float A;
	float B;
	int C;
	do {

	system("color f3");
	
	system("cls");
	
		
	cout <<"\n*****Calculadora Basica****** "<<endl;
	cout<< "\n******************************* "<<endl;
	cout<< "\nINGRESE UNA OPCION "<<endl;
	cout <<"\n1) suma "<<endl;
	cout <<" 2) resta "<<endl;
	cout <<" 3) multiplicacion"<<endl;
	cout <<" 4) division "<<endl;
	cout <<" 5) para finalizar "<<endl;
	cin>>C ;
	

	cout <<" escriba el primer numero  "<<endl;
	cin>> A;
	cout <<" escriba el segundo numero  "<<endl;
	cin>> B;
	switch (C)
	{
		case 1: C = A+B;
		break;
		case 2: C = A-B;
		break;
 		case 3: C = A*B;
		break;
		case 4: C = A/B;
		break;
		
	default:  cout<<" no ha elegido una opcion correcta";
	}
	cout<< "la respuesta de la operacion elegida es : "<<C<< endl;
	system("pause");
	 cout<<"\n"<<C<<endl;
} while(C!=5);

	
	return 0;
	

	

	
}

