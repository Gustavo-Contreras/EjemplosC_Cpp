

#include<stdio.h>

/* En C no hay variables para guardar cadenas de texto, sino que debe construirse
   un arreglo de caracteres (tipo char). El tamaño del arreglo determina la longitud
   máxima que puede tener la cadena que guarda (tamaño-1, por el caracter de terminación).
   La constante MAX_STRLEN define el tamaño máximo que se utiliza en este programa para
   cualquier cadena. */
#define MAX_STRLEN 256

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* Para leer variables de texto se utiliza scanf, que lee solo una palabra. 
   Para leer una linea completa (es decir, incluyendo los espacios en blanco)
   se debe utilzar ges (ej, reemplazar scanf("%s",x) por gets(x)) pero 
   obliga a agregar un getchar() antes del gets si antes del mismo se leyó
   otra variable con scanf. */

// Declaraciones adelantadas de las funciones
void saludar(SIN_TIPO valor1);
int sumar_tres_numeros(SIN_TIPO valor1, SIN_TIPO valor2, SIN_TIPO valor3);
int sumar(SIN_TIPO valor1, SIN_TIPO valor2);

void saludar(SIN_TIPO valor1) {
	printf(" hola  %s\n",valor1);
}

int sumar_tres_numeros(SIN_TIPO valor1, SIN_TIPO valor2, SIN_TIPO valor3) {
	int retorno;
	retorno = valor1+valor2+valor3;
	return retorno;
}

int sumar(SIN_TIPO valor1, SIN_TIPO valor2) {
	int retorno;
	retorno = valor1+valor2;
	return retorno;
}

/* PROBLEMA QUE INCREMENTE EN 1 UN VALOR DALOR */
int main() {
	int a;
	int b;
	int c;
	int d;
	char nombre[MAX_STRLEN];
	printf(" escriba su nombre  \n");
	scanf("%s",nombre);
	saludar(nombre);
	printf("ingrese 3 numeros please\n");
	scanf("%i",&a);
	scanf("%i",&c);
	scanf("%i",&d);
	b = sumar(a,c);
	printf(" el resultado de la suma de dos numeros es la siguiente: %i\n",b);
	b = sumar_tres_numeros(a,c,d);
	printf(" el resuldado de la suma de tres numero es la siguiente: %i\n",b);
	return 0;
}

