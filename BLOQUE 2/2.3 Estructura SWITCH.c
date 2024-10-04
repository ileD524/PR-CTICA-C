//Realizar un programa que lea un número entre el 1 y el 4 y devuelva el día de la semana correspondiente
#include <stdio.h>

int main(){
    int x;

    printf("Ingrese un valor del 1 al 7: ");
    scanf(" %i", &x);

    switch (x){
    case 1: printf("\nLunes\n"); break;
    case 2: printf("\nMartes\n"); break;
    case 3: printf("\nMiércoles\n"); break;
    case 4: printf("\nJueves\n"); break;
    case 5: printf("\nViernes\n"); break;
    case 6: printf("\nSábado\n"); break;
    case 7: printf("\nDomingo\n"); break;
    default: printf("\nDEL 1 AL 7 DIJE. Empezá de nuevo.\n"); break;
    }

    return 0;
}