#include <cstdlib>
#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
	float V [6];
	for ( int j = 0;j<6;j++)
    {
	
		* (V+j)=(j+1)*10+1;
	}
	cout<<"Direccion contenido"<<endl;
	//for(int j=0; j<6;j++)
	
	//{
		//cout<< " V + " <<j<< "=" << V+j;
		//cout<< " V [" <<j<< "] =" << *(V+j)<<"\n";
	//}
	
	return 0;	
}
