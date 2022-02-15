#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int pares = 0;
    int impares = 0;
    int total = 0;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0) {
            pares = pares + i;
        }
        else{
            impares = impares + i;
        }
        cout << i << " ";
    }

    total = pares + impares;

    cout << endl;
    cout << endl;
    cout << "El total de pares es:" << pares << endl;
    cout << "El total de impares es:" << impares << endl;
    cout << "El total es:" << total;

    return 0;
}