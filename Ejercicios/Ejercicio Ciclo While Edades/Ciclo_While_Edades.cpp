#include <iostream>

using namespace std;
int main(int argc, char** argv) {

int edad1 = 10;
int edad2 = 0;

while (edad1 > edad2)
{
    edad2 = edad2 + 1;

    cout << edad2 << endl;

    if (edad2 == 5)
    {
        break;
    }
}

return 0;
}