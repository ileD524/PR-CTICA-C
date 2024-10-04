/* EJERCICIO N°5: Crear un procedimiento que reciba un vector ordenado en forma ascendente y 
un valor N y retorne verdadero si se encuentra dicho valor en el vector.
*/

#include <iostream>
#include <vector>

using namespace std;

bool buscarEnVector(const vector<int> &vec, int N) {
    int left = 0;
    int right = vec.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (vec[mid] == N) {
            return true; // Se encontró el valor
        } else if (vec[mid] < N) {
            left = mid + 1; // Buscar en la mitad derecha
        } else {
            right = mid - 1; // Buscar en la mitad izquierda
        }
    }

    return false; // No se encontró el valor
}

int main() {
    // Ejemplo de uso
    vector<int> vec = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}; // Vector ordenado ascendentemente
    int N;
    char respuesta;

    do {
        cout << "Ingrese el valor a buscar: ";
        cin >> N;
        cout << endl;

        bool encontrado = buscarEnVector(vec, N);

        if (encontrado) {
            cout << "¡FELICIDADES! El valor " << N << " se encuentra en el vector." << endl << endl;
        } else {
            cout << "El valor " << N << " no se encuentra en el vector." << endl << endl;
        }

        cout << "¿Desea buscar otro valor? (S/N): ";
        cin >> respuesta;
        cout << endl;
        
    } while (respuesta == 'S' || respuesta == 's');

    return 0;
}
