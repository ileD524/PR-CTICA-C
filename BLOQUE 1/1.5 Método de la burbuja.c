// El MÉTODO DE LA BURBUJA nos propone crear una variabel auxiliar.
//Intercambiar los valores de dos números enteros introducidos por teclado. 

#include <stdio.h>

int main(){
    int x, y, aux;

    printf("El valor de x es: ");
    scanf("%i", &x);

    printf("El valor de y es: ");
    scanf("%i", &y);
    
    aux = x;
    x = y;
    y = aux;

    printf("El nuevo valor de x es: %i.\n", x);
    printf("El nuevo valor de y es: %i.\n", y);

    return 0;
}