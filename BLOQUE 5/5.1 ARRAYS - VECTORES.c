/*ARRAY: Es una estructura, que lo que hace es almacenar dentro de la estructura varias variables 
del mismo tipo.*/

//Darle valor a un vector de 10 enteros y leerlos después.
#include<stdio.h>

int main(){
    int v[10], i;

    for(i = 0; i <10; i++){
        printf("Ingresa el valor %i: ", i + 1);
        scanf(" %i", &v[i]);
    }

    //printf("El valor de la posición 0 es %i\n\n", v[0]);

    for(int i = 0; i < 10; i++){
        printf("%i, ", v[i]);
    }

    return 0;
}