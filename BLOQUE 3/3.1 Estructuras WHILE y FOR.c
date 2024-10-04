/*
Escribe un programa  que lea dos números y muestre en pantalla todos los números
comprendidos entre esos números dados.
*/
#include <stdio.h>

int main(){
    int x, y;

    printf("Ingrese dos números, siendo el segundo mayor al primero, separándolos con un espacio: ");
    scanf(" %i %i", &x, &y);
    printf("\n");

// Una forma de hacer este algoritmo es con la estructura WHILE  
    int i = x + 1;
    while(i < y ){
        printf("%i ", i);
        i++;
    }
    printf("\n");

//La otra opción es usando la estructura FOR
    for(int i = x + 1; i < y; i++){
        printf("%i ", i);
    }
    printf("\n");

    return 0;
}