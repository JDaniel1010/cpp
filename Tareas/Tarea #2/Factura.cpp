#include <iostream>

using namespace std;
int main(int argc, char** argv) {

    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;
    int descuento = 0;
    char facturaExenta;
    double calculoDescuento = 0;
    double calculoImpuesto = 0;

    cout << " Ingrese el subtotal de la factura: ";
    cin >> subtotal;

    cout << " Ingrese el descuento (0, 10, 15, 20): ";
    cin >> descuento;

    cout << " La factura esta exenta? s/n ";
    cin >> facturaExenta;

    if ( facturaExenta == 's' || facturaExenta == 'S' )
    {
        calculoDescuento = (subtotal * descuento) / 100;
        calculoImpuesto = 0;
    }
    else
    {
        calculoDescuento = (subtotal * descuento) / 100;
        calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
    }
  
    total = subtotal - calculoDescuento + calculoImpuesto; 

    cout << endl;
    cout << " El total a pagar es: " << total;

return 0;
}