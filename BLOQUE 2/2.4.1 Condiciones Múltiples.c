//Hacer un programa que diga si un número insertado por teclado se encuntra entre el 1 y el 10 o si no lo está.

#include <stdio.h>

int main(){

    int x;

    printf("Ingrese un número: ");
    scanf(" %i", &x);

    if(x >= 1 && x <=10){
        printf("\nEl número ingresado se encuentra entre el 1 y el 10.\n");
    }else{
        printf("\nEl número ingresado no se encuentra entre 1 y 10.\n");
    }

    return 0;
}