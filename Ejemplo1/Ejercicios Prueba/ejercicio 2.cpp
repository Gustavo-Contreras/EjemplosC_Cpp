/*
�Traduzca el siguiente c�digo a una funci�n que reciba como par�metro un puntero? (1 punto)

void Calcular (int valor) 
{ 
valor *= valor; 
return;
 }
*/
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
//prototipos
void calcular (int *valor);
int main ()
{
	
	
}
void calcular (int *valor)
{
	*valor = pow(*valor,2);
	return;
}	
	


