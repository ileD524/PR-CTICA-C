//Realizar un programa que calcule la media de x números introducidos por teclado.

#include <stdio.h>

int main(){
    int x;
    float y, suma = 0;
    double prom;

    printf("Ingrese la cantidad de números a ingresar: ");
    scanf(" %i", &x);

    for(int i = 0; i < x; i++){
        printf("\nValor %i: ", i + 1);
        scanf(" %f", &y);
        suma += y;
    }
    prom = suma/x;
    printf("\nEl promedio de todos los valores ingresados es: %f.\n", prom);

    return 0;
}