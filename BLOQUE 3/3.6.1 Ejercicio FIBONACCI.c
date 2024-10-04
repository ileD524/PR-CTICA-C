//Hacer la serie de Fibonacci hasta el término n introducido por teclado.

#include <stdio.h>

int main(){
    int x, y = 0, z = 1, res = 0;

    printf("Ingrese un número: ");
    scanf(" %i", &x);
    printf("\n");

    if(x == 1){
        printf("0");
    }else{
        printf("0, 1 ");
    }

    for(int i = 3; i <= x; i++){
        res = y + z;
        printf(" ,%i ", res);
        y = z;
        z = res;
    }
    printf("\n");
    

    return 0;
}