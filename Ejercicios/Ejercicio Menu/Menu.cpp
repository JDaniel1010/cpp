#include <iostream>

using namespace std;
int main(int argc, char** argv) {

int opcion = 0;

while (true)
{
    system("cls");

    cout << "Elija una opcion:" << endl;
    cout << "1 - Ventas" << endl;
    cout << "2 - Productos" << endl;
    cout << "3 - Reportes" << endl;
    cout << "0 - Salir" << endl;

    cin >> opcion;

    if (opcion == 1)
    {
        system("cls");
        cout << "VENTAS" << endl;
        cout << "------" << endl;
        system("pause");
    }
}

return 0;
}