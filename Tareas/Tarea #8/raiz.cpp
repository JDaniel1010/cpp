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
        cout << numero << " ";

        raiz = sqrt(numero);

        cout << " La raiz cuadrada del numero " << numero;
        cout << " es: " << raiz;


    }
    
    return 0;
}
