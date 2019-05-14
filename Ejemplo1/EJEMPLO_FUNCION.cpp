

#include<iostream>
using namespace std;

#define SIN_TIPO string

void saludar(string valor1);
int sumar_tres_numeros(int valor1,int valor2, int valor3);
int sumar(int valor1, int valor2);

void saludar(int valor1) {
	cout << " hola  " << valor1 << endl;
}

int sumar_tres_numeros(int valor1, int valor2, int valor3) {
	int retorno;
	retorno = valor1+valor2+valor3;
	return retorno;
}

int sumar(int valor1, int valor2) {
	int retorno;
	retorno = valor1+valor2;
	return retorno;
}

// PROBLEMA QUE INCREMENTE EN 1 UN VALOR DALOR
int main() {
	int a;
	int b;
	int c;
	int d;
	string nombre;
	cout << " escriba su nombre  " << endl;
	cin >> nombre;
	saludar(nombre);
	cout << "ingrese 3 numeros please" << endl;
	cin >> a;
	cin >> c;
	cin >> d;
	b = sumar(a,c);
	cout << " el resultado de la suma de dos numeros es la siguiente: " << b << endl;
	b = sumar_tres_numeros(a,c,d);
	cout << " el resuldado de la suma de tres numero es la siguiente: " << b << endl;
	return 0;
}

