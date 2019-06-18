/*
A través del visual estudio o DevC++ se creará una aplicación de consola, 
que realiza el trabajo de calcular el dígito verificador de 
un numero de cedula, con lo cual validará si una cédula es válida. 
*/
#include <iostream>
using namespace std;

int main()
{
	string cedula;// ="0922891817";// cedula codigo muerto
	cout<<" ingrese su numero de cedula"<<endl;
	cin>>cedula;
	int matriz[3][9]={{0},{0},{0}};
	cout<<"cedula: "<<cedula<<endl;
	int filas=3,columnas=9;
	int sumatotal;
		for(int j=0;j<columnas;j++)
	{
		if(j%2==0)
		matriz[0][j]=2;
		else
		  matriz[0][j]=1;
		matriz[1][j] = cedula[j]-'0';
		matriz[2][j] = matriz[0][j]* matriz[1][j];
		if(matriz[2][j]>=10)
			matriz[2][j]=matriz[2][j]-9;
			
		//matriz[2][j]=(matriz[0]][j]*matriz[1][j]>10;
		sumatotal=sumatotal + matriz[2][j];
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<9;j++) // i filas  j columnas
		{
		//matriz[i][j]=0;
		cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<" la suma total es: "<<sumatotal<<endl; 
	//int digitoVerificador =sumaTotal*9 % 10;
	int digitoVerificador = 10-sumatotal % 10;
	if (digitoVerificador == 10)
		digitoVerificador = 0;
		cout<<"el digito verificador calculado es: "<<digitoVerificador<<endl;
		if(digitoVerificador ==(int)cedula[9]-48)
		cout<<" cedula valida !"<<endl;
		else
		cout<<"cedula invalida "<<endl;
		
	return 0;
}
