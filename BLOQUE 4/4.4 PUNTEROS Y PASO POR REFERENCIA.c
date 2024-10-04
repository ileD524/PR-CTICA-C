//PARÁMETRO DE DIRECCIÓN: '&'.
//Cuando usamos el símbolo '&' estamos indicando la dirección.
//La DIRECCIÓN DE MEMORIA es el lugar donde se guardará el dato.
//Cuando escribimos '&x' nos estamos refiriendo a la dirección de 'x'.

//PARÁMETRO DE INDIRECCIÓN: '*'.
//Cuando usamos el símbolo '*' estamos indicando el valor que hay en la dirección 'x'.
//Solo señala el valor de la dirección dada.
//Se usa para el pase de parámetros por referencia en las funciones.

//Intercambia los valores de dos variables con una función.
#include <stdio.h>

void cambio(int *a, int *b);

int main(){
    int x = 5, y = 10;

    cambio(&x, &y);
    printf("\nEl valor actual de 'x' es: %i.\n\nEl valor actual de 'y' es: %i.\n", x, y);

    return 0;
}
void cambio(int *a, int *b){// 'a' = '&x', y por tanto, '*a' será lo mismo que 'x'.
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}