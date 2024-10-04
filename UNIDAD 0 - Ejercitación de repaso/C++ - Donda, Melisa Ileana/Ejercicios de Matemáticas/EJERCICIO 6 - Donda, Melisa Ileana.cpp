// EJERCICIO N°6: Crear un procedimiento que calcule la superficie de un triángulo.

#include <iostream>
#include <cmath>

using namespace std;

void TRIANGULO(float a, float b){

    float area, mult;

    mult = a * b;
    area = mult / 2;

    cout << "El área del triángulo es de " << area << " centímetros cuadrados" << endl;
}

int main(){

    float a, b;

    cout << "Ingrese la longitud de la altura del triángulo: ";
    cin >> a;
    cout << endl;

    cout << "Ingrese la longitud de la base del triángulo: ";
    cin >> b;
    cout << endl;

    TRIANGULO(a, b);

    return 0;
}
