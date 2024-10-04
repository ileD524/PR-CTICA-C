//MATRIZ: En programació, es un conjunto de vectores.

//Hacer una matriz y mostrarla por pantalla.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void introduce(int matriz[][7]);
void leer(int matriz[][7]);

void introduce(int matriz[][7]){//El segundo corchete debe poner la dimensión sí o sí, para que el programa reserve espacio. 
    srand(time(NULL));

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 7; j++){
            matriz[i][j] = rand() % 10;
        }
    }
}

void leer(int matriz[][7]){
        
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 7; j++){
            printf(" %i ", matriz[i][j]);
        }
        printf("\n");
    }
}
int main(){
    
    int matriz[5][7];

    introduce(matriz);
    leer(matriz);


    return 0;
}