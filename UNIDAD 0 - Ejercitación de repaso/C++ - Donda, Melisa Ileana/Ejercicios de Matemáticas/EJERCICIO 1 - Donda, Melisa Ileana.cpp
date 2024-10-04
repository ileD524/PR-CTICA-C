// EJERCICIO N°1: Crear un procedimiento que informe si dos números son iguales.

#include <iostream>

using namespace std;

void IGUALES(int a, int b){
    
    if (a == b){
        cout << "Los dos números ingresados son iguales" << endl;
    }else{
        cout << "Los números ingresados son distintos" << endl;
    }
}

int main() {

    int a, b;

    cout <<"Ingrese el primer valor a continuación:";
    cin >> a;
    cout << endl;

    cout <<"Ingrese el segundo valor a continuación:";
    cin >> b;
    cout << endl;

    IGUALES(a, b);

    return 0;
}

