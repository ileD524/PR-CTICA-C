//Hacer un bucle que nos pregunte si queremos continuar y hasta que no escribamos la letra 'n' no pare.

#include <stdio.h>

int main(){
    char x;

    do{
        printf("\n¿Quieres continuar? (S/N): ");
        fflush(stdin);
        scanf(" %c", &x);
    } while (x == 's' || x == 'S');

    printf("\n¡BIEN! Ni quería que continúes igual. Vete ¡Y NO VUELVAS!\n");

    return 0;
    
}