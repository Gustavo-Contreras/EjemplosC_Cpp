//  programa que cuenta las vocales de una cadena dada

#include<iostream>
using namespace std;

int main ()

{
	int contador = 0; 
	string cadena= " Escuela Politecnia Nacional ";// 13 vocales
	int tamanio = cadena.length();
	
	cout<<tamanio<<endl;
	for (int i = tamanio ; i>=0; i--)
	{
			cout<<cadena[i]; 
	}
}
