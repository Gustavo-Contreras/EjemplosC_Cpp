#include <stdio.h>
#define feps(x)(x*x+ 2*x -1)

int main()
{
	float x;
	for ( x=0.0; x<= 6.5; x+=0.5 )
	
     printf("\t f(%1.f)= %6.f",x,feps(x));
	
	
}
