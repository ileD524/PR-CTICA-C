//Introducir elementos a un vector con una función.

//Lo vectores no necesitan el pase por referencia.

#include<stdio.h>

void fun(int a[]);
void imprimir(int a[]);

void fun(int a[]){
    for(int i = 0; i < 2; i++){
        printf("Introduce un valor para el vector: ");
        scanf(" %i", &a[i]);
        printf("\n");
    }
}

void imprimir(int a[]){
    for(int i = 0; i < 2; i++){
        printf("%i - ", a[i]);
    }
    printf("\n");
}
int main(){
    int v[2];

    fun(v);
    imprimir(v);

    return 0;
}