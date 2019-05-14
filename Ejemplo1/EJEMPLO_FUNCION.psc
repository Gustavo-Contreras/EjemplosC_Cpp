Funcion saludar ( valor1 )
	escribir " hola  ",valor1;
Fin Funcion

Funcion retorno <-sumar_tres_numeros ( valor1, valor2, valor3 )
	definir retorno como entero;
	retorno= valor1 + valor2 + valor3;
Fin Funcion

Funcion retorno <- Sumar ( valor1, valor2 )
	definir retorno Como Entero;
	retorno= valor1+valor2;
Fin Funcion

// PROBLEMA QUE INCREMENTE EN 1 UN VALOR DALOR
Algoritmo EjemploFuncion
	escribir " escriba su nombre  ";
	definir nombre como cadena;
	definir  a,b,c,d como entero;
	leer nombre;
	saludar(nombre);
	escribir "ingrese 3 numeros please";
	leer a;
	leer c;
	leer d;

	b = sumar (a,c);
	escribir " el resultado de la suma de dos numeros es la siguiente: ",b;
	b =sumar_tres_numeros (a,c,d);
	escribir " el resuldado de la suma de tres numero es la siguiente: ", b;
FinAlgoritmo
