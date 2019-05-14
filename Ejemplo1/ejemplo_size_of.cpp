#include <iostream>
#include <stdlib.h>
#include <float.h>
using namespace std;

int main ()
{   system("color f3");
	cout <<sizeof(int) <<endl;
	cout <<sizeof(long) <<endl;
	cout <<sizeof(float) <<endl;
	cout <<sizeof(double) <<endl;
	cout <<FLT_MIN <<endl;
    cout << "mi mama \"dice que te levantes\"";
    //cout<< "hola"<<endl<<"mundo";
    printf("%20.5s", "hola mundo")<<endl;
    
    printf("el color es %s, el numero es: %d, el real es: %.2f","rojo",123,456.786);
    
    
	return 0;
	
}
