/*
Escribe un programa que lea dos números y muestre por pantalla todos los números
comprendidos entre esos dos números dados
*/

#include <stdio.h>

int main(){
    int x, y;

    printf("Ingrese dos números, siendo el segundo mayor al primero, separándolos con un espacio: ");
    scanf(" %i %i", &x, &y);
    printf("\n");
    
    do{
        printf("%i ", x+1);
        x++;
    }while(x+1 < y);
    printf("\n");

    return 0;
}