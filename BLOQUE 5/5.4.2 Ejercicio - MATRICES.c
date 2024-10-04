//Hacer un programa que compare dos matrices.

#include<stdio.h>
#include<stdlib.h>

void introduce(int matriz[][2]);
void compara(int matriz_1[][2], int matriz_2[][2]);

void introduce(int matriz[][2]){

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Valor[%i][%i]: ", i+1, j+1);
            scanf(" %i", &matriz[i][j]);
        }
    }
}

void compara(int matriz_1[][2], int matriz_2[][2]){
    int aux = 0;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2 && aux == 0; j++){
            if(matriz_1[i][j] != matriz_2[i][j]){
                aux = 1;
            }
        }
    }
    if(aux == 0){
        printf("\nLas matrices son iguales.\n");
    }else{
        printf("\nLas matrices son distintas.\n");
    }
}

int main(){

    int m1[2][2];
    int m2[2][2];

    introduce(m1);
    introduce(m2);

    compara(m1, m2);

    return 0;
}