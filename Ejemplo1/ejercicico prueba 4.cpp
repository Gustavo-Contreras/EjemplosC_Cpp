/*Escriba un programa en C o C++ que reciba tres enteros del teclado e imprima la suma, promedio, producto, menor y mayor de 
esos números. El programa debe tener un menú para realizar cada acción. 
Con la tecla S ó s debe finalizar. Use funciones y switch-case.

*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;
int main ()
{	

	char S;
	int x;
	char s;
    do 
	{
	system("cls");
	system("color f3");
	int a;
	int b;
	int c;
	int x;
	char s;
	char S;
	cout <<" ****OPCIONES**** "<<endl;
	cout <<" 1) suma de los numeros "<<endl;
	cout <<" 2) promedio de los numeros "<<endl;
	cout <<" 3) producto de los numeros "<<endl;
	cout <<" 4) numero mayor "<<endl;
	cout <<" 5) numero menor"<<endl;
	cout <<" PRESIONES S  o s para salir "<<endl;
	cout<< " Ingrese por favor tres numero enteros "<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	cout<<" ingrese la opcion deseada "<<endl;
	cin>>x;
	switch(x) 
	{
		case 1 : x= a+b+c;
		cout<<" la suma de los tres numeros es: "<<x;
		break;
		case 2 : x = (a+b+c)/3;
		cout<<" el promedio de los tres numero es : "<<x;
		break;
		case 3: x = a*b*c;
		cout <<" el producto de los tres numero es: "<<x;
		break;
		case 4:  if ((a==b)&&(a==c)&&(c==a))
		cout <<" los tres numero son iguales  ; ";
		else if ((b>c)&&(b>a) )
		cout<<" el mayor de los tres numero es : "<<b;
		else if ((a>b)&&(a>c))
		cout<<" el mayor de los tres numero es : "<<a;
		else 
		{ 
		cout<< "el  mayor de los tres numero es"<<c;
		}
		break;
		case 5: if ((a==b)&&(a==c)&&(c==a))
		cout <<" los tres numero son iguales  ; ";
		else if ((b<c)&&(b<a) )
		cout<<" el menor  de los tres numero es : " <<b;
		else if ((a<b)&&(a<c))
		cout<<" el mayor de los tres numero es :  " <<a;
		else 
		{ 
		cout<< "el  menor de los tres numero es " <<c;
		}
		break;
		
		
		
	}
	getch();	
				
		
	  
	} 
	
	while(x!='S'|| x != 's');
	
  
}
	

 	
			
	
	
	

