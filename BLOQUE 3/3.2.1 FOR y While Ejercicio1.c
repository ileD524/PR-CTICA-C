//Realizar un programa que imprima la suma de los números pares entre dos y mil.

#include <stdio.h>

int main(){
    int suma = 0;

    for(int i = 2; i <= 1000 ; i += 2){
        suma += i;
    }
    printf("%i.", suma);

    return 0;
}