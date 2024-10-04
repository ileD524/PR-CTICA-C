//Hacer las tablas de multiplicar del 1 al 9.

#include <stdio.h>

int main(){
    int i, j;

    for(i = 1; i <= 10; i++){
        printf("\nTABLA DEL %i\n\n", i);
        for(j=1; j<=10; j++){
            printf(" %i x %i = %i\n", i, j, i*j);
        }
        if(i<10){
            printf("\nPresiona Enter para continuar...");
            getchar(); // Espera a que el usuario presione Enter
        }else{
            printf("\nYa no hay más tablas por mostrar");
        }
    }
    
    return 0;
}