//Introducir varios valores numéricos en un array mediante punteros.

#include<stdio.h>

void funcion (int *v);
void imprimir(int *b);

void funcion(int *v){
    for(int i = 0; i < 3; i++){
        printf("\nElemento %i: ", i+1);
        scanf(" %i", (v+i));
    }
    imprimir(v);
}

void imprimir(int *b){
    
    printf("\nVector: \n");
    for(int i = 0; i < 3; i++){
        printf("%i, ", *(b+i));
    }
    printf("FIN\n");
}

int main(){
    /*int v[] = {1, 2, 3}, i;

    for(i = 0; i < 3; i++){
        printf("%i ", *(v + i));//v[0] --> *(v + 0). Es lo mismo.
    }
    */
    
    int vec[3];

    funcion(vec);

    return 0;
}