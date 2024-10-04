//PROGRAMA PRINCIPAL - Suma/Resta/Multiplicación

#include <stdio.h>
#include "tda - power - aula.h"

int main(){
    float a, b;
    int x;
    char y;

    do{
        printf("\nIngrese dos números, separándolos con un espacio: ");
        scanf(" %f %f", &a, &b);

        printf("\n¿Desea realizar una suma (presione 1), una resta (presione 2), o una multiplicación (Presione 3)?: ");
        scanf(" %i", &x);

        switch (x){
        case 1: printf("\nLa suma entre %g y %g es %g.\n", a, b, SUMA(a, b)); break;
        case 2: printf("\nLa resta entre %g y %g es %g.\n", a, b, RESTA(a, b)); break;
        case 3: printf("\nLa multiplicación entre %g y %g es %g.\n", a, b, MULTI(a, b)); break;
        default: printf("\nLa opción seleccionada no es la correcta, o no está disponible.\n"); break;
        }

        printf("\n¿Desea ingresar otros valores? (S/N): ");
        fflush(stdin);
        scanf(" %c", &y);

    }while(y == 's' || y == 'S');

    return 0;
}