/* EJERCICIO N°6: Crear un procedimiento que reciba un vector e imprima el promedio
de los elementos que se encuentran en las posiciones pares.
*/

#include <iostream>
#include <vector>

using namespace std;

void PROMEDIO(const vector<float> &miVector) {
    float Suma = 0;
    int count = 0; // Contador para el número de elementos en posiciones pares

//'i += 2' Es para que vaya de 2 en 2 y así siempre estará en posiciones pares.
    for (int i = 0; i < miVector.size(); i += 2) {
        Suma += miVector[i];
        count++;
    }

    if (count > 0) {
        float PROM = Suma / count;
        cout << "El promedio de los elementos en posiciones pares dentro del vector es: " << PROM << endl;
    } else {
        cout << "No hay elementos en posiciones pares dentro del vector." << endl;
    }
}

int main() {
    vector<float> miVector = {3, 8, 9, 10, 45, 32, 1, 0, 5};

    PROMEDIO(miVector);

    return 0;
}
