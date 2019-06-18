#include<iostream>
#include <stdio.h>

void suma (int a, int b);

int main ()
{
	int m=1,n=2;
	suma(m,n);
	return 0;
	
	
}
void suma (int a,int b)
{
	int c;
	c= a+b;
	printf(" la suma es: %d + %d ",a,b,c);

}
