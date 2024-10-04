// EJERCICIO N°2: Crear un procedimiento que imprima en pantalla un vector pasado como parámetro.
#include <iostream>
#include <vector>

using namespace std;

//Decidí reutilizar el código del ejercicio 1, pero con algunos retoques :)
// Función para cargar un vector de N números enteros
vector <int> cargarVector(int N) {
    vector<int> numeros(N); // Crear un vector de tamaño N

    cout << "Ingrese " << N << " numeros enteros separados por espacios:\n";

    // Leer N números enteros desde la entrada estándar
    for (int i = 0; i < N; ++i) {
        cin >> numeros[i];
    }
    return numeros;
}

// En este caso, no necesito que retorne nada, así que uso 'void' nada más.
void imprimirVector (vector <int> miVector){

    // Imprimir el vector cargado
    cout << "Vector cargado:\n";
    for (int num : miVector) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Ingrese el tamaño del vector: ";
    cin >> N;

    // Llamar a la función para cargar el vector
    vector <int> miVector = cargarVector(N);

    //Llamar a la función para imprimir el vector (pasándolo como parámetro).
    imprimirVector(miVector);

    return 0;
}

