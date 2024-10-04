// EJERCICIO N°3: Crear un procedimiento que calcule factorial de un número.

#include <iostream>

using namespace std;

int factorial(int N) {
    if (N == 0) {
        return 1;
    }
    
    int resultado = 1;

    for (int i = 1; i <= N; ++i) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    int N;

    cout << "Ingrese un numero para calcular su factorial: ";
    cin >> N;

    int resultado = factorial(N);

    cout << "El factorial de " << N << " es: " << resultado << endl;

    return 0;
}