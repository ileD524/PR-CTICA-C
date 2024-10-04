#include <stdio.h>
#include <stdlib.h>

int f (int x){
    if(x > 100){
        return (x - 10);
    }else{
        return (f(f(x + 11)));
    }
}

int main(){
    int x;

    printf("Ingrese un valor: ");
    scanf(" %i", &x);

    printf("Resultado: %i\n", f(x));

    return 0;

}