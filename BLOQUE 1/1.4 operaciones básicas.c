#include <stdio.h>
#include <math.h>//'math.h' Operaciones matemáticas como la portencia (pow(x,y)), la raíz cuadrada (sqrt(x)) etc.

int main(){
    int x = 10, y = 2;

    x += y; //Es lo mismo que decir x = x + y
    printf("La suma x + y es igual a %i.\n", x);

    x -= y; //Es lo mismo que decir x = x - y
    printf("La resta x - y es igual a %i.\n", x);

    x *= y; //Es los mismo que decir x = x * y
    printf("La multiplicacion x * y es igual a %i.\n", x);

    x /= y; //Es lo mismo que decir x = x / y
    printf("La division x / y es igual a %i.\n", x);

    x = pow (y, x);
    printf("y elevado a x es igual a %i.\n", x);

    x = sqrt(x);
    printf("La raiz cuadrada de x es igual a %i.\n", x);

    x %= y; //Es lo mismo que decir x = x % y
    printf("El resto entre x e y es igual a %i.\n", x);

    //Operadores de incremento:

    x++;
    printf("El nuevo valor de x es %i.\n", x);

    y--;
    printf("El nuevo valor de y es %i.\n", y);

    return 0;
}

