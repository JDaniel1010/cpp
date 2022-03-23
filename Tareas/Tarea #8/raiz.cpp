#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero = 0;
    double raiz = 0;

    srand(time(NULL));
    
    for(int i = 1; i <= 1; i++)
    {
        numero = rand() % 20 + 1;

        raiz = sqrt(numero);

        cout << " El numero es: " << numero <<endl;
        cout << " Su raiz cuadrada es: " << raiz;


    }
    
    return 0;
}
