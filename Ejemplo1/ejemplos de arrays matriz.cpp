#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int suma;
	int suma2;
	int suma3;
	int suma4;
    int suma5;
	int matriz [3][3]= {{1,2,3},{4,5,6}};

	for(int i=0;i<3;i++)
	{ 
		for(int j=0;j<3;j++ )
	    {
		cout<<matriz[i][j]<<"\t";
		
	    		
  		}
  		cout<<endl;
  		cout<<endl;
  		//suma = suma + matriz[0][0]+matriz[0][1]+matriz[0][2];
  		//cout<<suma;
  		
	}  
	suma = suma + matriz[0][0]+matriz[0][1]+matriz[0][2];
  		cout<<"la suma de la primera fila es : "<<suma<<endl;
  	suma2 =  matriz[1][0]+matriz[1][1]+matriz[1][2];
	cout<<"la suma de la segunda fila es : "<< suma2<<endl;
	cout<<"la suma de todas las filas es : "<<suma+suma2<<endl;
	suma4= matriz[0][0]+matriz[1][0]+matriz[2][0];
	cout<<"la suma de la columbna 1 es : "<<suma4<<endl; 
	suma5= matriz[0][1]+matriz[1][1]+matriz[2][1];
	cout<<"la suma de la columbna 2 es : "<<suma5<<endl; 
	suma3= matriz[0][2]+matriz[1][2]+matriz[2][2];
	cout<<"la suma de la columbna 3 es : "<<suma3; 
	
	return 0;
	
}
