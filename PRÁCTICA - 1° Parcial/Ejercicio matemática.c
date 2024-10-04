#include <stdio.h>

// Función para verificar si dos números son iguales
int sonIguales(int num1, int num2) {
    if (num1 == num2) {
        return 1; // Verdadero
    } else {
        return 0; // Falso
    }
}

// Función para encontrar el mayor de dos números
int encontrarMayor(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

// Función para calcular el factorial de un número
int factorial(int num) {
    if (num == 0) {
        return 1;
    }
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Función para calcular el cuadrado de un número
int cuadrado(int num) {
    return num * num;
}

// Función para calcular la superficie de un rectángulo
int superficieRectangulo(int base, int altura) {
    return base * altura;
}

// Función para calcular la superficie de un triángulo
float superficieTriangulo(int base, int altura) {
    return (base * altura) / 2.0;
}

// Función para verificar si un número es par
int esPar(int num) {
    return (num % 2 == 0) ? 1 : 0;
}

// Función para verificar si un número es impar
int esImpar(int num) {
    return (num % 2 != 0) ? 1 : 0;
}

int main() {
    int num1, num2;
    printf("Ingrese dos números enteros separados por espacio: ");
    scanf("%d %d", &num1, &num2);

    printf("1. Los números son %s.\n", sonIguales(num1, num2) ? "iguales" : "diferentes");
    printf("2. El mayor de los dos números es: %d\n", encontrarMayor(num1, num2));

    int numFactorial;
    printf("Ingrese un número para calcular su factorial: ");
    scanf("%d", &numFactorial);
    printf("3. El factorial de %d es: %d\n", numFactorial, factorial(numFactorial));

    int numCuadrado;
    printf("Ingrese un número para calcular su cuadrado: ");
    scanf("%d", &numCuadrado);
    printf("4. El cuadrado de %d es: %d\n", numCuadrado, cuadrado(numCuadrado));

    int baseRectangulo, alturaRectangulo;
    printf("Ingrese la base y la altura del rectángulo separados por espacio: ");
    scanf("%d %d", &baseRectangulo, &alturaRectangulo);
    printf("5. La superficie del rectángulo es: %d\n", superficieRectangulo(baseRectangulo, alturaRectangulo));

    int baseTriangulo, alturaTriangulo;
    printf("Ingrese la base y la altura del triángulo separados por espacio: ");
    scanf("%d %d", &baseTriangulo, &alturaTriangulo);
    printf("6. La superficie del triángulo es: %.2f\n", superficieTriangulo(baseTriangulo, alturaTriangulo));

    printf("7. El número %d %s.\n", num1, esPar(num1) ? "es par" : "no es par");
    printf("8. El número %d %s.\n", num2, esImpar(num2) ? "es impar" : "no es impar");

    return 0;
}