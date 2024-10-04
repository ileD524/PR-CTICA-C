/*Hacer un módulo que reciba una pila cargada y a partir de ella genere:
* Una pila invertida
* Una lista con los elementos múltiplos de 3

Hacer un módulo que reciba una pila y una lista cargada y elimine de la lista los elementos que se repiten en la pila,
si alguno de ellos no existiese en la lista se debe informar por pantalla el elemento. Al finalizar la pila debe quedar
como estaba originalmente.

Ej pila 3 - 5 - 8
Lista 2-3-4-7-8-9

Lista resultante 2-4-7-9*/

#include "TDA_Pila.h"
#include"TDA_Lista.h"

void pilaInvertida_ListaMultiplo3(tipoPila P);
void seRepiten(tipoPila *P, tipoLista *L);

int main(){
    tipoPila pila = NULL;
    tipoLista lista = NULL;
    int n, x;
    float y;

    printf("¿Cuántos elementos quiere cargar en la pila?: ");
    scanf(" %i", &n);
    for(int i = 0; i < n; i++){
        printf("\nElemento %i: ", i+1);
        scanf(" %i", &x);
        apilar(&pila, x);
    }

    printf("\n¿Cuántos elementos desea cargar en la lista?: ");
    scanf(" %i", &n);
    for(int i = 0; i < n; i++){
        printf("\nElemento %i: ", i+1);
        scanf(" %f", &y);
        insertarFinal(&lista, y);
    }

    pilaInvertida_ListaMultiplo3(pila);
    seRepiten(&pila, &lista);

    return 0;
}

void pilaInvertida_ListaMultiplo3(tipoPila P){
    tipoPila aux = P, invertida = NULL;
    tipoLista Lista3 = NULL;
    int a;

    printf("\nPila original: \n");
    imprimirPila(P);

    while (!esVaciaP(aux)){
        desapilar(&aux, &a);
        if(a % 3 == 0){
            insertarFinal(&Lista3, a);
        }
        apilar(&invertida, a);
    }

    printf("\nPila invertida: \n");
    imprimirPila(invertida);

    printf("\nLista con únicamente elementos de la pila múltiplos de 3: \n");
    imprimirLista(Lista3);

}

void seRepiten(tipoPila *P, tipoLista *L){
    tipoPila auxPila = NULL;
    tipoLista auxLista;
    int x;
    bool e;

    // Traverse the stack
    while (!esVaciaP(*P)) {
        desapilar(P, &x);
        apilar(&auxPila, x);

        // Traverse the list and check for the element
        auxLista = *L;
        e = false;
        while (auxLista != NULL) {
            if (auxLista->info == x) {
                eliminarElemento(L, x);
                e = true;
                break; // Element found and removed, exit loop
            }
            auxLista = auxLista->sig;
        }

        if (!e) {
            printf("\nEl elemento %d no se encuentra en la lista.\n", x);
        }
    }

    // Restore the original stack
    while (!esVaciaP(auxPila)) {
        desapilar(&auxPila, &x);
        apilar(P, x);
    }

    printf("\nLista después de eliminar los elementos repetidos: \n");
    imprimirLista(*L);
}