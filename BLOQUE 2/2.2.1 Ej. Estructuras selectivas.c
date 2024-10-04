
/*
EJERCICIO 1: Realizar un programa que lea de la entrada estándar un número entero positivo
y escriba en la salida estándar si es par o impar
*/

#include <stdio.h>

int main(){
    int x;

    printf("Ingrese un número entero positivo: ");
    scanf(" %i", &x);

    if(x%2 == 0){
        printf("\nEl número ingresado (%i) es par\n", x);
    }else{
        printf("\nEl número ingresado (%i) es impar\n", x);
    }

    return 0;
}