// EJERCICIO N°8: Crear un procedimiento que informe si un número es impar.
#include <iostream>
#include <math.h>

using namespace std;

void PAR(int N){

	if(N%2 == 0) {
		cout<<"El número no es impar" << endl;
	}else{
		cout<<"El número es impar" << endl;
	}
}

int main() {
	
    int N;
    char respuesta;
    
    do{
        cout << "Ingrese un número: ";
        cin >> N;
        cout << endl;

        PAR(N);
                cout << "¿Desea buscar otro valor? (S/N): ";
        cin >> respuesta;
        cout << endl;
        
    } while (respuesta == 'S' || respuesta == 's');
    
	return 0;
}
