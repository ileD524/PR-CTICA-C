//Escribe un programa que calcule el factorial de un número n entero positivo, leído por teclado.
#include <stdio.h>

int main(){
    int x, fact;
    char r;
    
    do{
        fact = 1;
        printf("\nIngrese un número entero positivo: ");
        scanf(" %i", &x);

        for(int i = 1; i<=x; i++){
            fact *= i;
        }
        printf("\nEl factorial de %i es: %i\n", x, fact);

        printf("\n¿Quieres ingresar otro valor? (S/N): ");
        fflush(stdin);
        scanf(" %c", &r);
    }while(r=='s' || r=='S');


    return 0;
}