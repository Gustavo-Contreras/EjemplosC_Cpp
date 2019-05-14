#include <iostream>
using namespace std;
int main ()
{
	int valor, a,b, c;
	cout<<" CALCULADORA BASICA GUSTAVO"<<endl;
	cout<<" OPCION 1 SUMA"<<endl;
	cout<<" OPCION 2 RESTA"<<endl;
	cout<<" OPCION 3 multiplicacion"<<endl;
	cout<<" ESCOJA CUALQUIERA DE LAS TRES OPCIONES"<<endl;
	
	cin>>valor; 
	switch(valor)
	{ 	case 1:
		cout<<"INGRESE DOS VALORES"<<endl;
		cin>>a>>b;
		c=a+b;
		cout<<"la respuesta de la suma e"<<c;
		break;
		
	case 2:
		cout<<"INGRESE DOS VALORES"<<endl;
		c= a-b;
		cin>>a>>b;
		cout<<"la respuesta de la resta es "<<c;
		break;
		
	case 3:
		cout<<"INGRESE DOS VALORES"<<endl;
		c= a*b;
		cin>>a>>b;
		cout<<"la respuesta de la multiplicacion es "<<c;
		break;
		
	   default:
	   	break;
	}
	return 0;
}
