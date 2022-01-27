#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	
	int numero1 = 0, numero2 = 0, suma = 0, resta = 0, multiplicacion = 0;
	float division = 0;
	
	cout << " Ingrese el primer numero ";
	cin >> numero1;
	
	cout << " Ingrese el segundo numero ";
	cin >> numero2;
	
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multiplicacion = numero1 * numero2;
	division = numero1 / numero2;
	
	cout << " El resultado de la suma es de :" << suma << endl;
	cout << " El resultado de la resta es de :" << resta << endl;
	cout << " El resultado de la multiplicacion es de :" << multiplicacion << endl;
	cout << " El resultado de la division es de :" << division << endl;  
	
	return 0;
}