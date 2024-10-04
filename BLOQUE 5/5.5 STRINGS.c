//STRING: Es la forma que tenemos los programadores para almacenar una frase.

//Compara dos cadenas de caracteres.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char c1[6];
    char c2[6];

    printf("\nIntroduce la primer palabra: ");
    fgets(c1, 6, stdin);

    printf("\nIntroduce la segunda palabra: ");
    fflush(stdin);
    fgets(c2, 6, stdin);

    if(strcmp(c1, c2) == 0){
        printf("\n\nLas dos palabras son iguales.\n");
    }else{
        printf("\n\nLas dos palabras son distintas.\n");
    }

    return 0;
}