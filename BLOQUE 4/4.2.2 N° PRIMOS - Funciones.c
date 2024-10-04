//Comprobar si dos números diferentes son primos con una función.
#include <stdio.h>

int primo(int a);

int main(){
    int x, y, res;
    
    printf("\nIngrese dos valores, separándolos con 1 espacio: ");
    scanf(" %i %i", &x, &y);

    res = primo(x);
    if(res == 1){
        printf("\n %i NO es primo.\n", x);
    }else{
        printf("\n %i es primo.\n", x);
    }

    res = primo(y);
    if(res == 1){
        printf("\n %i NO es primo.\n", y);
    }else{
        printf("\n %i es primo.\n", y);
    }


    return 0;
}
int primo(int a){
    int aux, j = 0;
    for(int i = 2; i < a && j == 0; i++){
        aux = a % i;
        if(aux == 0){
            j = 1;
        }
    }
    return j;
}