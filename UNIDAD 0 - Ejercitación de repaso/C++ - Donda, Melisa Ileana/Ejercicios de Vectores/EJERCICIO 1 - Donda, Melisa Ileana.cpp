// EJERCICIO N°1: Crear un procedimiento que permita la carga de un vector de N números enteros

#include <iostream>
#include <vector>

using namespace std;

// Función para cargar un vector de N números enteros
void cargarVector(int N) {
    vector<int> numeros(N); // Crear un vector de tamaño N

    cout << "Ingrese " << N << " numeros enteros separados por espacios:\n";

    // Leer N números enteros desde la entrada estándar
    for (int i = 0; i < N; ++i) {
        cin >> numeros[i];
    }

}

int main() {
    int N;
    cout << "Ingrese el tamaño del vector: ";
    cin >> N;

    // Llamar a la función para cargar el vector
    cargarVector(N);

    return 0;
}
