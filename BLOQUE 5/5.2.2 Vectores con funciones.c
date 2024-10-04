//Ordenar un vector de 10 enteros de menor a mayor mediante una función.

#include <stdio.h>

void carga(int a[]);
void ordenar(int a[]);
void imprimir(int b[]);

void carga(int a[]){
    for(int i = 0; i < 10; i++){
        printf("Elemento %i: ", i+1);
        scanf(" %i", &a[i]);
    }
}
void ordenar(int a[]){
    
    int aux;

    for(int i = 0; i < 10; i++){
        for(int j = i; j < 10; j++){
            if(a[i] > a[j]) {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }    
        }
    }
    imprimir(a);
}

void imprimir(int b[]){
    
    printf("\nVector ordenado de menor a mayor: \n");
    for(int i = 0; i < 10; i++){
        printf("%i, ", b[i]);
    }
    printf("\n");
}

int main(){
    int v[10];

    carga(v);
    ordenar(v);

    return 0;
}