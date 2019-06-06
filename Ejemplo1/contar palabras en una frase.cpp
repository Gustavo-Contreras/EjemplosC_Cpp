//  programa que cuenta las palabras de una cadena dada
#include<iostream>
#define ESPACIO ' '
using namespace std;

int main ()

{
	int contador =0; 
	string cadena = " Escuela politecanica Nacional"; // 3 palabras
	 //char cadena [] = " Escuela politecanica nacional "; // 3 palabras
	int tamanio = cadena.length();
	//int tamanio = zizeof(cadena);
	cout<<tamanio<<endl;
	for (int i= 0;i<tamanio;i++)
	{
		
		if (cadena [i] == ESPACIO && i == 0)
		{
			continue;
		}
		if(
		   cadena [i] == ESPACIO && 
		   cadena [i-1] != ESPACIO
		  )
		
		{
			contador++;
		}
		
	}
	cout<<" el total de palabras encontradas son: "<<++contador;
}
