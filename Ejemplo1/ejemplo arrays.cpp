#include <cstdlib>
#include <iostream>
#include <iomanip>
#define maxf 1
#define maxc 5

using namespace std;
int main(int argc, char *argv[])
{
    float a[maxf] [maxc];
    int f, c;
    // escrir el array

    for(f = 0; f < maxf; f++)
        for(c = 0; c < maxc; c++)
            cin >> a[f][c];

   // escribir el array

    for(f = 0; f < maxf; f++)
    {
        for(c = 0; c < maxc; c++)
            cout <<setw(5)<<fixed<<setprecision(2)<<a[f] [c] ;
       	cout << endl;

    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
