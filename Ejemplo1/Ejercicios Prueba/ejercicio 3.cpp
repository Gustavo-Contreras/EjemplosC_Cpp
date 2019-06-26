/*
Complete el siguiente programa creando una función llamada MaximoValor 
que encuentre y devuelva el valor máximo, barriéndose todos los elementos del vector
 
 #include <stdio.h> 
 int main(void) 
{ 
 double matriz[3][3] = {2.9,5.6,7.98,3.7,1.5,4.2,8.2,9.8,6.45};
  printf("maximo= %5.2lf \n", 
  MaximoValor(vector); 
}
 
 
*/
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;
int main  ()
{
double  mayor=0;
double matriz[3][3] = {2.9,5.6,7.98,3.7,1.5,4.2,8.2,9.8,6.45};
  
  for (int i=0;i<3;i++)
  {
  	for(int j=0;j<3;j++)
  	{
  		cout<<"\t "<<matriz[i][j];
	}
  	cout<<endl;
  	
  }
  for (int i=0;i<3;i++)
  {
  	for(int j=0;j<3;j++)
  	{
  	mayor = ((matriz[0][0])||(matriz[0][1])||(matriz[0][2])||(matriz[1][0])||(matriz[1][1])||(matriz[1][2])||(matriz[2][0])||(matriz[2][1])||(matriz[2][2]));
  	  if ((mayor)>matriz[i][j])
		cout<<mayor-matriz[i][j];
		
  	}
  
 } 
}



