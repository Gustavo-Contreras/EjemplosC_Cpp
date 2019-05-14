#include <iostream>
#include <conio.h>
using namespace std;
//   algoritmo que sume los 30 primeros numeros, excepto los miltiplos de 5
int main(int argc, char** argv) 
{
	int acumulador = 0 ;
	cout<<"  Programa que suma los 30 primero numeros "<<endl;
	for ( int i=1; i<30; i++)
	{	/*if (i %5 == 0)
		{
			continue;
		}
		acumulador +=i;
		*/
		
		/* if (i %15 == 0)
		{
			break;
		}
		acumulador +=i;
		*/
		
		if (i %15 == 0)
		{
			return 3;;
		}
		acumulador +=i;
		
		
	}
	cout <<"el valor  sumado es : "<< acumulador ;
	getch();
	return 0;
	
}
