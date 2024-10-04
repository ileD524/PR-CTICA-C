//RUTAS DE ESCAPE: La manera que utilizamos para salir antes de que los bucles finalicen.
//Imprimir por pantalla todos los números primos comprendidos entre 2 y 2000.
#include <stdio.h>

int main(){
    int  i, j, k, aux;

    for(i = 2; i < 2000; i++){
        for( j = 2; j < i && k != 1; j++){
            aux = i % j;
            if(aux == 0){
                k = 1;
            }
        }
        if(k != 1){
            printf(" %i, ", i);
        }
        k = 0;
    }


    return 0;
}