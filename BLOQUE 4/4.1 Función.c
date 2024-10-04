//Calcular el número mayor entre dos números con una función.
#include <stdio.h>

int maximo(int a, int b);

int main(){
    int x = 3, y = 10, max;


    //printf("\nEl valor máximo es %i.\n", maximo(x, y)); 
    /*
    Si bien se puede hacer de la misma forma que la de arriba, una buena práctica de programación es
    guardar el valor de la función creada en un variable.Esto permite que no desperdiciemos espacio de 
    almacenamiento y tiempo de ejecución llamando más de una sola vez a una función.
    */
    max = maximo(x, y);
    printf("\nEl valor máximo es %i.\n", max); //Es mejor si lo hacemos de esta forma.
    /*
    De esta manera almacenamos el resultado en una varible. La próxima vez que necesitemos el resultado de la función,
    solo bastará con llamar a la variable, y no a la función entera.
    */
    
    return 0;
}
int maximo(int a, int b){
    int aux;

    if(a > b){
        aux = a;
    }else{
        aux = b;
    }
    return aux; //No se puede devolver os valores con el 'return'. Se limita a 1 valor retornado nada más.
}