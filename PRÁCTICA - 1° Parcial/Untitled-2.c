
#include <stdio.h>
#include "Untitled-1.c"

int main(){
    int a, b, c, e, f;
    char d;

    do{
        printf("\n\n--POTENCIA--\n\nIngrese dos valores a continuación:\n\nValor 1: ");
        scanf("%i", &a);
        printf("\nValor 2: ");
        scanf("%i", &b);

        c = POTENCIA(a, b);
        printf("\nLa potencia de %i elevado a %i es %i \n", a , b, c);

        printf("\n¿Desea ingresar otros valores? (S/N): ");
        scanf(" %c", &d);

    } while(d =='S' || d =='s');

    e = c;

    do{
        printf("\n\n--FÓRMULA (3 * a + 2 * b)--\n\nIngrese dos valores más a continuación:\n\nValor 1:");
        scanf(" %i", &a);
        printf("\nValor 2: ");
        scanf(" %i", &b);

        c = FORMULA(a, b);
        printf("\n3 * %i + 2 * %i es igual a %i", a, b, c);

        printf("\n\n¿Desea ingresar otros valores? (S/N): ");
        scanf(" %c", &d);

    } while(d =='S' || d =='s');

    f = e + c;
    printf("\nLa suma de los resultados anteriores (POTENCIA[%i] y FORMULA[%i]) es %i\n", e, c, f);

    return 0;
}