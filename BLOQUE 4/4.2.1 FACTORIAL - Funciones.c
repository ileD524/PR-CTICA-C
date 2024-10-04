//Calcular el factorial de 2 números con una función.
#include <stdio.h>

int factorial(int a);

int main(){
    int x, y, res;

    printf("\nIngrese dos valores a continuación, separándolos con 1 espacio: ");
    scanf(" %i %i", &x, &y);

    res = factorial(x);
    printf("\nEl factorial de %i es: %i\n", x, res);

    res = factorial(y);
    printf("\nEl factorial de %i es: %i\n", y, res);

    return 0;
}
int factorial(int a){
    int fact = 1;

    for(int i = 1; i <= a; i ++){
        fact *= i;
    }
    return fact;
}