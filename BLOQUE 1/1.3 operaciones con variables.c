#include <stdio.h>
#define PI 3.1416 //'#define' Para definir constantes.

int main(){
    float x = PI;
    int y;

    printf("El valor de x es %f.\n", x);
    printf("Ingrese un valor para 'y': ");
    scanf("%i", &y);
    printf("El valor de 'y' es %i.\n", y);

    x *= y;
    printf("El nuevo valor para 'x' es %f.\n", x);

    return 0;

}