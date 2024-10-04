// EJERCICIO N°4: Crear un procedimiento que calcule el cuadrado de un número.
#include <iostream>

using namespace std;

void CUADRADO(int N) {
	int cuad = N * N;
    cout << N << " al cuadrado es: " << cuad <<  endl;
}

int main() {
	
    int N;

    cout << "Ingrese el número del cual quiere calcular su cuadrado: ";
    cin >> N;
	cout << endl;

    CUADRADO(N);

    return 0;
}