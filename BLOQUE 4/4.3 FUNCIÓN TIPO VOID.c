//Hacer con functiones de tipo 'void' el factorial de un número.
//Las funciones de tipo 'void' no retornan nada.
#include <stdio.h>

void factorial();

int main(){
    char y;

    do{
        factorial();

        printf("\n¿Quieres ingresar otro valor? (S/N): ");
        scanf(" %c", &y);
    }while(y == 's' || y == 'S');

    return 0;
}

void factorial(){
    int x, fact = 1;
    
    printf("\nIngrese un número entero: ");
    scanf(" %i", &x);

    for(int i = 1; i <= x; i++){
        fact *= i;
    }
    printf("\n El factorial de %i es: %i\n", x, fact);
}