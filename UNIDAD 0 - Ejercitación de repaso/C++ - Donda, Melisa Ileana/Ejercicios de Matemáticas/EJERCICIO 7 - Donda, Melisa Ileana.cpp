// EJERCICIO N°7: Crear un procedimiento que informe si un número es par.
#include <iostream>
#include <math.h>

using namespace std;

void PAR(int N){

	if(N%2 == 0) {
		cout<<"El número es par" << endl;
	}else{
		cout<<"El número no es par" << endl;
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
