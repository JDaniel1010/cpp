#include <iostream>

using namespace std;
int main(int argc, char** argv) {

    double subtotal = 0;
    double total = 0;
    int impuesto = 0.15;

    cout << " Ingrese el subtotal de la factura: ";
    cin >> subtotal;

    total = subtotal + (subtotal * 0.15);

    cout << endl;
    cout << " El total a pagar es: " << total;

return 0;
}