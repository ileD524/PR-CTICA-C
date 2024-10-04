/* EJERCICIO N°3: Crear un procedimiento que reciba un vector de N números naturales desordenados y retorne
 el vector ordenado de mayor a menor (puede contener elementos repetidos).
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> cargarVector(int N) {
    vector<int> numeros(N); // Crear un vector de tamaño N

    cout << "Ingrese " << N << " numeros enteros separados por espacios:\n";

    // Leer N números enteros desde la entrada estándar
    for (int i = 0; i < N; ++i) {
        cin >> numeros[i];
    }
    return numeros;
}

void ORDENAR(vector<int> &miVector, int N) {
    for (int i = 0; i < N - 1; ++i) {
        for (int j = 0; j < N - i - 1; ++j) {
            if (miVector[j] < miVector[j + 1]) {
                int save = miVector[j];
                miVector[j] = miVector[j + 1];
                miVector[j + 1] = save;
            }
        }
    }
}

int main() {
    int N;
    cout << "Ingrese el tamaño del vector: ";
    cin >> N;

    vector<int> miVector = cargarVector(N);

    ORDENAR(miVector, N);

    cout << "Vector ordenado:\n";
    for (int i = 0; i < N; ++i) {
        cout << miVector[i] << endl;
    }

    return 0;
}
