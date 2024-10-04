/*
ESTRUCTURAS SELECTIVAS: Forma que tenemos nosotros en el código de hacer que se ejecuten o no
ciertas líneas del código en función de la condición
*/
#include <stdio.h>

int main(){

    int x = 9, y;

/*  
    //Acá empieza nuestra estructura selectiva
    if(x == 5){ // COMPARADORES: '==' '<' '<=' '>' '>=' '!='
        printf("El valor de 'x' es 5\n");
    }else{
        printf("El valor de 'x' no es 5\n");
    }
*/

    printf("Adivine en qué número del 1 al 10 estoy pensando... Ingrese un número: ");
    scanf(" %i", &y);

    if(x == y){
        printf("\n¡ACERTASTE! Sí que eres muy bueno adivinando eh\n");
    }else{
        printf("\nNo acertaste :,( Suerte para la próxima\n");
    }

    return 0;
}