/*
Parcialito 

1) Parte teórica (consistirá en enunciados en los cuales deberán colocar verdadero o falso según corresponda)

2) Se solicitará que realicen un TDA "Cálculos" con solamente dos operaciones; por ejemplo:

Operación 1 (potenciación): recibe dos números enteros (a, b), "a" es la base y "b" el exponente y retorna como resultado la potencia.
Operación 2 (fórmula): recibe dos números enteros (a, b) y retorna 3a+2b.
3) Se solicitará un programa que utilice operaciones del TDA "Cálculos" (por ejemplo pedir al usuario que introduzca dos números enteros y que informe:

Lla potencia de los mismos.
3a+2b 
La suma de los resultados anteriores
*/

#include <stdio.h>

int POTENCIA (int a, int b);
int FORMULA (int a, int b);

int POTENCIA (int a, int b){

    int c = 1;
    for(int i = 1; i<=b; i++){
        c *= a;
    }
    return c;
}

int FORMULA (int a, int b){

    int c = 3 * a;
    int d = 2 * b;
    int e = c + d;

    return e;
}