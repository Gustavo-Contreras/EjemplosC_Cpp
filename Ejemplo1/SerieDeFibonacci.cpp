#include <iostream>

using namespace std;
int Fibonacci( int n);
void FibonacciIterativo (int n);
int main ()
{
	int numero;
	int resultado;
	cout<<"****** CALCULADORA SERIE FIBONACCI DE UN NUMERO*****"<<endl;
	cout<<" Ingrese un valor "<<endl;
	cin>> numero ;
	//resultado = Fibonacci(numero);
	for ( int i= 0 ; i<numero; i ++)
	cout <<"El fibonaci (recursivo) " <<i <<" es "<< Fibonacci(i)<<endl;
	
	cout << "El fibonacci (iterativo) de  "<< numero << "es"<<FibonacciIterativo(numero); 
 
		
	return 0;
}
// Recursivo
int Fibonacci( int n)
{
	
	
	if (n==0)
		return 0;
	if (n==1)
		return 1;
	else 
		return Fibonacci (n-2) + Fibonacci(n-1);
 } 
 //iterativo 
 void FibonacciIterativo (int n)
 {
 	
 	int i;
 	long actual,ant1,ant2;
 	ant1=ant2=1;
 	cout<<"0 1 1 ";
 	for (i=1;i<n-2;i++)
 	{
 		int actual = ant1 + ant 2;
 		cout<<actual;
 		ant2=ant1;
 		ant1=actual;
	 }	
 	
 }
