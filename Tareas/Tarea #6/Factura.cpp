#include <iostream>

using namespace std;

double subtotal;
float impuesto;
double total;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio, float impuesto, double total)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    impuesto = precio * 0.15;
    total = impuesto + precio;
}

void imprimirfactura()
{
    system("cls");
    cout<< "********"<< endl;
    cout<< "FACTURA"<< endl;
    cout<< "*******"<< endl;
    cout << endl;

    cout << "Productos:" << endl;
    cout << listaProductos;

    cout << endl;
    cout << "Subtotal: "<< subtotal;
    cout << "total "<< total;
    cout << endl;
    cout << endl;
    system("pause");
}    