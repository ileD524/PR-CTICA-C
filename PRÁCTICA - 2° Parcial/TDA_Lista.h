#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct nodoL{
    float info;
    struct nodoL *sig;
};

typedef struct nodoL *tipoLista;

//INTERFAZ
void nuevoL(tipoLista *nuevoNodo);
bool esVaciaL(tipoLista L);
void insertarPrincipio(tipoLista *L, float x);
void insertarFinal(tipoLista *L, float x);
bool Buscar_Elemento (tipoLista *L, int x);
void eliminarElemento(tipoLista *L, float x);
void imprimirLista(tipoLista L);

//FUNCIONES
void nuevoL(tipoLista *nuevoNodo){
    *nuevoNodo = malloc(sizeof(struct nodoL));

    if(*nuevoNodo == NULL){
        printf("ERROR!\n");
        exit(1);
    }
}

bool esVaciaL(tipoLista L){
    return L == NULL;
}

void insertarPrincipio(tipoLista *L, float x){
    tipoLista nuevoNodo;
    nuevoL(&nuevoNodo);

    nuevoNodo->info = x;
    nuevoNodo->sig = *L;
    *L = nuevoNodo;
}

void insertarFinal(tipoLista *L, float x){
    tipoLista nuevoNodo;
    nuevoL(&nuevoNodo);
    nuevoNodo->info = x;
    nuevoNodo->sig = NULL;

    if (esVaciaL(*L)) {
        *L = nuevoNodo;
    } else {
        tipoLista aux = *L;
        while (!esVaciaL(aux->sig)) {
            aux = aux->sig;
        }
        aux->sig = nuevoNodo;
    }
}

void imprimirLista(tipoLista L){
    tipoLista aux = L;
    while(!esVaciaL(aux)){
        printf(" %.2f->", aux->info);
        aux = aux->sig;
    }
    printf(" NULL\n");
}

bool Buscar_Elemento (tipoLista *L, int x){ //busca un elemento específico en la lista

    tipoLista PI = *L; //guarda al puntero al inicio de la lista en la variable PI
    int F = 0; //indicador de si el elemento está o no en la lista
    while (!esVaciaL((*L)->sig)){ //Este es un bucle que recorre la lista enlazada. Continúa mientras el siguiente nodo en la lista no esté vacío.
        if ((*L)->info == x){ //Esta línea comprueba si el valor del nodo actual ((*L)->Info) es igual al valor buscado (x). Si es así, se cambia el valor de F a 1, indicando que se ha encontrado el elemento.
	        F = 1;
        }
        *L = (*L)->sig; //Esta línea avanza el puntero de la lista al siguiente nodo.
    }

	if ((*L)->info == x){ //Esta línea comprueba si el valor del nodo actual ((*L)->Info) es igual al valor buscado (x). Si es así, se cambia el valor de F a 1, indicando que se ha encontrado el elemento.
	    F = 1;
    }
	*L = PI; //pone al puntero en su posición original
    if (F == 1){
        return(true);
    }else{
        return(false);
    }
}


void eliminarElemento (tipoLista *L, float x){
    if (Buscar_Elemento(L, x)){
        tipoLista PI, AP = NULL;
        PI = *L;

        while ((!esVaciaL(*L) && (*L)->info != x)){
            AP = *L;
            *L = (*L)->sig;
        }

        if (!esVaciaL(*L)){
            if (!esVaciaL(AP)){
                AP->sig = (*L)->sig;
            }else{
                PI = PI->sig;
            }
            free(*L);
        }

        *L = PI;
    }else{
        printf("\nERROR 404: No encontrado.\n");
    }
}