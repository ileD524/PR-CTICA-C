// EJERCICIO N°2: Crear un procedimiento que informe el mayor de dos números.

#include <iostream>
#include <vector>

using namespace std;

void MAYOR(int a, int b){

    if(a > b){
        cout << "El primer valor ingresado (" << a << ") es mayor al segundo valor (" << b << ")"<< endl;
    }else if(b > a){
        cout << "El segundo valor ingresado (" << b << ") es mayor al segundo valor (" << a << ")"<< endl;
    }else{
        cout << "El primer valor ingresado (" << a << ") es igual al segundo valor (" << b << ")"<< endl;
    }
}

int main(){

    int a;
    int b;

    cout << "Ingrese el primer valor: ";
    cin >> a;
    cout << endl;

    cout << "Ahora ingrese el segundo valor: ";
    cin >> b;
    cout << endl;
    
    MAYOR(a,b);

    return 0;
}