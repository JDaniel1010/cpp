#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nota = 0;

    cout << "Ingrese la nota que obtuvo: ";
    cin >> nota;

    if (nota == 100) {
        cout << "Obtuviste un A++";
    }

    if (nota >= 95 && nota <= 99) {
        cout << "Obtuviste un A+";
    }

    if (nota >= 90 && nota <= 94) {
        cout << "Obtuviste un A";
    }

    if (nota >= 85 && nota <= 89) {
        cout << "Obtuviste un A-";
    } 
    
    if (nota >= 80 && nota <= 84) {
        cout << "Obtuviste una B+";
    } 
   
    if (nota >= 75 && nota <= 79) {
        cout << "Obtuviste una B";
    }

    if (nota >= 70 && nota <= 74) {
        cout << "Obtuviste una B-";
    }

    if (nota >= 60 && nota <= 69) {
        cout << "Obtuviste una C";
    }

    if (nota >= 55 && nota <= 59) {
        cout << "Obtuviste una C-";
    }   

    if (nota >= 50 && nota <= 54) {
        cout << "Obtuviste una D+";
    } 

    if (nota >= 45 && nota <= 49) {
        cout << " Obtuviste una D";
    }

    if (nota >= 40 && nota <= 44) {
        cout << "Obtuviste una D-";
    }

    if (nota >= 35 && nota <= 39){
        cout << "Obtuviste una E+";
    }

    if (nota >= 30 && nota <= 34) {
        cout << "Obtuviste una E;
    }

    if (nota >= 55 && nota <= 59) {
        cout << "Obtuviste una "
    }



 return 0;
}