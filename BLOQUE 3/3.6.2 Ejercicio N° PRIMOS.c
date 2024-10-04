//Hacer un programa para saber si un número es primo.
#include <stdio.h>

int main(){
    int x, i, j = 0, aux;
    char y;

    do{
        printf("\nIngrese un número: ");
        scanf(" %i", &x);

        for(i=2; i<x && j != 1; i++){
            aux = x % i;
            if(aux == 0){
                j = 1;
            }
        }

        if(j == 1){
            printf("\n %i NO es primo.\n", x);
        }else{
            printf("\n %i es primo.\n", x);
        }
        j = 0;
        
        printf("\n¿Quieres ingresar otro número? (S/N): ");
        fflush(stdin);
        scanf(" %c", &y);

    }while(y == 's' || y == 'S');


    return 0;
}