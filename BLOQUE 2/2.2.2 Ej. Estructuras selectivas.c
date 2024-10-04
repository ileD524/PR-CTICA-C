
/*
EJERCICIO 2: Realizar un programa que lea tres números enteros positivos distintos e imprima el mayor  y el menor
valor de los tres. Intente que el programa realice el menor número de comparaciones posible entre loa números.
*/

#include <stdio.h>

int main(){
    int x, y, z, max, min;


    printf("Ingrese tres números enteros positivos distintos:\nPrimer Número: ");
    scanf(" %i", &x);
    printf("\nSegundo número: ");
    scanf(" %i", &y);
    printf("\nTercer número: ");
    scanf(" %i", &z);

    //A esta estructura de IF/ELSE se las llama 'Anidadas'.
    if(x>y && x>z){
        max = x;
    }else if(y>x && y>z){
        max = y;
    }else{
        max = z;
    }

    if(x<y && x<z){
        min = x;
    }else if(y<x && y<z){
        min = y;
    }else{
        min = z;
    }

    printf("\nEl mayor de los tres número es el %i, mientras que el menor de entre los tres es %i.\n", max, min);

    return 0;
}