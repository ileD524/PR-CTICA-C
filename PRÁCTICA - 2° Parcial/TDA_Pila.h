#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct nodoP{
    int info;
    struct nodoP *sig;
};

typedef struct nodoP *tipoPila;

//INTERFAZ
void nuevoP(tipoPila *nuevoNodo);
bool esVaciaP(tipoPila P);
void apilar(tipoPila *P, int x);
void desapilar(tipoPila *P, int *x);
void imprimirPila(tipoPila P);

//FUNCIONES
void nuevoP(tipoPila *nuevoNodo){
    *nuevoNodo = malloc(sizeof(struct nodoP));

    if(*nuevoNodo == NULL){
        printf("ERROR!\n");
        exit(1);
    }
}

bool esVaciaP(tipoPila P){
    return P == NULL;
}

void apilar(tipoPila *P, int x){
    tipoPila nuevoNodo;
    nuevoP(&nuevoNodo);

    nuevoNodo->info = x;
    nuevoNodo->sig = *P;
    *P = nuevoNodo;
}

void desapilar(tipoPila *P, int *x){
    tipoPila aux = *P;
    
    *x = aux->info;
    *P = aux->sig;
    free(aux);
}

void imprimirPila(tipoPila P){
    tipoPila aux = P;
    while (!esVaciaP(aux)){
        printf(" %i->", aux->info);
        aux = aux->sig;
    }
    printf(" NULL\n");
}