#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
    system("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1- Cappuccino" << endl;
        cout << "2- Expresso" << endl;
        cout << "3- Chocolate balnco"<< endl;

        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("Cappuccino", 1, 40);
            break;
        case 2:
            agregarProducto("Expresso", 1, 30);
            break;
        case 3:
            agregarProducto("Chocolate blanco",1,40);
            break;            
        default:
            cout << "opcion no valida";
            break;
        }
        
        break;
    }
    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1- Limonada"<< endl;
        cout << "2- Malteada de cappuccino"<<endl;
        cout << "3- Granizado de cafe"<<endl;

        cin >> opcionProducto;

        switch (opcionProducto){

        case 1:
            agregarProducto("Limonada", 2, 25);
            break;
        case 2:
            agregarProducto("Malteada de cappucciono", 2, 35);
            break;
        case 3:
            agregarProducto("Granizado de cafe",2,35);
            break;            
        default:
            cout << "opcion no valida";
            break;
        }
        
        break;
        }

    case 3:
    {
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << "1- Pudin de pan"<< endl;
        cout << "2- Chessecake"<< endl;
        cout << "3- Flan de dulce de leche"<< endl;

        cin >> opcionProducto;

        switch (opcionProducto){

        case 1:
            agregarProducto("Pudin de pan", 3, 30);
            break;
        case 2:
            agregarProducto("Chessecake", 3, 40);
            break;
        case 3:
            agregarProducto("Flan de dulce de leche",3,35);
            break;            
        default:
            cout << "opcion no valida";
            break;
        }
    }
}