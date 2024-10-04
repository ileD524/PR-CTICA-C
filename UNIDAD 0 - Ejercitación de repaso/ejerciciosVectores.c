#include <stdio.h>
#include <stdlib.h> // Para usar malloc y free

// Función para cargar un vector de N números enteros
void cargarVector(int vector[], int N) {
    printf("Ingrese %d numeros enteros:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &vector[i]);
    }
}

// Función para imprimir un vector pasado como parámetro
void imprimirVector(int vector[], int N) {
    printf("Vector: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
}

// Función para ordenar un vector de mayor a menor
void ordenarDescendente(int vector[], int N) {
    int temp;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (vector[j] < vector[j + 1]) {
                temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }
}

// Función para ordenar un vector de menor a mayor
void ordenarAscendente(int vector[], int N) {
    int temp;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (vector[j] > vector[j + 1]) {
                temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }
}

// Función para buscar un valor en un vector ordenado de forma ascendente
int buscarEnAscendente(int vector[], int N, int valor) {
    int inicio = 0;
    int fin = N - 1;
    while (inicio <= fin) {
        int medio = (inicio + fin) / 2;
        if (vector[medio] == valor) {
            return 1; // Verdadero
        } else if (vector[medio] < valor) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }
    return 0; // Falso
}

// Función para imprimir el promedio de los elementos en posiciones pares
void promedioPosicionesPares(int vector[], int N) {
    int suma = 0;
    int contador = 0;
    for (int i = 0; i < N; i += 2) {
        suma += vector[i];
        contador++;
    }
    if (contador > 0) {
        printf("Promedio de elementos en posiciones pares: %.2f\n", (float)suma / contador);
    } else {
        printf("No hay elementos en posiciones pares\n");
    }
}

// Función para imprimir el promedio de los elementos en posiciones impares
void promedioPosicionesImpares(int vector[], int N) {
    int suma = 0;
    int contador = 0;
    for (int i = 1; i < N; i += 2) {
        suma += vector[i];
        contador++;
    }
    if (contador > 0) {
        printf("Promedio de elementos en posiciones impares: %.2f\n", (float)suma / contador);
    } else {
        printf("No hay elementos en posiciones impares\n");
    }
}

int main() {
    int N;
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &N);

    int *vector = (int *)malloc(N * sizeof(int)); // Asignación dinámica de memoria

    cargarVector(vector, N);

    printf("\nVector cargado:\n");
    imprimirVector(vector, N);

    // Ordenar de mayor a menor
    ordenarDescendente(vector, N);
    printf("\nVector ordenado de mayor a menor:\n");
    imprimirVector(vector, N);

    // Ordenar de menor a mayor
    ordenarAscendente(vector, N);
    printf("\nVector ordenado de menor a mayor:\n");
    imprimirVector(vector, N);

    // Buscar un valor en el vector ordenado
    int valor;
    printf("\nIngrese un valor a buscar en el vector ordenado: ");
    scanf("%d", &valor);
    if (buscarEnAscendente(vector, N, valor)) {
        printf("El valor %d está presente en el vector.\n", valor);
    } else {
        printf("El valor %d no está presente en el vector.\n", valor);
    }

    // Imprimir promedio de elementos en posiciones pares e impares
    promedioPosicionesPares(vector, N);
    promedioPosicionesImpares(vector, N);

    free(vector); // Liberar la memoria asignada dinámicamente

    return 0;
}