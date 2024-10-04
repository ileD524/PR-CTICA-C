// EJERCICIO N°5: Crear un procedimiento que calcule la superficie de un rectángulo. 
#include <iostream>

using namespace std;

void RECTANGULO(float a, float b) {
	int superficie = a * b;
    cout << "El área de su rectangulo es: " << superficie << " centímetros cuadrados" << endl;
}

int main() {
	
    float a;
    float b;

    cout << "Ingrese la base de su rectangulo: ";
    cin >> a;
	cout << endl;
	
	cout << "Ingrese la altura de su rectangulo: ";
	cin >> b;
	cout << endl;

	RECTANGULO(a,b);

    return 0;
}