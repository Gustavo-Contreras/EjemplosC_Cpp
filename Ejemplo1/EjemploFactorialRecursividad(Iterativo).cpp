#include <iostream>

using namespace std;
int FactorialIterativo (int num);
int FactorialRecursivo (int n);

int main ()
{
	int n, fact;
	cout<<" Factorial de un numero entre 2 y 10 :"<<endl;
	do 
	{ 
	cout<<"Ingrese un valor ";
	cin >>n;
		
	}while ((n<2)||(n>10));
	fact = FactorialIterativo (n);
	cout<<"de forma iteravtica"<<n<<"! es : "<<fact<<endl;
	fact= FactorialRecursivo(n);
	cout<<"de forma  recursiva"<<n<<"! es : "<<fact;
		
	return 0;
}


// Funcion que calcula el factorial de forma iterativa 
int FactorialIterativo (int n)
{
	int fact,m;
	for (m=n, fact=1; n>1;n--)
	{
		fact = fact*n;
	}
	return fact;
}

// Funcion que calcula el factorial de forma recursiva 
int FactorialRecursivo (int n)
{ 
 	if (n<=1)
 	return 1;
 	return n* FactorialRecursivo(n-1);

}
