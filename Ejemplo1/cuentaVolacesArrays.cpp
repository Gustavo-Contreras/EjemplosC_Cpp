//  programa que cuenta las vocales de una cadena dada

#include<iostream>
using namespace std;

int main ()

{
	int contador = 0; 
	string cadena= " Escuela Politecnia Nacional ";// 13 vocales
	
	for (int i=0; i<28; i++)
	{
			cout<<cadena[i]<<endl; 
			
				/*if (cadena [i]=='a'
				||cadena [i]=='e'
				||cadena [i]=='i'
				||cadena [i]=='o'
				||cadena [i]=='u'
				||cadena [i]=='A'
				||cadena [i]=='E'
				||cadena [i]=='I'
				||cadena [i]=='O'
				||cadena [i]=='U')
													
				{
					contador =contador + 1 ;
				} */
				switch(cadena [i]) 
				{
					case 'a':
					case 'e':
				    case 'i':
				    case 'o':
				    case 'u':
				    case 'A':
				    case 'E':
				    case 'I':
				    case 'O':
				    case 'U':
				    	contador= contador + 1 ;
				    	break;
				default:
				 contador  = 0;
				 break;
				 
				}  	
	}		
	 cout<<" El total de vocales encontradas son "<<contador++;
}
