//VARIABLE: no es más que la forma de ponerle un nombre a un espacio de la memoria donde guardar un dato.
//Las variables siempre deben ser declaradas o inicializadas antes.

#include <stdio.h>

int main (){
    int x = 5; //'int' número sin decimales. Ocupan 16 bits. Límites: -32768 hasta 32767.
    float y = 3.5; //'float' número con decimales. Ocupan 32 bits.
    double z = 3.666666; //'double' número con decimales. Ocupan 64 bits.
    char a = 92; //'char' 1 caracter. Código Ascii.

    printf ("El valor de x es: %i.\nEl valor de y es: %f.\n", x, y);
    printf ("El valor de z es: %f.\n", z);
    printf ("El número 92 en Ascii corresponde al caracter %c.\n", a);
    //Para usar 'printf' podemos usar las dos formas de escribir (como x e y, o como z y a).

    return 0;
}